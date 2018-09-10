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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         burlap_yyparse
#define yylex           burlap_yylex
#define yyerror         burlap_yyerror
#define yydebug         burlap_yydebug
#define yynerrs         burlap_yynerrs


/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

/*
    This file is part of the FElt finite element analysis package.
    Copyright (C) 1993-1997 Jason I. Gobat and Darren C. Atkinson

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
 * Description:	This file contains the specification for the parser for	*
 *		burlap - a mathematical notation / language for finite	*
 *		element analysis.					*
 ************************************************************************/

# include <stdio.h>
# include "loop.h"
# include "debug.h"
# include "error.h"
# include "lexer.h"
# include "parser.h"
# include "globals.h"
# include "execute.h"
# include "allocate.h"

# if !defined (__GNUC__) && !defined (__sparc__)
# define alloca malloc		/* prevents alloca from being called */
# endif

static st  *vars;
static st   local_st;

static void emitloc (burlap_yyloc loc);

static char arg_types [256];		/* should be plenty */
static int  last_line_num = -1;
static int  last_file_num = -1;
static int  syntax_error;

#line 125 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
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
#line 54 "parser.y" /* yacc.c:355  */

    int		ival;
    Address	addr;
    char       *sval;
    descriptor *desc;
    burlap_yyloc	loc;
    void       *ptr;

#line 268 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int burlap_yyparse (void);

#endif /* !YY_BURLAP_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 284 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   299

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  171

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    87,    87,    90,    97,   111,   113,   126,   129,   137,
     167,   194,   197,   202,   209,   225,   229,   234,   239,   240,
     245,   246,   251,   261,   262,   263,   265,   270,   272,   278,
     280,   285,   286,   288,   300,   302,   307,   309,   314,   316,
     321,   323,   325,   330,   332,   334,   336,   338,   343,   345,
     347,   352,   354,   356,   360,   362,   364,   366,   368,   373,
     375,   380,   382,   387,   389,   391,   393,   398,   401,   409,
     412,   413,   414,   419,   421,   426,   428,   434,   435,   441,
     442,   445,   448,   454,   456,   458,   464,   470,   472,   478,
     480,   486,   493,   500,   507,   522,   527,   534,   541,   547,
     554,   560,   565,   571,   577,   583
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BREAK", "DO", "ELIF", "ELSE", "END",
  "FOR", "FUNCTION", "GLOBAL", "IF", "IN", "NEXT", "RETURN", "SHARED",
  "THEN", "WHILE", "ASSIGN", "OR", "AND", "EQ", "NE", "LT", "GT", "LE",
  "GE", "COLON", "PLUS", "MINUS", "MULT", "DIV", "MOD", "BKSLV", "POW",
  "TRANS", "NOT", "DOT", "LPAREN", "RPAREN", "LBRACK", "RBRACK", "COMMA",
  "SEMICOL", "ID", "STRLIT", "NUMLIT", "CONSTANT", "$accept", "program",
  "error_action", "function_or_expression_list", "function_definition",
  "function_id", "opt_formal_list", "formal_list", "arg_type",
  "function_body", "global_declarations", "global_id_list", "global_id",
  "expression_block", "expression_list", "opt_expression", "expression",
  "assignment_expression", "or_expression", "and_expression",
  "equality_expression", "relational_expression", "range_expression",
  "additive_expression", "multiplicative_expression",
  "exponentiation_expression", "postfix_expression", "prefix_expression",
  "primary_expression", "opt_index_expression_list",
  "index_expression_list", "index_expression", "control_expression",
  "else_expression", "matrix_expression", "matrix_row_list",
  "semicol_list", "literal", "pop", "or", "and", "if", "else", "mark",
  "fail", "in_expression", "break", "do_while", "do_for", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

#define YYPACT_NINF -72

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-72)))

#define YYTABLE_NINF -24

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      15,   -72,    25,    82,   -72,   -72,   -72,   239,   -38,   -72,
     -72,   239,   -72,   252,   252,   252,   239,   239,   -72,   -72,
     -72,   -72,   -72,   -16,    -8,     4,   -72,    61,    30,     0,
      43,    37,    55,    40,   -72,    53,   -72,    70,   -72,   -72,
     -72,   239,   239,    82,    45,   -72,   -72,   -72,   239,   -72,
     -72,   -72,   -36,   -72,    52,   -72,   -24,   -72,   -13,   -72,
     252,   -72,   252,   -72,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   -72,
      48,   128,   -72,   -72,   239,    94,   105,   -72,     3,   239,
     -72,   -72,   168,   -72,    73,    75,    77,   -72,    30,     0,
      43,    43,    37,    37,    37,    37,    47,    40,    40,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,    80,    88,   -72,
     108,   -72,   -72,   239,   -72,   239,   239,   -72,   -72,    52,
      90,   122,   -72,   252,   -72,   128,   239,    -2,     6,   -72,
     -72,    96,    55,   -72,     5,   -72,   -72,   131,   181,   -72,
     -72,   -72,   -72,   226,   -72,    99,   101,   239,    13,   -72,
      71,   -72,   -72,   -72,    99,   -72,   130,   -72,   239,     5,
     -72
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     2,     8,     1,   103,     0,     0,    98,
      82,    30,   100,     0,     0,     0,    26,     0,     7,    91,
      92,    93,    94,     0,     0,     0,    31,    35,    37,    39,
      42,    47,    50,    53,    58,    60,    62,    66,    70,    71,
      72,     0,    30,     3,     0,    10,    33,    29,     0,    65,
      64,    63,     0,    25,    88,    28,     0,     5,    12,     6,
       0,    96,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    61,
       0,    74,   101,    32,     0,     0,     0,    67,    95,     0,
      86,    90,     0,    15,     0,    11,     0,    34,    36,    38,
      40,    41,    43,    44,    45,    46,    48,    51,    52,    54,
      55,    56,    57,    59,    68,    78,    77,     0,    73,    76,
       0,   102,   105,    26,   104,    26,     0,    27,    89,    87,
       0,    16,    13,     0,    69,     0,    26,     0,     0,    24,
      19,     0,    49,    75,     0,    81,    80,     0,    26,    14,
      99,    83,    79,    26,     9,     0,    17,     0,     0,    22,
       0,    21,   101,    84,     0,    18,     0,    20,    26,     0,
      85
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -72,   -72,   -72,   143,   -72,   -72,   -72,   -72,    17,   -72,
     -72,   -72,   -15,   -71,    58,   109,    -3,    92,   -72,    97,
      89,    50,    33,   -70,    62,   -41,   -72,    91,   -72,   -72,
     -72,    23,   -72,    -9,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,    -1,   -72,   -72,   -72,   -72
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     4,     3,    23,    24,    94,    95,    96,   147,
     148,   160,   161,    52,    54,    46,    53,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,   117,
     118,   119,    38,   152,    39,    56,    92,    40,   126,    62,
      64,    41,   153,    48,   120,    85,    42,   125,   123
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,   106,    93,    87,    44,   145,    45,    88,    47,   -23,
     -23,   150,   151,   146,    55,    -8,     1,    90,    -8,    91,
     163,    65,    66,    -8,    -8,     5,    -8,    57,    -8,    -8,
      58,   -16,    -8,   109,   110,   111,   112,   113,    82,    47,
      25,    88,   -23,    -8,    -8,    86,   -23,    59,    88,    88,
      63,    -8,   137,    -8,   138,    -8,    88,    84,    -8,    -8,
      -8,    -8,    -8,   142,    71,   144,    67,    68,    69,    70,
      74,    75,    76,    77,   133,    72,    73,   156,   116,    60,
      61,   121,   158,    72,    73,     6,   127,    78,    79,    55,
       7,     8,   114,     9,    89,    10,    11,   169,   122,    12,
     102,   103,   104,   105,    49,    50,    51,    80,    81,   124,
      13,    14,   130,   164,   165,   100,   101,   131,    15,   134,
      16,   132,    17,   139,   136,    18,    19,    20,    21,    22,
     135,     6,   116,   140,   107,   108,     7,    93,   154,     9,
     149,    10,    11,   159,    88,    12,   168,    43,   141,   167,
     129,    83,    97,    99,   162,   115,    13,    14,   143,    98,
     170,   166,     0,     0,    15,     0,    16,     0,    17,     0,
       0,     6,    19,    20,    21,    22,     7,     0,     0,     9,
       0,    10,    11,     0,     6,    12,     0,     0,     0,     7,
       0,   155,     9,     0,    10,    11,    13,    14,    12,     0,
       0,     0,     0,     0,    15,     0,    16,     0,    17,    13,
      14,   128,    19,    20,    21,    22,     0,    15,     0,    16,
       0,    17,     0,     0,     0,    19,    20,    21,    22,     6,
       0,   157,     0,     0,     7,     0,     0,     9,     0,    10,
      11,     0,     6,    12,     0,     0,     0,     7,     0,     0,
       9,     0,    10,    11,    13,    14,    12,     0,     0,     0,
       7,     0,    15,     9,    16,    10,    17,    13,    14,    12,
      19,    20,    21,    22,     0,    15,     0,    16,     0,    17,
      13,    14,     0,    19,    20,    21,    22,     0,    15,     0,
      16,     0,    17,     0,     0,     0,    19,    20,    21,    22
};

static const yytype_int16 yycheck[] =
{
       3,    71,    15,    39,     7,     7,    44,    43,    11,     6,
       7,     6,     7,     7,    17,     0,     1,    41,     3,    43,
       7,    21,    22,     8,     9,     0,    11,    43,    13,    14,
      38,    44,    17,    74,    75,    76,    77,    78,    41,    42,
      43,    43,    39,    28,    29,    48,    43,    43,    43,    43,
      20,    36,   123,    38,   125,    40,    43,    12,    43,    44,
      45,    46,    47,   133,    27,   136,    23,    24,    25,    26,
      30,    31,    32,    33,    27,    28,    29,   148,    81,    18,
      19,    84,   153,    28,    29,     3,    89,    34,    35,    92,
       8,     9,    44,    11,    42,    13,    14,   168,     4,    17,
      67,    68,    69,    70,    13,    14,    15,    37,    38,     4,
      28,    29,    39,    42,    43,    65,    66,    42,    36,    39,
      38,    44,    40,   126,    16,    43,    44,    45,    46,    47,
      42,     3,   135,    43,    72,    73,     8,    15,     7,    11,
      44,    13,    14,    44,    43,    17,    16,     4,   131,   164,
      92,    42,    60,    64,   157,    27,    28,    29,   135,    62,
     169,   162,    -1,    -1,    36,    -1,    38,    -1,    40,    -1,
      -1,     3,    44,    45,    46,    47,     8,    -1,    -1,    11,
      -1,    13,    14,    -1,     3,    17,    -1,    -1,    -1,     8,
      -1,    10,    11,    -1,    13,    14,    28,    29,    17,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    38,    -1,    40,    28,
      29,    43,    44,    45,    46,    47,    -1,    36,    -1,    38,
      -1,    40,    -1,    -1,    -1,    44,    45,    46,    47,     3,
      -1,     5,    -1,    -1,     8,    -1,    -1,    11,    -1,    13,
      14,    -1,     3,    17,    -1,    -1,    -1,     8,    -1,    -1,
      11,    -1,    13,    14,    28,    29,    17,    -1,    -1,    -1,
       8,    -1,    36,    11,    38,    13,    40,    28,    29,    17,
      44,    45,    46,    47,    -1,    36,    -1,    38,    -1,    40,
      28,    29,    -1,    44,    45,    46,    47,    -1,    36,    -1,
      38,    -1,    40,    -1,    -1,    -1,    44,    45,    46,    47
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    49,    51,    50,     0,     3,     8,     9,    11,
      13,    14,    17,    28,    29,    36,    38,    40,    43,    44,
      45,    46,    47,    52,    53,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    80,    82,
      85,    89,    94,    51,    64,    44,    63,    64,    91,    75,
      75,    75,    61,    64,    62,    64,    83,    43,    38,    43,
      18,    19,    87,    20,    88,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      37,    38,    64,    63,    12,    93,    64,    39,    43,    42,
      41,    43,    84,    15,    54,    55,    56,    65,    67,    68,
      69,    69,    70,    70,    70,    70,    71,    72,    72,    73,
      73,    73,    73,    73,    44,    27,    64,    77,    78,    79,
      92,    64,     4,    96,     4,    95,    86,    64,    43,    62,
      39,    42,    44,    27,    39,    42,    16,    61,    61,    64,
      43,    56,    71,    79,    61,     7,     7,    57,    58,    44,
       6,     7,    81,    90,     7,    10,    61,     5,    61,    44,
      59,    60,    64,     7,    42,    43,    92,    60,    16,    61,
      81
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    49,    50,    51,    51,    51,    51,    52,
      53,    54,    54,    55,    55,    56,    56,    57,    58,    58,
      59,    59,    60,    61,    61,    61,    61,    62,    62,    63,
      63,    64,    64,    64,    65,    65,    66,    66,    67,    67,
      68,    68,    68,    69,    69,    69,    69,    69,    70,    70,
      70,    71,    71,    71,    72,    72,    72,    72,    72,    73,
      73,    74,    74,    75,    75,    75,    75,    76,    76,    76,
      76,    76,    76,    77,    77,    78,    78,    79,    79,    80,
      80,    80,    80,    81,    81,    81,    82,    83,    83,    84,
      84,    85,    85,    85,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     0,     3,     3,     2,     0,     7,
       2,     1,     0,     2,     4,     1,     0,     2,     4,     0,
       3,     1,     1,     2,     4,     1,     0,     3,     1,     1,
       0,     1,     2,     2,     3,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     5,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       1,     2,     1,     2,     2,     2,     1,     3,     3,     4,
       1,     1,     1,     1,     0,     3,     1,     1,     1,     6,
       6,     6,     1,     1,     3,     7,     3,     3,     1,     2,
       1,     1,     1,     1,     1,     0,     1,     1,     1,     1,
       0,     0,     2,     1,     1,     1
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




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

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
      yychar = yylex (&yylval);
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
        case 2:
#line 88 "parser.y" /* yacc.c:1646  */
    {syntax_error = 0;}
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 91 "parser.y" /* yacc.c:1646  */
    {syntax_error = 0;}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 97 "parser.y" /* yacc.c:1646  */
    {
		yyerrok;
		yyclearin;
		cs = global_cs;
		exit_all ( );
		reset ( );

		if (!interactive)
		    syntax_error = 1;
	    }
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 114 "parser.y" /* yacc.c:1646  */
    {
		if (!syntax_error) {
		    emit (HaltOp);
		    if (execute (cs, var_array, NULL) != -1 && !interactive)
			return 1;
		}

		reset ( );
		last_line_num = -1;
		last_file_num = -1;
	    }
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 129 "parser.y" /* yacc.c:1646  */
    {
		vars = &var_st;
		reset ( );
	    }
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 138 "parser.y" /* yacc.c:1646  */
    {
		int i;


		D_Function ((yyvsp[-6].desc)) -> num_args = (yyvsp[-4].ival);
		D_Function ((yyvsp[-6].desc)) -> num_locals = vars -> num_syms;
		D_Function ((yyvsp[-6].desc)) -> local_names = st_names (vars);

		D_Function ((yyvsp[-6].desc)) -> arg_types = Allocate (char, (yyvsp[-4].ival));
		for (i = 0; i < (yyvsp[-4].ival); i ++)
		    D_Function ((yyvsp[-6].desc)) -> arg_types [i] = arg_types [i];

		emit (RtnOp);
		st_fini (vars);
		st_fini (&import_st);

		d_dump (cs);
		cs = global_cs;
		vars = &var_st;
		st_init (&import_st);
		reset ( );

		last_file_num = -1;
		last_line_num = -1;
	    }
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 168 "parser.y" /* yacc.c:1646  */
    {
		ste	   *s;
		descriptor  d;


		s = add_literal (&var_st, (yyvsp[0].sval), GlblOp);
		d = *((yyval.desc) = &var_array [s -> idx]);
		Deallocate ((yyvsp[0].sval));

		FreeData ((yyval.desc));
		CreateData ((yyval.desc), NULL, NULL, T_Function, s -> name);
		D_Temp ((yyval.desc)) = F_False;

		cs = D_Function ((yyval.desc)) -> cs;
		st_init (vars = &local_st);
		st_init (&import_st);
		reset ( );

		last_file_num = -1;
		last_line_num = -1;
		emitloc ((yyvsp[-1].loc));
	    }
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 197 "parser.y" /* yacc.c:1646  */
    {(yyval.ival) = 0;}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 203 "parser.y" /* yacc.c:1646  */
    {
		st_insert (&import_st, (yyvsp[0].sval), ArgOp);
		arg_types [0] = (yyvsp[-1].ival); (yyval.ival) = 1;
		Deallocate ((yyvsp[0].sval));
	    }
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 210 "parser.y" /* yacc.c:1646  */
    {
		ste *s = st_lookup (&import_st, (yyvsp[0].sval));
		if (s) {
		    cterror ("duplicate argument '%s'", (yyvsp[0].sval));
		    (yyval.ival) = -1;
		} else if ((yyvsp[-3].ival) > 0) {
		    st_insert (&import_st, (yyvsp[0].sval), ArgOp);
		    arg_types [(yyvsp[-3].ival)] = (yyvsp[-1].ival); (yyval.ival) = (yyvsp[-3].ival) + 1;
		}
		Deallocate ((yyvsp[0].sval));
	    }
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 226 "parser.y" /* yacc.c:1646  */
    {(yyval.ival) = SharedArg;}
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 229 "parser.y" /* yacc.c:1646  */
    {(yyval.ival) = ValueArg;}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 252 "parser.y" /* yacc.c:1646  */
    {
		ste *s = add_literal (&var_st, (yyvsp[0].sval), GlblOp);
		add_literal (&import_st, (yyvsp[0].sval), GlblOp) -> idx = s -> idx;
		Deallocate ((yyvsp[0].sval));
	    }
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 265 "parser.y" /* yacc.c:1646  */
    {emit (DblOp, 0);}
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 271 "parser.y" /* yacc.c:1646  */
    {(yyval.ival) = (yyvsp[-2].ival) + 1;}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 273 "parser.y" /* yacc.c:1646  */
    {(yyval.ival) = 1;}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 280 "parser.y" /* yacc.c:1646  */
    {emit (NullOp);}
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 287 "parser.y" /* yacc.c:1646  */
    {end_break (BREAK, (yyvsp[-1].ptr));}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 289 "parser.y" /* yacc.c:1646  */
    {
		if (cs == global_cs) {
		    cterror ("return not within a function");
		    emit (NullOp);
		} else
		    emitloc ((yyvsp[-1].loc)); emit (RtnOp);
	    }
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 301 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[-1].loc)); emit (AsgnOp);}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 308 "parser.y" /* yacc.c:1646  */
    {patch ((yyvsp[-1].addr), JnzOp, ip); emit (TestOp);}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 315 "parser.y" /* yacc.c:1646  */
    {patch ((yyvsp[-1].addr), JzOp, ip); emit (TestOp);}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 322 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[-1].loc)); emit (EqOp);}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 324 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[-1].loc)); emit (NeOp);}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 331 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[-1].loc)); emit (LtOp);}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 333 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[-1].loc)); emit (GtOp);}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 335 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[-1].loc)); emit (LeOp);}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 337 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[-1].loc)); emit (GeOp);}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 344 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[-1].loc)); emit (RangeOp, 2);}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 346 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[-3].loc)); emit (RangeOp, 3);}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 353 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[-1].loc)); emit (AddOp);}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 355 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[-1].loc)); emit (SubOp);}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 361 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[-1].loc)); emit (MulOp);}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 363 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[-1].loc)); emit (DivOp);}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 365 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[-1].loc)); emit (ModOp);}
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 367 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[-1].loc)); emit (BkslvOp);}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 374 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[-1].loc)); emit (PowOp);}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 381 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[0].loc)); emit (TransOp);}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 388 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[-1].loc)); emit (NotOp);}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 390 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[-1].loc)); emit (NegOp);}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 392 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[-1].loc)); emit (PlusOp);}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 399 "parser.y" /* yacc.c:1646  */
    {/* prevents warnings */}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 402 "parser.y" /* yacc.c:1646  */
    {
		ste *s = st_lookup (&field_st, (yyvsp[0].sval));
		emitloc ((yyvsp[-1].loc));
		emit (FieldOp, s ? s -> idx : 0);
		Deallocate ((yyvsp[0].sval));
	    }
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 410 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[-2].loc)); emit (ApplyOp, (yyvsp[-1].ival));}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 421 "parser.y" /* yacc.c:1646  */
    {(yyval.ival) = 0;}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 427 "parser.y" /* yacc.c:1646  */
    {(yyval.ival) = (yyvsp[-2].ival) + 1;}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 429 "parser.y" /* yacc.c:1646  */
    {(yyval.ival) = 1;}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 436 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[0].loc)); emit (RangeOp, 0);}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 443 "parser.y" /* yacc.c:1646  */
    {emit (PopOp, 1); emit (JmpOp, (yyvsp[-4].addr)); patch ((yyvsp[-2].addr), FailOp, ip);
	     exit_loop ((yyvsp[-4].addr), ip);}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 446 "parser.y" /* yacc.c:1646  */
    {emit (PopOp, 1); emit (JmpOp, (yyvsp[-3].addr)); patch ((yyvsp[-3].addr), GenOp, ip);
	     exit_loop ((yyvsp[-3].addr), ip);}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 449 "parser.y" /* yacc.c:1646  */
    {end_break (NEXT, start_break (NEXT));}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 455 "parser.y" /* yacc.c:1646  */
    {patch ((yyvsp[(-2) - (1)].ival), FailOp, ip);}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 457 "parser.y" /* yacc.c:1646  */
    {patch ((yyvsp[-2].addr), JmpOp, ip);}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 459 "parser.y" /* yacc.c:1646  */
    {patch ((yyvsp[-6].addr), JmpOp, ip);}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 465 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[-2].loc)); emit (MtxOp, (yyvsp[-1].ival));}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 471 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[-1].loc)); emit (RowOp, (yyvsp[0].ival)); (yyval.ival) = (yyvsp[-2].ival) + 1;}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 473 "parser.y" /* yacc.c:1646  */
    {emit (RowOp, (yyvsp[0].ival)); (yyval.ival) = 1;}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 479 "parser.y" /* yacc.c:1646  */
    {(yyval.loc) = (yyvsp[0].loc);}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 481 "parser.y" /* yacc.c:1646  */
    {(yyval.loc) = (yyvsp[0].loc);}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 487 "parser.y" /* yacc.c:1646  */
    {
		ste *s = add_literal (vars, (yyvsp[0].sval), LocalOp);
		emit (s -> op, s -> idx);
		Deallocate ((yyvsp[0].sval));
	    }
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 494 "parser.y" /* yacc.c:1646  */
    {
		ste *s = add_literal (&str_st, (yyvsp[0].sval), StrOp);
		emit (StrOp, s -> idx);
		Deallocate ((yyvsp[0].sval));
	    }
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 501 "parser.y" /* yacc.c:1646  */
    {
		ste *s = add_literal (&dbl_st, (yyvsp[0].sval), DblOp);
		emit (DblOp, s -> idx);
		Deallocate ((yyvsp[0].sval));
	    }
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 508 "parser.y" /* yacc.c:1646  */
    {
		ste *s = st_lookup (&var_st, (yyvsp[0].sval));
		if (!s) {
		    cterror ("unknown constant '%s' (using null value)", (yyvsp[0].sval));
		    s = add_literal (vars, (yyvsp[0].sval), NullOp);
		}
		emit (s -> op, s -> idx);
		Deallocate ((yyvsp[0].sval));
	    }
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 522 "parser.y" /* yacc.c:1646  */
    {emit (PopOp, 1);}
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 528 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[0].loc)); emit (CopyOp); (yyval.addr) = ip; emit (JnzOp, 0);
	     emit (PopOp, 1);}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 535 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[0].loc)); emit (CopyOp); (yyval.addr) = ip; emit (JzOp, 0);
	     emit (PopOp, 1);}
#line 2036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 542 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[0].loc));}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 548 "parser.y" /* yacc.c:1646  */
    {(yyval.addr) = ip; emit (JmpOp, 0); patch ((yyvsp[(-2) - (1)].ival), JzOp, ip);}
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 554 "parser.y" /* yacc.c:1646  */
    {(yyval.addr) = ip;}
#line 2054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 560 "parser.y" /* yacc.c:1646  */
    {(yyval.addr) = ip; emit (FailOp, 0);}
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 566 "parser.y" /* yacc.c:1646  */
    {emit (DblOp, 1); emitloc ((yyvsp[-1].loc)); (yyval.addr) = ip; emit (GenOp, 0);}
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 572 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr) = (void *) start_break (BREAK);}
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 578 "parser.y" /* yacc.c:1646  */
    {emitloc ((yyvsp[0].loc)); enter_loop (WHILE); (yyval.addr) = ip; emit (FailOp, 0);}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 584 "parser.y" /* yacc.c:1646  */
    {enter_loop (FOR);}
#line 2084 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2088 "y.tab.c" /* yacc.c:1646  */
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
#line 587 "parser.y" /* yacc.c:1906  */


/************************************************************************
 * Function:	emitloc							*
 *									*
 * Description:	Emits a file and/or line instruction if they have	*
 *		changed since the last time that they were emitted.	*
 ************************************************************************/

static void emitloc (burlap_yyloc loc)
{
    if (last_file_num != loc.file)
	emit (FileOp, last_file_num = loc.file);

    if (last_line_num != loc.line)
	emit (LineOp, last_line_num = loc.line);
}
