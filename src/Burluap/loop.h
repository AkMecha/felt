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

/************************************************************************
 * File:	loop.h							*
 *									*
 * Description:	This file contains the public function and type		*
 *		declarations for translating loop constructs during	*
 *		parsing.						*
 ************************************************************************/

# ifndef _LOOP_H
# define _LOOP_H
# include "opcodes.h"			/* Address type definition */

typedef struct loop_node  *loop_node;
typedef struct break_node *break_node;

loop_node start_break (int type);
void end_break (int type, loop_node lnode);
void enter_loop (int type);
void exit_loop (Address start, Address end);
void exit_all (void);

# endif /* _LOOP_H */
