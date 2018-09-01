/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         cord_yyparse
#define yylex           cord_yylex
#define yyerror         cord_yyerror
#define yydebug         cord_yydebug
#define yynerrs         cord_yynerrs

#define yylval          cord_yylval
#define yychar          cord_yychar

/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

/*
    This file is part of the FElt finite element analysis package.
    Copyright (C) 1993,1994 Jason I. Gobat and Darren C. Atkinson

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
 * File:	parser.y						*
 *									*
 * Description:	This file contains the yacc specification for the	*
 *		parser for the corduroy element generator.		*
 ************************************************************************/

# include <stdio.h>
# include <string.h>
# include "code.h"
# include "error.h"
# include "problem.h"
# include "generator.h"
# include "allocate.h"
# include "definition.h"

# if !defined (__GNUC__) && !defined (__sparc__)
# define alloca malloc		/* prevents alloca from being called */
# endif

extern "C" void cord_yyerror (const char *msg);
extern "C" int  cord_yylex   (void);


typedef double xy_pair [2];


static double		x;
static double		y;
static double		z;

static double		last_z;

static Definition	last_line_definition;
static Definition	last_grid_definition;
static Definition	last_quadgrid_definition;
static Definition	last_brickgrid_definition;
static Definition	last_trimesh_definition;

static unsigned		line_size;
static unsigned		grid_size;
static unsigned		quadgrid_size;
static unsigned		brickgrid_size;
static unsigned		trimesh_size;
static unsigned		curve_size;
static unsigned		vcl_size;

static struct _line	line;
static struct _grid	grid;
static struct _grid     quadgrid;
static struct _grid     brickgrid;
static struct _trimesh	trimesh;
static struct _curve	curve;

#line 149 "parser.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.hpp".  */
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
#line 76 "parser.y" /* yacc.c:355  */

    int    i;
    double d;
    char  *s;

#line 313 "parser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE cord_yylval;

int cord_yyparse (void);

#endif /* !YY_CORD_YY_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 330 "parser.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   694

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  130
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  256

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    24,     2,     2,     2,    22,     9,     2,
      77,    78,    20,    18,    76,    19,     2,    21,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     4,     2,
      12,     2,    13,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    74,     2,    75,     8,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     7,     2,    25,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     5,     6,
      10,    11,    14,    15,    16,    17,    23,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   121,   121,   127,   146,   147,   152,   157,   162,   168,
     179,   180,   185,   186,   187,   188,   189,   196,   207,   222,
     223,   228,   234,   241,   248,   253,   263,   274,   288,   289,
     294,   300,   307,   314,   319,   324,   329,   334,   339,   349,
     360,   372,   373,   378,   384,   390,   396,   401,   406,   411,
     420,   431,   448,   449,   454,   460,   467,   474,   479,   484,
     489,   494,   499,   509,   520,   536,   537,   542,   548,   553,
     558,   573,   596,   601,   606,   611,   616,   621,   626,   636,
     646,   657,   667,   677,   683,   690,   702,   712,   723,   733,
     743,   749,   755,   761,   767,   773,   779,   785,   791,   797,
     803,   809,   815,   821,   827,   833,   839,   844,   850,   856,
     862,   867,   873,   879,   884,   890,   896,   902,   908,   914,
     920,   926,   932,   938,   944,   950,   956,   966,   975,   984,
     995
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "'?'", "':'", "OR", "AND", "'|'", "'^'",
  "'&'", "EQUALS", "NEQUAL", "'<'", "'>'", "LT_EQ", "GT_EQ", "LSHIFT",
  "RSHIFT", "'+'", "'-'", "'*'", "'/'", "'%'", "UNARY", "'!'", "'~'",
  "NAME", "INTEGER", "DOUBLE", "LINEAR", "SINUSOIDAL", "COSINUSOIDAL",
  "LOGARITHMIC", "PARABOLIC", "REVERSE_LOGARITHMIC", "REVERSE_PARABOLIC",
  "SIN", "COS", "TAN", "POW", "EXP", "LOG", "LOG10", "SQRT", "HYPOT",
  "FLOOR", "CEIL", "FMOD", "FABS", "LINE", "GRID", "QUADGRID", "BRICKGRID",
  "TRIMESH", "END", "NODE_EQ", "ELEMENT_EQ", "CONSTRAINT_EQ",
  "MATERIAL_EQ", "TYPE_EQ", "START_EQ", "END_EQ", "NUMBER_EQ", "RULE_EQ",
  "X_NUMBER_EQ", "Y_NUMBER_EQ", "Z_NUMBER_EQ", "X_RULE_EQ", "Y_RULE_EQ",
  "Z_RULE_EQ", "TARGET_EQ", "ALPHA_EQ", "BOUNDARY_EQ", "HOLE_EQ", "'['",
  "']'", "','", "'('", "')'", "$accept", "specification", "initialize",
  "start_parameter_list", "start_parameter", "generator_list", "generator",
  "line_generator", "line_specifier", "line_parameter_list",
  "line_parameter", "grid_generator", "grid_specifier",
  "grid_parameter_list", "grid_parameter", "quadgrid_generator",
  "quadgrid_specifier", "quadgrid_parameter_list", "quadgrid_parameter",
  "brickgrid_generator", "brickgrid_specifier", "brickgrid_parameter_list",
  "brickgrid_parameter", "trimesh_generator", "trimesh_specifier",
  "trimesh_parameter_list", "trimesh_parameter", "rule", "pair_list",
  "triple", "opt_z_coordinate", "pair", "constant_expression",
  "expression", "function", "if_action", "else_action", "or_action",
  "and_action", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    63,    58,   258,   259,   124,    94,    38,
     260,   261,    60,    62,   262,   263,   264,   265,    43,    45,
      42,    47,    37,   266,    33,   126,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,    91,    93,    44,    40,    41
};
# endif

#define YYPACT_NINF -70

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-70)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -70,    16,   -70,   -70,   -32,   -10,    -6,    12,    42,   -70,
      69,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -54,   114,   100,   286,   -37,    47,     0,     0,
     549,   157,   -70,    52,     0,     0,   549,   549,   549,   157,
     157,   157,   -70,    68,    18,    18,   549,   549,   157,   157,
     -70,    87,     0,     0,   549,   549,   549,   157,   157,   157,
     -70,    88,   102,   549,    62,    83,   -70,   -70,   549,   -70,
     -70,   549,   549,   549,   549,   -70,   -70,    85,    93,    94,
      99,   107,   116,   117,   118,   155,   175,   207,   271,   272,
     549,   -70,   596,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   549,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   101,   -70,   -70,   -70,   -70,   549,   549,
     549,   549,   549,   549,   549,   549,   549,   549,   549,   549,
     549,    34,   -70,   -70,   -70,   549,   549,   549,   549,   549,
     549,   549,   549,   549,   549,   549,   549,   549,   549,   549,
     549,   280,   -47,    -5,   549,   134,   208,   228,   504,   248,
     282,   302,   322,   524,   356,   376,   544,   396,   -70,   549,
     549,   549,   672,   188,   261,    45,    45,   403,   403,   403,
     403,   408,   408,   106,   106,   -70,   -70,   -70,   549,   -70,
      18,   -70,   -70,   281,   -70,   -70,   -70,   549,   -70,   -70,
     -70,   -70,   549,   -70,   -70,   549,   -70,   624,   641,   657,
     353,   -70,   549,   354,   430,   450,   470,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   549,   596
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     5,     1,    11,     0,     0,     0,     0,     4,
       0,     6,     7,     9,     8,    18,    27,    40,    51,    64,
       2,    10,    12,    20,    13,    29,    14,    42,    15,    53,
      16,    66,    17,    26,    39,    50,    63,     0,     0,     0,
       0,     0,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,     0,     0,     0,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,     0,     0,     0,     0,    65,    21,     0,    22,
      23,     0,     0,     0,     0,   111,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    24,    86,   113,    72,    74,    73,    75,    76,    77,
      78,    25,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    43,     0,    44,    45,    46,    47,    48,    49,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    67,    69,
      68,    81,    81,     0,   106,   107,   108,   109,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   127,   129,   130,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   110,     0,
       0,     0,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,     0,    70,
       0,    80,    71,    84,   114,   115,   116,     0,   118,   119,
     120,   121,     0,   123,   124,     0,   126,     0,    88,    89,
       0,    79,     0,     0,     0,     0,     0,   128,    85,    83,
      82,   117,   122,   125,     0,    87
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,    66,   216,    30,
     -70,   -51,   -46,   -69,   -70,   -70,   -70,   -70,   -70
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,     9,    10,    21,    22,    23,    32,
      42,    24,    25,    33,    52,    26,    27,    34,    60,    28,
      29,    35,    70,    30,    31,    36,    76,   111,   182,    79,
     243,   221,   101,   102,   103,   199,   254,   200,   201
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     115,   116,   117,   123,   124,    37,    38,    39,    40,    41,
     125,   126,   144,   145,   146,   147,     3,    11,   132,   133,
     134,    12,    71,     5,     6,     7,     8,   140,   219,   220,
     122,   161,   143,    72,    73,    74,    75,   162,    13,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,    14,    80,
     222,   220,   122,    77,   113,   114,   181,    78,   112,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   130,   131,   121,   122,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   198,   129,   138,   118,   119,   120,    15,    16,
      17,    18,    19,    20,   127,   128,   178,   179,   180,   139,
     237,   238,   239,   135,   136,   137,   141,   162,   223,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   142,   244,    53,
      54,    55,   148,   245,    56,    57,   246,    58,    59,   241,
     149,   150,   240,    43,    44,    45,   151,   184,    46,    47,
      48,    49,    50,    51,   152,   255,   104,   105,   106,   107,
     108,   109,   110,   153,   154,   155,   249,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   162,   224,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   162,   156,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   162,   157,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   158,   162,   225,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   162,   226,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   162,   228,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,    61,    62,    63,   159,   160,
      64,    65,    66,    67,    68,    69,   218,   242,   183,   162,
     229,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   162,
     230,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   162,
     231,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   174,
     175,   176,   177,   178,   179,   180,   176,   177,   178,   179,
     180,   248,   250,   162,   233,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   162,   234,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   162,   236,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   162,   251,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   162,   252,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   162,   253,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,    81,    82,     0,
       0,     0,     0,    83,    84,     0,    85,    86,     0,     0,
     227,     0,     0,     0,     0,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,     0,   162,
     232,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,     0,
     235,     0,     0,     0,     0,     0,   100,   162,   247,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180
};

static const yytype_int16 yycheck[] =
{
      46,    47,    48,    54,    55,    59,    60,    61,    62,    63,
      56,    57,    81,    82,    83,    84,     0,    27,    64,    65,
      66,    27,    59,    55,    56,    57,    58,    73,    75,    76,
      77,   100,    78,    70,    71,    72,    73,     3,    26,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    26,    39,
      75,    76,    77,    26,    44,    45,   122,    77,    26,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,    62,    63,    26,    77,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,    78,    26,    26,    49,    50,    51,    49,    50,
      51,    52,    53,    54,    58,    59,    20,    21,    22,    27,
     199,   200,   201,    67,    68,    69,    74,     3,   184,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    74,   227,    59,
      60,    61,    77,   232,    64,    65,   235,    67,    68,   220,
      77,    77,   218,    59,    60,    61,    77,    76,    64,    65,
      66,    67,    68,    69,    77,   254,    29,    30,    31,    32,
      33,    34,    35,    77,    77,    77,   242,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     3,    78,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     3,    77,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     3,    77,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    77,     3,    78,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,     3,    78,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,     3,    78,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    59,    60,    61,    77,    77,
      64,    65,    66,    67,    68,    69,    76,    76,   142,     3,
      78,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     3,
      78,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     3,
      78,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    16,
      17,    18,    19,    20,    21,    22,    18,    19,    20,    21,
      22,    78,    78,     3,    78,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     3,    78,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     3,    78,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    78,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     3,    78,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     3,    78,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    18,    19,    -1,
      -1,    -1,    -1,    24,    25,    -1,    27,    28,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,     3,
      76,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    77,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    80,    81,     0,    82,    55,    56,    57,    58,    83,
      84,    27,    27,    26,    26,    49,    50,    51,    52,    53,
      54,    85,    86,    87,    90,    91,    94,    95,    98,    99,
     102,   103,    88,    92,    96,   100,   104,    59,    60,    61,
      62,    63,    89,    59,    60,    61,    64,    65,    66,    67,
      68,    69,    93,    59,    60,    61,    64,    65,    67,    68,
      97,    59,    60,    61,    64,    65,    66,    67,    68,    69,
     101,    59,    70,    71,    72,    73,   105,    26,    77,   108,
     108,    18,    19,    24,    25,    27,    28,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      77,   111,   112,   113,    29,    30,    31,    32,    33,    34,
      35,   106,    26,   108,   108,   111,   111,   111,   106,   106,
     106,    26,    77,   110,   110,   111,   111,   106,   106,    26,
     108,   108,   111,   111,   111,   106,   106,   106,    26,    27,
     111,    74,    74,   111,   112,   112,   112,   112,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,   112,     3,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,   111,   107,   107,    76,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,    78,   114,
     116,   117,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,    76,    75,
      76,   110,    75,   111,    78,    78,    78,    76,    78,    78,
      78,    78,    76,    78,    78,    76,    78,   112,   112,   112,
     111,   110,    76,   109,   112,   112,   112,     4,    78,   111,
      78,    78,    78,    78,   115,   112
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    79,    80,    81,    82,    82,    83,    83,    83,    83,
      84,    84,    85,    85,    85,    85,    85,    86,    87,    88,
      88,    89,    89,    89,    89,    89,    90,    91,    92,    92,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    94,
      95,    96,    96,    97,    97,    97,    97,    97,    97,    97,
      98,    99,   100,   100,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   102,   103,   104,   104,   105,   105,   105,
     105,   105,   106,   106,   106,   106,   106,   106,   106,   107,
     107,   107,   108,   109,   109,   110,   111,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   114,   115,   116,
     117
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     2,     0,     2,     2,     2,     2,
       2,     0,     1,     1,     1,     1,     1,     2,     1,     2,
       0,     2,     2,     2,     2,     2,     2,     1,     2,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     2,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     2,     0,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     0,     2,     2,     2,
       4,     4,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     0,     6,     2,     0,     5,     1,     7,     4,     4,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       3,     1,     1,     1,     4,     4,     4,     6,     4,     4,
       4,     4,     6,     4,     4,     6,     4,     0,     0,     0,
       0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 127 "parser.y" /* yacc.c:1646  */
    {
		line_size      = 0;
		grid_size      = 0;
                quadgrid_size  = 0;
                brickgrid_size = 0;
		trimesh_size   = 0;

		last_line_definition      = LookupDefinition ("truss");
		last_grid_definition      = last_line_definition;
		last_quadgrid_definition  = LookupDefinition ("quad_PlaneStress");
		last_brickgrid_definition = LookupDefinition ("brick");
		last_trimesh_definition   = LookupDefinition ("CSTPlaneStress");
	    }
#line 1699 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 153 "parser.y" /* yacc.c:1646  */
    {
		generator.start_node = (yyvsp[0].i);
	    }
#line 1707 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 158 "parser.y" /* yacc.c:1646  */
    {
		generator.start_element = (yyvsp[0].i);
	    }
#line 1715 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 163 "parser.y" /* yacc.c:1646  */
    {
		Deallocate (generator.material);
		generator.material = (yyvsp[0].s);
	    }
#line 1724 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 169 "parser.y" /* yacc.c:1646  */
    {
		Deallocate (generator.constraint);
		generator.constraint = (yyvsp[0].s);
	    }
#line 1733 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 197 "parser.y" /* yacc.c:1646  */
    {
             Line new_line = new struct _line;
             *new_line = line;
             generator.lines.push_back(new_line);
             last_line_definition = line.definition;
        }
#line 1744 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 208 "parser.y" /* yacc.c:1646  */
    {
		last_z = 0;

		line.xs = line.ys = line.zs = 0;
		line.xe = line.ye = line.ze = 0;
		line.rule = LinearRule;
		line.number = 1;

		line.definition = last_line_definition;
	    }
#line 1759 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 229 "parser.y" /* yacc.c:1646  */
    {
		line.definition = defnlookup ((yyvsp[0].s));
		Deallocate ((yyvsp[0].s));
	    }
#line 1768 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 235 "parser.y" /* yacc.c:1646  */
    {
		line.xs = x;
		line.ys = y;
		line.zs = z;
	    }
#line 1778 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 242 "parser.y" /* yacc.c:1646  */
    {
		line.xe = x;
		line.ye = y;
		line.ze = z;
	    }
#line 1788 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 249 "parser.y" /* yacc.c:1646  */
    {
		line.number = (yyvsp[0].d);
	    }
#line 1796 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 254 "parser.y" /* yacc.c:1646  */
    {
             line.rule = (Rule) (yyvsp[0].i);
	    }
#line 1804 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 264 "parser.y" /* yacc.c:1646  */
    {
             Grid new_grid = new struct _grid;
             *new_grid = grid;
             generator.grids.push_back(new_grid);
             last_grid_definition = grid.definition;
	    }
#line 1815 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 275 "parser.y" /* yacc.c:1646  */
    {
		last_z = 0;

		grid.xs = grid.ys = grid.zs = 0;
		grid.xe = grid.ye = grid.ze = 0;
		grid.xnumber = grid.ynumber = grid.znumber = 1;
		grid.xrule = grid.yrule = grid.zrule = LinearRule;
		grid.definition = last_grid_definition;
	    }
#line 1829 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 295 "parser.y" /* yacc.c:1646  */
    {
		grid.definition = defnlookup ((yyvsp[0].s));
		Deallocate ((yyvsp[0].s));
	    }
#line 1838 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 301 "parser.y" /* yacc.c:1646  */
    {
		grid.xs = x;
		grid.ys = y;
		grid.zs = z;
	    }
#line 1848 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 308 "parser.y" /* yacc.c:1646  */
    {
		grid.xe = x;
		grid.ye = y;
		grid.ze = z;
	    }
#line 1858 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 315 "parser.y" /* yacc.c:1646  */
    {
		grid.xnumber = (yyvsp[0].d);
	    }
#line 1866 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 320 "parser.y" /* yacc.c:1646  */
    {
		grid.ynumber = (yyvsp[0].d);
	    }
#line 1874 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 325 "parser.y" /* yacc.c:1646  */
    {
		grid.znumber = (yyvsp[0].d);
	    }
#line 1882 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 330 "parser.y" /* yacc.c:1646  */
    {
             grid.xrule = (Rule) (yyvsp[0].i);
	    }
#line 1890 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 335 "parser.y" /* yacc.c:1646  */
    {
             grid.yrule = (Rule) (yyvsp[0].i);
	    }
#line 1898 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 340 "parser.y" /* yacc.c:1646  */
    {
             grid.zrule = (Rule) (yyvsp[0].i);
	    }
#line 1906 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 350 "parser.y" /* yacc.c:1646  */
    {
             Grid new_quadgrid = new struct _grid;
             *new_quadgrid = quadgrid;
             generator.quadgrids.push_back(new_quadgrid);
             last_quadgrid_definition = quadgrid.definition;
	    }
#line 1917 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 361 "parser.y" /* yacc.c:1646  */
    {
		quadgrid.xs = quadgrid.ys = 0;
		quadgrid.xe = quadgrid.ye = 0;
		quadgrid.xnumber = quadgrid.ynumber = 1;
		quadgrid.xrule = quadgrid.yrule = LinearRule;
		quadgrid.definition = last_quadgrid_definition;
	    }
#line 1929 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 379 "parser.y" /* yacc.c:1646  */
    {
		quadgrid.definition = defnlookup ((yyvsp[0].s));
		Deallocate ((yyvsp[0].s));
	    }
#line 1938 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 385 "parser.y" /* yacc.c:1646  */
    {
		quadgrid.xs = x;
		quadgrid.ys = y;
	    }
#line 1947 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 391 "parser.y" /* yacc.c:1646  */
    {
		quadgrid.xe = x;
		quadgrid.ye = y;
	    }
#line 1956 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 397 "parser.y" /* yacc.c:1646  */
    {
		quadgrid.xnumber = (yyvsp[0].d);
	    }
#line 1964 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 402 "parser.y" /* yacc.c:1646  */
    {
		quadgrid.ynumber = (yyvsp[0].d);
	    }
#line 1972 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 407 "parser.y" /* yacc.c:1646  */
    {
             quadgrid.xrule = (Rule) (yyvsp[0].i);
	    }
#line 1980 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 412 "parser.y" /* yacc.c:1646  */
    {
             quadgrid.yrule = (Rule) (yyvsp[0].i);
	    }
#line 1988 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 421 "parser.y" /* yacc.c:1646  */
    {
             Grid new_brickgrid = new struct _grid;
             *new_brickgrid = brickgrid;
             generator.brickgrids.push_back(new_brickgrid);
             last_brickgrid_definition = brickgrid.definition;
	    }
#line 1999 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 432 "parser.y" /* yacc.c:1646  */
    {
		brickgrid.xs = brickgrid.ys = 0;
		brickgrid.xe = brickgrid.ye = 0;
		brickgrid.ze = brickgrid.ze = 0;
		brickgrid.xnumber = 1;
                brickgrid.ynumber = 1;
                brickgrid.znumber = 1;
		brickgrid.xrule = LinearRule;
                brickgrid.yrule = LinearRule;
                brickgrid.zrule = LinearRule;
		brickgrid.definition = last_brickgrid_definition;
	    }
#line 2016 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 455 "parser.y" /* yacc.c:1646  */
    {
		brickgrid.definition = defnlookup ((yyvsp[0].s));
		Deallocate ((yyvsp[0].s));
	    }
#line 2025 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 461 "parser.y" /* yacc.c:1646  */
    {
		brickgrid.xs = x;
		brickgrid.ys = y;
		brickgrid.zs = z;
	    }
#line 2035 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 468 "parser.y" /* yacc.c:1646  */
    {
		brickgrid.xe = x;
		brickgrid.ye = y;
		brickgrid.ze = z;
	    }
#line 2045 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 475 "parser.y" /* yacc.c:1646  */
    {
		brickgrid.xnumber = (yyvsp[0].d);
	    }
#line 2053 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 480 "parser.y" /* yacc.c:1646  */
    {
		brickgrid.ynumber = (yyvsp[0].d);
	    }
#line 2061 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 485 "parser.y" /* yacc.c:1646  */
    {
		brickgrid.znumber = (yyvsp[0].d);
	    }
#line 2069 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 490 "parser.y" /* yacc.c:1646  */
    {
             brickgrid.xrule = (Rule) (yyvsp[0].i);
	    }
#line 2077 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 495 "parser.y" /* yacc.c:1646  */
    {
             brickgrid.yrule = (Rule) (yyvsp[0].i);
	    }
#line 2085 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 500 "parser.y" /* yacc.c:1646  */
    {
             brickgrid.zrule = (Rule) (yyvsp[0].i);
	    }
#line 2093 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 510 "parser.y" /* yacc.c:1646  */
    {
             TriMesh new_mesh = new struct _trimesh;
             *new_mesh = trimesh;
             generator.trimeshes.push_back(new_mesh);
             last_trimesh_definition = trimesh.definition;
	    }
#line 2104 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 521 "parser.y" /* yacc.c:1646  */
    {
		trimesh.numcurves  = 0;
		trimesh.alpha	   = 2.0;
		trimesh.target	   = 100;

		trimesh.definition = last_trimesh_definition;

		curve_size = 2;
		if (!(trimesh.curves = Allocate (Curve, curve_size)))
		    Fatal ("unable to allocate curve array");
	    }
#line 2120 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 543 "parser.y" /* yacc.c:1646  */
    {
		trimesh.definition = defnlookup ((yyvsp[0].s));
		Deallocate ((yyvsp[0].s));
	    }
#line 2129 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 549 "parser.y" /* yacc.c:1646  */
    {
		trimesh.alpha = (yyvsp[0].d);
	    }
#line 2137 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 554 "parser.y" /* yacc.c:1646  */
    {
		trimesh.target = (yyvsp[0].i);
	    }
#line 2145 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 559 "parser.y" /* yacc.c:1646  */
    {
		Curve new_curve;


		if (!(new_curve = AllocNew (struct _curve)))
		    Fatal ("unable to allocate new curve");

		*new_curve = curve;
		trimesh.curves [0] = new_curve;

		if (trimesh.numcurves == 0)
		    trimesh.numcurves = 1;
	    }
#line 2163 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 574 "parser.y" /* yacc.c:1646  */
    {
		Curve new_curve;


		if (trimesh.numcurves == curve_size)
		    if (!Reallocate (trimesh.curves, Curve, curve_size <<= 1))
			Fatal ("unable to allocate curve array");

		if (!(new_curve = AllocNew (struct _curve)))
		    Fatal ("unable to allocate new curve");

		*new_curve = curve;
		if (trimesh.numcurves == 0)
		    trimesh.numcurves = 1;
		trimesh.curves [trimesh.numcurves ++] = new_curve;
	    }
#line 2184 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 597 "parser.y" /* yacc.c:1646  */
    {
		(yyval.i) = LinearRule;
	    }
#line 2192 "parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 602 "parser.y" /* yacc.c:1646  */
    {
		(yyval.i) = CosRule;
	    }
#line 2200 "parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 607 "parser.y" /* yacc.c:1646  */
    {
		(yyval.i) = SinRule;
	    }
#line 2208 "parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 612 "parser.y" /* yacc.c:1646  */
    {
		(yyval.i) = LogRule;
	    }
#line 2216 "parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 617 "parser.y" /* yacc.c:1646  */
    {
		(yyval.i) = ParabolicRule;
	    }
#line 2224 "parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 622 "parser.y" /* yacc.c:1646  */
    {
		(yyval.i) = RevLogRule;
	    }
#line 2232 "parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 627 "parser.y" /* yacc.c:1646  */
    {
		(yyval.i) = RevParabolicRule;
	    }
#line 2240 "parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 637 "parser.y" /* yacc.c:1646  */
    {
		if (curve.numvc == vcl_size)
		    if (!Reallocate (curve.vcl, xy_pair, vcl_size <<= 1))
			Fatal ("unable to allocate pair array");

		curve.vcl [curve.numvc] [0] = x;
		curve.vcl [curve.numvc ++] [1] = y;
	    }
#line 2253 "parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 647 "parser.y" /* yacc.c:1646  */
    {
		if (curve.numvc == vcl_size)
		    if (!Reallocate (curve.vcl, xy_pair, vcl_size <<= 1))
			Fatal ("unable to allocate pair array");

		curve.vcl [curve.numvc] [0] = x;
		curve.vcl [curve.numvc ++] [1] = y;
	    }
#line 2266 "parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 657 "parser.y" /* yacc.c:1646  */
    {
		vcl_size = 8;
		curve.numvc = 0;
		if (!(curve.vcl = Allocate (xy_pair, vcl_size)))
		    Fatal ("unable to allocate pair array");
	    }
#line 2277 "parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 668 "parser.y" /* yacc.c:1646  */
    {
		x = (yyvsp[-4].d);
		y = (yyvsp[-2].d);
		z = (yyvsp[-1].d);
	    }
#line 2287 "parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 678 "parser.y" /* yacc.c:1646  */
    {
		(yyval.d) = (yyvsp[0].d);
	    }
#line 2295 "parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 683 "parser.y" /* yacc.c:1646  */
    {
		(yyval.d) = last_z;
	    }
#line 2303 "parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 691 "parser.y" /* yacc.c:1646  */
    {
		x = (yyvsp[-3].d);
		y = (yyvsp[-1].d);
	    }
#line 2312 "parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 703 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (HaltOp);
		SetIP (0);
		(yyval.d) = EvalCode (InCore, 0.0);
	    }
#line 2322 "parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 713 "parser.y" /* yacc.c:1646  */
    {
		int ip = GetIP ( );
		SetIP (ip - (yyvsp[0].i) - 2);
		EmitCode (JmpOp, (yyvsp[0].i));
		SetIP (GetIP ( ) - (yyvsp[-3].i) - 4);
		EmitCode (JzOp, (yyvsp[-3].i) + 2);
		SetIP (ip);
		(yyval.i) = (yyvsp[-6].i) + (yyvsp[-4].i) + (yyvsp[-3].i) + (yyvsp[-1].i) + (yyvsp[0].i);
	    }
#line 2336 "parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 724 "parser.y" /* yacc.c:1646  */
    {
		int ip = GetIP ( );
		SetIP (ip - (yyvsp[0].i) - 3);
		EmitCode (JnzOp, (yyvsp[0].i) + 1);
		SetIP (ip);
		EmitCode (TestOp);
		(yyval.i) = (yyvsp[-3].i) + (yyvsp[-1].i) + (yyvsp[0].i) + 1;
	    }
#line 2349 "parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 734 "parser.y" /* yacc.c:1646  */
    {
		int ip = GetIP ( );
		SetIP (ip - (yyvsp[0].i) - 3);
		EmitCode (JzOp, (yyvsp[0].i) + 1);
		SetIP (ip);
		EmitCode (TestOp);
		(yyval.i) = (yyvsp[-3].i) + (yyvsp[-1].i) + (yyvsp[0].i) + 1;
	    }
#line 2362 "parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 744 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (OrOp);
		(yyval.i) = (yyvsp[-2].i) + 1 + (yyvsp[0].i);
	    }
#line 2371 "parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 750 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (XorOp);
		(yyval.i) = (yyvsp[-2].i) + 1 + (yyvsp[0].i);
	    }
#line 2380 "parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 756 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (AndOp);
		(yyval.i) = (yyvsp[-2].i) + 1 + (yyvsp[0].i);
	    }
#line 2389 "parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 762 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (EqOp);
		(yyval.i) = (yyvsp[-2].i) + 1 + (yyvsp[0].i);
	    }
#line 2398 "parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 768 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (NeqOp);
		(yyval.i) = (yyvsp[-2].i) + 1 + (yyvsp[0].i);
	    }
#line 2407 "parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 774 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (LtOp);
		(yyval.i) = (yyvsp[-2].i) + 1 + (yyvsp[0].i);
	    }
#line 2416 "parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 780 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (GtOp);
		(yyval.i) = (yyvsp[-2].i) + 1 + (yyvsp[0].i);
	    }
#line 2425 "parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 786 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (LteqOp);
		(yyval.i) = (yyvsp[-2].i) + 1 + (yyvsp[0].i);
	    }
#line 2434 "parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 792 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (GteqOp);
		(yyval.i) = (yyvsp[-2].i) + 1 + (yyvsp[0].i);
	    }
#line 2443 "parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 798 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (LsftOp);
		(yyval.i) = (yyvsp[-2].i) + 1 + (yyvsp[0].i);
	    }
#line 2452 "parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 804 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (RsftOp);
		(yyval.i) = (yyvsp[-2].i) + 1 + (yyvsp[0].i);
	    }
#line 2461 "parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 810 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (AddOp);
		(yyval.i) = (yyvsp[-2].i) + 1 + (yyvsp[0].i);
	    }
#line 2470 "parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 816 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (SubOp);
		(yyval.i) = (yyvsp[-2].i) + 1 + (yyvsp[0].i);
	    }
#line 2479 "parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 822 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (MulOp);
		(yyval.i) = (yyvsp[-2].i) + 1 + (yyvsp[0].i);
	    }
#line 2488 "parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 828 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (DivOp);
		(yyval.i) = (yyvsp[-2].i) + 1 + (yyvsp[0].i);
	    }
#line 2497 "parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 834 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (ModOp);
		(yyval.i) = (yyvsp[-2].i) + 1 + (yyvsp[0].i);
	    }
#line 2506 "parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 840 "parser.y" /* yacc.c:1646  */
    {
		(yyval.i) = (yyvsp[0].i);
	    }
#line 2514 "parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 845 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (NegOp);
		(yyval.i) = 1 + (yyvsp[0].i);
	    }
#line 2523 "parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 851 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (NotOp);
		(yyval.i) = 1 + (yyvsp[0].i);
	    }
#line 2532 "parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 857 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (InvOp);
		(yyval.i) = 1 + (yyvsp[0].i);
	    }
#line 2541 "parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 863 "parser.y" /* yacc.c:1646  */
    {
		(yyval.i) = (yyvsp[-1].i);
	    }
#line 2549 "parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 868 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (PushOp, (double) (yyvsp[0].i));
		(yyval.i) = 2;
	    }
#line 2558 "parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 874 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (PushOp, (yyvsp[0].d));
		(yyval.i) = 2;
	    }
#line 2567 "parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 885 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (SinOp);
		(yyval.i) = (yyvsp[-1].i) + 1;
	    }
#line 2576 "parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 891 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (CosOp);
		(yyval.i) = (yyvsp[-1].i) + 1;
	    }
#line 2585 "parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 897 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (TanOp);
		(yyval.i) = (yyvsp[-1].i) + 1;
	    }
#line 2594 "parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 903 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (PowOp);
		(yyval.i) = (yyvsp[-3].i) + (yyvsp[-1].i) + 1;
	    }
#line 2603 "parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 909 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (ExpOp);
		(yyval.i) = (yyvsp[-1].i) + 1;
	    }
#line 2612 "parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 915 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (LnOp);
		(yyval.i) = (yyvsp[-1].i) + 1;
	    }
#line 2621 "parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 921 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (LogOp);
		(yyval.i) = (yyvsp[-1].i) + 1;
	    }
#line 2630 "parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 927 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (SqrtOp);
		(yyval.i) = (yyvsp[-1].i) + 1;
	    }
#line 2639 "parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 933 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (HypotOp);
		(yyval.i) = (yyvsp[-3].i) + (yyvsp[-1].i) + 1;
	    }
#line 2648 "parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 939 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (FloorOp);
		(yyval.i) = (yyvsp[-1].i) + 1;
	    }
#line 2657 "parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 945 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (CeilOp);
		(yyval.i) = (yyvsp[-1].i) + 1;
	    }
#line 2666 "parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 951 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (FmodOp);
		(yyval.i) = (yyvsp[-3].i) + (yyvsp[-1].i) + 1;
	    }
#line 2675 "parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 957 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (FabsOp);
		(yyval.i) = (yyvsp[-1].i) + 1;
	    }
#line 2684 "parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 966 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (JzOp, 0);
		(yyval.i) = 2;
	    }
#line 2693 "parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 975 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (JmpOp, 0);
		(yyval.i) = 2;
	    }
#line 2702 "parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 984 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (CopyOp);
		EmitCode (JnzOp, 0);
		EmitCode (PopOp);
		(yyval.i) = 4;
	    }
#line 2713 "parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 995 "parser.y" /* yacc.c:1646  */
    {
		EmitCode (CopyOp);
		EmitCode (JzOp, 0);
		EmitCode (PopOp);
		(yyval.i) = 4;
	    }
#line 2724 "parser.cpp" /* yacc.c:1646  */
    break;


#line 2728 "parser.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
