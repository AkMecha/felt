/*
    This file is part of the FElt finite element analysis package.
    Copyright (C) 1993-2000 Jason I. Gobat and Darren C. Atkinson

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "matrix.h"
# include "cmatrix.h"
# include "error.h"

complex cmdata (const ComplexMatrix &A, unsigned int row, unsigned int col)
{
   unsigned	height;
   unsigned	temp;

   if (IsFull (A))
      return A -> data [row][col];
   else if (IsCompact (A)) {
      if (row > col) {
         temp = col;
         col = row;
         row = temp;
      }

      if (col == 1)
         height = 1;
      else
         height = A -> diag [col] - A -> diag [col - 1];

      if (row > col - height)
         return A -> data [A -> diag [col] + row - col][1]; 
      else
         return zero();
   }

   return zero();
}

ComplexMatrix CreateFullComplexMatrix (unsigned int rows, unsigned int cols)
{
   unsigned	i;

   ComplexMatrix m(new struct complex_matrix);
   
   m -> data = (complex **) malloc (sizeof (complex *) * rows);
   if (m -> data == NULL)
	Fatal ("unable to allocate full matrix");
   m -> data --;

   m -> data [1] = (complex *) malloc (sizeof (complex) * rows * cols);
   if (m -> data [1] == NULL)
	Fatal ("unable to allocate full matrix");
   m -> data [1] --;
   for (i = 2 ; i <= rows ; i++)
      m -> data [i] = m -> data [i-1] + cols;

   m -> nrows = rows;
   m -> ncols = cols;
   m -> size = 0;

   return m;
}

ComplexMatrix CreateComplexRowVector (unsigned int size)
{
   return CreateFullComplexMatrix (1, size);
}

ComplexMatrix CreateComplexColumnVector (unsigned int size)
{
   return CreateFullComplexMatrix (size, 1);
}

complex_matrix::~complex_matrix()
{
    this -> data [1] ++;
    free (this -> data [1]);

    this -> data ++;
    free (this -> data);
}

ComplexMatrix CreateCompactComplexMatrix (unsigned int rows, unsigned int cols,
                                          unsigned int size, const cvector1<unsigned> *diag)
{
   ComplexMatrix	A;

   A = CreateFullComplexMatrix (size, 1);

   A -> nrows = rows; 
   A -> ncols = cols;
   A -> size = size;

   if (diag != NULL)
       A -> diag = *diag;
   
   return A;
}

ComplexMatrix CreateCopyComplexMatrix (const ComplexMatrix &a)
{
   ComplexMatrix	b;
   unsigned	size;
   unsigned	rows, cols;

   rows = a -> nrows;
   cols = a -> ncols;

   if (IsCompact(a)) {
       size = Msize(a)*sizeof(complex);
       b = CreateCompactComplexMatrix (rows, cols, Msize(a), NULL); 
       b->diag = a->diag;
   }
   else { 
      size = rows*cols*sizeof (complex);
      b = CreateFullComplexMatrix (rows, cols);
   }   

   memcpy ((void *) &(b -> data[1][1]),(void *) &(a -> data[1][1]), size);

   return b;
}

ComplexMatrix MakeFullFromCompactComplex (const ComplexMatrix &A)
{
   unsigned 		i,j;
   ComplexMatrix	B;

   B = CreateFullComplexMatrix (Mrows(A), Mcols(A));

   for (i = 1 ; i <= Mrows(A) ; i++) 
      for (j = 1 ; j <= Mcols(A) ; j++)
         B -> data [i][j] = cmdata(A, i, j);

   return B; 
}

ComplexMatrix MakeCompactFromFullComplex (const ComplexMatrix &A)
{
   ComplexMatrix	compA;
   unsigned	i,j,k,
		curr_row;
   unsigned	rows,cols;
   unsigned	size;
   unsigned	height;

   if (IsCompact(A))
       return ComplexMatrix();

   if (!IsSquare(A))
       return ComplexMatrix();

   if (!IsSymmetricComplexMatrix(A))
       return ComplexMatrix();

   rows = Mrows (A);
   cols = Mcols (A);

   size = 0;
   for (i = 1 ; i <= rows ; i++) {
      if (re(cmdata(A,i,i)) == 0 && im(cmdata(A,i,i)) == 0) {
         size = 1;
         break;
      }
   }

   if (size)
       return ComplexMatrix();

	/*
	 * determine the height of the columns and store in diag
	 */

   cvector1<unsigned> diag(cols);
   
   for (j = 1 ; j <= cols ; j++) {
      diag [j] = 0;
      for (i = 1 ; i <= rows; i++) {

         if ((re(cmdata(A,i,j)) != 0.0 || im(cmdata(A,i,j)) != 0)  && 
             i <= j && (j - (i-1)) > diag [j]) 

            diag [j] = j - (i-1);
      }
   }

   size = 0;
   for (i = 1 ; i <= cols ; i++) 
      size += diag [i];
   
   compA = CreateCompactComplexMatrix (rows, cols, size, NULL);

   diag [1] = 1;
   compA -> data [1][1] = cmdata (A, 1, 1);
  
   for (i = 2 ; i <= cols ; i++) {
      height = diag [i];
      diag [i] += diag [i-1];
      curr_row = i - height + 1 ;
      for (k = diag [i] - height + 1 ; k <= diag [i] ; k++) 
         compA -> data [k][1] = cmdata (A, curr_row++, i);
   }

   compA -> diag = diag;

   return compA;
} 
