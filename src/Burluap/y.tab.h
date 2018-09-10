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

#ifndef YY_BURLAP_YY_Y_TAB_H_INCLUDED
# define YY_BURLAP_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int burlap_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BREAK = 258,
    DO = 259,
    ELIF = 260,
    ELSE = 261,
    END = 262,
    FOR = 263,
    FUNCTION = 264,
    GLOBAL = 265,
    IF = 266,
    IN = 267,
    NEXT = 268,
    RETURN = 269,
    SHARED = 270,
    THEN = 271,
    WHILE = 272,
    ASSIGN = 273,
    OR = 274,
    AND = 275,
    EQ = 276,
    NE = 277,
    LT = 278,
    GT = 279,
    LE = 280,
    GE = 281,
    COLON = 282,
    PLUS = 283,
    MINUS = 284,
    MULT = 285,
    DIV = 286,
    MOD = 287,
    BKSLV = 288,
    POW = 289,
    TRANS = 290,
    NOT = 291,
    DOT = 292,
    LPAREN = 293,
    RPAREN = 294,
    LBRACK = 295,
    RBRACK = 296,
    COMMA = 297,
    SEMICOL = 298,
    ID = 299,
    STRLIT = 300,
    NUMLIT = 301,
    CONSTANT = 302
  };
#endif
/* Tokens.  */
#define BREAK 258
#define DO 259
#define ELIF 260
#define ELSE 261
#define END 262
#define FOR 263
#define FUNCTION 264
#define GLOBAL 265
#define IF 266
#define IN 267
#define NEXT 268
#define RETURN 269
#define SHARED 270
#define THEN 271
#define WHILE 272
#define ASSIGN 273
#define OR 274
#define AND 275
#define EQ 276
#define NE 277
#define LT 278
#define GT 279
#define LE 280
#define GE 281
#define COLON 282
#define PLUS 283
#define MINUS 284
#define MULT 285
#define DIV 286
#define MOD 287
#define BKSLV 288
#define POW 289
#define TRANS 290
#define NOT 291
#define DOT 292
#define LPAREN 293
#define RPAREN 294
#define LBRACK 295
#define RBRACK 296
#define COMMA 297
#define SEMICOL 298
#define ID 299
#define STRLIT 300
#define NUMLIT 301
#define CONSTANT 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 54 "parser.y" /* yacc.c:1909  */

    int		ival;
    Address	addr;
    char       *sval;
    descriptor *desc;
    burlap_yyloc	loc;
    void       *ptr;

#line 157 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int burlap_yyparse (void);

#endif /* !YY_BURLAP_YY_Y_TAB_H_INCLUDED  */
