/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_CORD_YY_PARSER_HPP_INCLUDED
# define YY_CORD_YY_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int cord_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    OR = 258,
    AND = 259,
    EQUALS = 260,
    NEQUAL = 261,
    LT_EQ = 262,
    GT_EQ = 263,
    LSHIFT = 264,
    RSHIFT = 265,
    UNARY = 266,
    NAME = 267,
    INTEGER = 268,
    DOUBLE = 269,
    LINEAR = 270,
    SINUSOIDAL = 271,
    COSINUSOIDAL = 272,
    LOGARITHMIC = 273,
    PARABOLIC = 274,
    REVERSE_LOGARITHMIC = 275,
    REVERSE_PARABOLIC = 276,
    SIN = 277,
    COS = 278,
    TAN = 279,
    POW = 280,
    EXP = 281,
    LOG = 282,
    LOG10 = 283,
    SQRT = 284,
    HYPOT = 285,
    FLOOR = 286,
    CEIL = 287,
    FMOD = 288,
    FABS = 289,
    LINE = 290,
    GRID = 291,
    QUADGRID = 292,
    BRICKGRID = 293,
    TRIMESH = 294,
    END = 295,
    NODE_EQ = 296,
    ELEMENT_EQ = 297,
    CONSTRAINT_EQ = 298,
    MATERIAL_EQ = 299,
    TYPE_EQ = 300,
    START_EQ = 301,
    END_EQ = 302,
    NUMBER_EQ = 303,
    RULE_EQ = 304,
    X_NUMBER_EQ = 305,
    Y_NUMBER_EQ = 306,
    Z_NUMBER_EQ = 307,
    X_RULE_EQ = 308,
    Y_RULE_EQ = 309,
    Z_RULE_EQ = 310,
    TARGET_EQ = 311,
    ALPHA_EQ = 312,
    BOUNDARY_EQ = 313,
    HOLE_EQ = 314
  };
#endif
/* Tokens.  */
#define OR 258
#define AND 259
#define EQUALS 260
#define NEQUAL 261
#define LT_EQ 262
#define GT_EQ 263
#define LSHIFT 264
#define RSHIFT 265
#define UNARY 266
#define NAME 267
#define INTEGER 268
#define DOUBLE 269
#define LINEAR 270
#define SINUSOIDAL 271
#define COSINUSOIDAL 272
#define LOGARITHMIC 273
#define PARABOLIC 274
#define REVERSE_LOGARITHMIC 275
#define REVERSE_PARABOLIC 276
#define SIN 277
#define COS 278
#define TAN 279
#define POW 280
#define EXP 281
#define LOG 282
#define LOG10 283
#define SQRT 284
#define HYPOT 285
#define FLOOR 286
#define CEIL 287
#define FMOD 288
#define FABS 289
#define LINE 290
#define GRID 291
#define QUADGRID 292
#define BRICKGRID 293
#define TRIMESH 294
#define END 295
#define NODE_EQ 296
#define ELEMENT_EQ 297
#define CONSTRAINT_EQ 298
#define MATERIAL_EQ 299
#define TYPE_EQ 300
#define START_EQ 301
#define END_EQ 302
#define NUMBER_EQ 303
#define RULE_EQ 304
#define X_NUMBER_EQ 305
#define Y_NUMBER_EQ 306
#define Z_NUMBER_EQ 307
#define X_RULE_EQ 308
#define Y_RULE_EQ 309
#define Z_RULE_EQ 310
#define TARGET_EQ 311
#define ALPHA_EQ 312
#define BOUNDARY_EQ 313
#define HOLE_EQ 314

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 76 "parser.y" /* yacc.c:1909  */

    int    i;
    double d;
    char  *s;

#line 178 "parser.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE cord_yylval;

int cord_yyparse (void);

#endif /* !YY_CORD_YY_PARSER_HPP_INCLUDED  */
