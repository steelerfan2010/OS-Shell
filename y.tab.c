/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "action.y" /* yacc.c:339  */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cd.h"
#include "ls.h"
#include "envFile.h"
#include "shell.h"

//#define MaxEnvVariables 15
	
//	char *variable[MaxEnvVariables];
//	char *value[MaxEnvVariables];

#line 80 "y.tab.c" /* yacc.c:339  */

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
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    HELLO = 258,
    BYE = 259,
    SETENV = 260,
    UNSETENV = 261,
    PRINTENV = 262,
    CD = 263,
    LS = 264,
    PWD = 265,
    ALPHANUMERIC = 266,
    PATH = 267,
    VALUE = 268,
    VARIABLE = 269,
    OPTION = 270,
    WC = 271,
    IOTOKEN = 272,
    QUOTES = 273,
    ALIAS = 274,
    UNALIAS = 275
  };
#endif
/* Tokens.  */
#define HELLO 258
#define BYE 259
#define SETENV 260
#define UNSETENV 261
#define PRINTENV 262
#define CD 263
#define LS 264
#define PWD 265
#define ALPHANUMERIC 266
#define PATH 267
#define VALUE 268
#define VARIABLE 269
#define OPTION 270
#define WC 271
#define IOTOKEN 272
#define QUOTES 273
#define ALIAS 274
#define UNALIAS 275

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 15 "action.y" /* yacc.c:355  */

	char *str;
	double bigNum;
	int num;

#line 166 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 181 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   218

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  21
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  185
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  203

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   275

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
      15,    16,    17,    18,    19,    20
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    28,    28,    29,    32,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    35,    40,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    59,    60,
      61,    65,    70,    71,    72,    73,    76,    77,    80,    81,
      82,    83,    84,    85,    86,    90,    91,    92,    93,    94,
      99,   100,   101,   102,   103,   108,   110,   112,   113,   114,
     117,   119,   120,   121,   124,   126,   127,   128,   131,   132,
     133,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     146,   147,   148,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   161,   162,   163,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   176,   177,   178,   179,   181,   182,
     183,   184,   186,   187,   188,   189,   191,   192,   193,   194,
     196,   197,   198,   199,   201,   202,   203,   204,   206,   207,
     208,   209,   211,   212,   213,   214,   216,   217,   218,   219,
     223,   224,   226,   227,   228,   230,   232,   233,   234,   235,
     238,   239,   240,   241,   242,   243,   244,   245,   248,   249,
     250,   251,   253,   254,   255,   256,   258,   259,   260,   261,
     263,   264,   265,   266,   270,   271,   282,   283,   284,   285,
     290,   291,   292,   293,   294,   299
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "HELLO", "BYE", "SETENV", "UNSETENV",
  "PRINTENV", "CD", "LS", "PWD", "ALPHANUMERIC", "PATH", "VALUE",
  "VARIABLE", "OPTION", "WC", "IOTOKEN", "QUOTES", "ALIAS", "UNALIAS",
  "$accept", "commands", "command", "hello_case", "bye_case", "setenv",
  "unsetenv", "printenv", "cd", "alias", "ls", "pwd", "wc", "unalias", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275
};
# endif

#define YYPACT_NINF -11

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-11)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -11,     0,   -11,   -11,   -11,    26,    33,   -11,   -10,    24,
       1,   -11,   -11,   -11,   -11,   -11,    59,     6,    20,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,    70,    75,   -11,   -11,   -11,   -11,    31,    38,    45,
      52,    80,    84,    61,    63,    88,    16,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,    34,    37,
      41,    44,    92,    48,    51,    60,    62,    96,    76,   190,
     191,   193,   100,   194,   195,   196,   197,   104,   -11,   -11,
     -11,   -11,   -11,   -11,   198,   199,   108,   200,   201,   112,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   116,   120,   124,   128,   -11,
     -11,   -11,   132,   136,   140,   144,   -11,   -11,   -11,   148,
     152,   156,   160,   -11,   -11,   -11,   164,   168,   172,   176,
     -11,   -11,   -11,   180,   184,   -11,   -11,   -11,   188,   192,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    15,    16,     0,     0,    31,    33,    56,
     141,    50,    52,    54,    51,    53,   146,    37,     0,     3,
       4,     5,     6,     7,     8,     9,    13,    10,    11,    12,
      14,     0,     0,    29,    30,    34,    35,    68,    70,    69,
      60,     0,     0,   150,   154,     0,     0,   185,    18,    19,
      21,    20,    22,    25,    26,    23,    24,    27,   104,   112,
     108,    92,     0,   128,   136,   132,    94,     0,   116,   124,
     120,    93,     0,    80,    82,    81,    64,     0,    57,    59,
      58,   142,   144,   143,   158,   162,     0,   166,   170,     0,
     147,   149,   148,    38,    39,    40,    41,    42,    43,    45,
      47,    48,    46,    44,    49,     0,     0,     0,     0,    71,
      73,    72,     0,     0,     0,     0,    77,    79,    78,     0,
       0,     0,     0,    74,    76,    75,     0,     0,     0,     0,
      61,    63,    62,     0,     0,   151,   153,   152,     0,     0,
     155,   157,   156,   105,   107,   106,   113,   115,   114,   109,
     111,   110,    95,    97,    96,   129,   131,   130,   137,   139,
     138,   133,   135,   134,   101,   103,   102,   117,   119,   118,
     125,   127,   126,   121,   123,   122,    98,   100,    99,    83,
      85,    84,    89,    91,    90,    86,    88,    87,    65,    67,
      66,   159,   161,   160,   163,   165,   164,   167,   169,   168,
     171,   173,   172
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       2,    35,    36,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    46,    42,    17,
      18,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,    47,   103,     0,   104,    37,    38,    31,    39,    40,
      32,    41,    58,    59,    33,    60,    61,    34,    62,    63,
      64,   105,    65,    66,   106,    67,    68,    69,   107,    70,
      71,   108,    72,    73,    74,   112,    75,    76,   113,    77,
      43,    44,    84,    85,    87,    88,    45,   114,    86,   115,
      89,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    78,    79,   119,    80,    81,    82,     0,    83,    90,
      91,     0,    92,   109,   110,     0,   111,   116,   117,     0,
     118,   123,   124,     0,   125,   130,   131,     0,   132,   135,
     136,     0,   137,   140,   141,     0,   142,   143,   144,     0,
     145,   146,   147,     0,   148,   149,   150,     0,   151,   152,
     153,     0,   154,   155,   156,     0,   157,   158,   159,     0,
     160,   161,   162,     0,   163,   164,   165,     0,   166,   167,
     168,     0,   169,   170,   171,     0,   172,   173,   174,     0,
     175,   176,   177,     0,   178,   179,   180,     0,   181,   182,
     183,     0,   184,   185,   186,     0,   187,   188,   189,     0,
     190,   191,   192,     0,   193,   194,   195,     0,   196,   197,
     198,     0,   199,   200,   201,     0,   202,   120,   121,     0,
     122,   126,   127,   128,   129,   133,   134,   138,   139
};

static const yytype_int8 yycheck[] =
{
       0,    11,    12,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    11,    17,    19,
      20,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    11,    16,    -1,    18,    11,    12,    11,    14,    15,
      14,    17,    11,    12,    11,    14,    15,    14,    17,    11,
      12,    17,    14,    15,    17,    17,    11,    12,    17,    14,
      15,    17,    17,    11,    12,    17,    14,    15,    17,    17,
      11,    12,    11,    12,    11,    12,    17,    17,    17,    17,
      17,    11,    12,    13,    14,    15,    11,    12,    13,    14,
      15,    11,    12,    17,    14,    11,    12,    -1,    14,    11,
      12,    -1,    14,    11,    12,    -1,    14,    11,    12,    -1,
      14,    11,    12,    -1,    14,    11,    12,    -1,    14,    11,
      12,    -1,    14,    11,    12,    -1,    14,    11,    12,    -1,
      14,    11,    12,    -1,    14,    11,    12,    -1,    14,    11,
      12,    -1,    14,    11,    12,    -1,    14,    11,    12,    -1,
      14,    11,    12,    -1,    14,    11,    12,    -1,    14,    11,
      12,    -1,    14,    11,    12,    -1,    14,    11,    12,    -1,
      14,    11,    12,    -1,    14,    11,    12,    -1,    14,    11,
      12,    -1,    14,    11,    12,    -1,    14,    11,    12,    -1,
      14,    11,    12,    -1,    14,    11,    12,    -1,    14,    11,
      12,    -1,    14,    11,    12,    -1,    14,    17,    17,    -1,
      17,    17,    17,    17,    17,    17,    17,    17,    17
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    22,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    19,    20,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    11,    14,    11,    14,    11,    12,    11,    12,    14,
      15,    17,    17,    11,    12,    17,    11,    11,    11,    12,
      13,    14,    15,    11,    12,    13,    14,    15,    11,    12,
      14,    15,    17,    11,    12,    14,    15,    17,    11,    12,
      14,    15,    17,    11,    12,    14,    15,    17,    11,    12,
      14,    11,    12,    14,    11,    12,    17,    11,    12,    17,
      11,    12,    14,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    16,    18,    17,    17,    17,    17,    11,
      12,    14,    17,    17,    17,    17,    11,    12,    14,    17,
      17,    17,    17,    11,    12,    14,    17,    17,    17,    17,
      11,    12,    14,    17,    17,    11,    12,    14,    17,    17,
      11,    12,    14,    11,    12,    14,    11,    12,    14,    11,
      12,    14,    11,    12,    14,    11,    12,    14,    11,    12,
      14,    11,    12,    14,    11,    12,    14,    11,    12,    14,
      11,    12,    14,    11,    12,    14,    11,    12,    14,    11,
      12,    14,    11,    12,    14,    11,    12,    14,    11,    12,
      14,    11,    12,    14,    11,    12,    14,    11,    12,    14,
      11,    12,    14
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    21,    22,    22,    23,    23,    23,    23,    23,    23,
      23,    23,    23,    23,    23,    24,    25,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,    27,    27,
      27,    28,    29,    29,    29,    29,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      32,    32,    32,    32,    32,    33,    33,    33,    33,    33,
      33,    33,    33,    33,    33,    33,    33,    33,    33,    33,
      33,    33,    33,    33,    33,    33,    33,    33,    33,    33,
      33,    33,    33,    33,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    34
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     0,     2,
       2,     1,     0,     1,     2,     2,     0,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     0,     1,     3,     3,     3,
       2,     4,     4,     4,     3,     5,     5,     5,     2,     2,
       2,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       3,     3,     3,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     3,     3,     3,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     3,     5,     5,     5,     3,     5,
       5,     5,     3,     5,     5,     5,     3,     5,     5,     5,
       3,     5,     5,     5,     3,     5,     5,     5,     3,     5,
       5,     5,     3,     5,     5,     5,     3,     5,     5,     5,
       0,     1,     3,     3,     3,     0,     1,     3,     3,     3,
       2,     4,     4,     4,     2,     4,     4,     4,     3,     5,
       5,     5,     3,     5,     5,     5,     3,     5,     5,     5,
       3,     5,     5,     5,     0,     1,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     2
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
        case 15:
#line 35 "action.y" /* yacc.c:1646  */
    { printf("\t hello back!\n");
			
		 }
#line 1413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 40 "action.y" /* yacc.c:1646  */
    { printf("\t Exiting shell. \n");
			exit(0);
		 }
#line 1421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 45 "action.y" /* yacc.c:1646  */
    { setEnv((yyvsp[-1].str), (yyvsp[0].str));}
#line 1427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 46 "action.y" /* yacc.c:1646  */
    { setEnv((yyvsp[-1].str), (yyvsp[0].str));}
#line 1433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 47 "action.y" /* yacc.c:1646  */
    { setEnv((yyvsp[-1].str), (yyvsp[0].str));}
#line 1439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 48 "action.y" /* yacc.c:1646  */
    { setEnv((yyvsp[-1].str), (yyvsp[0].str));}
#line 1445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 49 "action.y" /* yacc.c:1646  */
    { setEnv((yyvsp[-1].str), (yyvsp[0].str));}
#line 1451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 50 "action.y" /* yacc.c:1646  */
    { setEnv((yyvsp[-1].str), (yyvsp[0].str));}
#line 1457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 51 "action.y" /* yacc.c:1646  */
    { setEnv((yyvsp[-1].str), (yyvsp[0].str));}
#line 1463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 52 "action.y" /* yacc.c:1646  */
    { setEnv((yyvsp[-1].str), (yyvsp[0].str));}
#line 1469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 53 "action.y" /* yacc.c:1646  */
    { setEnv((yyvsp[-1].str), (yyvsp[0].str));}
#line 1475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 54 "action.y" /* yacc.c:1646  */
    { setEnv((yyvsp[-1].str), (yyvsp[0].str));}
#line 1481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 60 "action.y" /* yacc.c:1646  */
    { unsetEnv((yyvsp[0].str)); }
#line 1487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 61 "action.y" /* yacc.c:1646  */
    { unsetEnv((yyvsp[0].str)); }
#line 1493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 65 "action.y" /* yacc.c:1646  */
    { 
			printEnv();
			printf("\n");
		   }
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 71 "action.y" /* yacc.c:1646  */
    { cd(); }
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 72 "action.y" /* yacc.c:1646  */
    { cdPath((yyvsp[0].str));  }
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 73 "action.y" /* yacc.c:1646  */
    { cdPath((yyvsp[0].str)); }
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 77 "action.y" /* yacc.c:1646  */
    { printAlias(); }
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 80 "action.y" /* yacc.c:1646  */
    { storeAlias((yyvsp[-1].str),(yyvsp[0].str));   }
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 81 "action.y" /* yacc.c:1646  */
    { storeAlias((yyvsp[-1].str),(yyvsp[0].str));   }
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 82 "action.y" /* yacc.c:1646  */
    { storeAlias((yyvsp[-1].str),(yyvsp[0].str));   }
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 83 "action.y" /* yacc.c:1646  */
    { storeAlias((yyvsp[-1].str),(yyvsp[0].str));   }
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 84 "action.y" /* yacc.c:1646  */
    { storeAlias((yyvsp[-1].str),(yyvsp[0].str));   }
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 85 "action.y" /* yacc.c:1646  */
    { storeAlias((yyvsp[-1].str),(yyvsp[0].str));   }
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 86 "action.y" /* yacc.c:1646  */
    { storeAlias((yyvsp[-1].str),(yyvsp[0].str));   }
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 90 "action.y" /* yacc.c:1646  */
    { storeAlias((yyvsp[-1].str),(yyvsp[0].str));}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 91 "action.y" /* yacc.c:1646  */
    { storeAlias((yyvsp[-1].str),(yyvsp[0].str));}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 92 "action.y" /* yacc.c:1646  */
    { storeAlias((yyvsp[-1].str),(yyvsp[0].str));}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 93 "action.y" /* yacc.c:1646  */
    { storeAlias((yyvsp[-1].str),(yyvsp[0].str));}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 94 "action.y" /* yacc.c:1646  */
    { storeAlias((yyvsp[-1].str),(yyvsp[0].str));}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 99 "action.y" /* yacc.c:1646  */
    {checkAlias((yyvsp[0].str));}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 100 "action.y" /* yacc.c:1646  */
    {checkAlias((yyvsp[0].str));}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 101 "action.y" /* yacc.c:1646  */
    {checkAlias((yyvsp[0].str));}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 102 "action.y" /* yacc.c:1646  */
    {checkAlias((yyvsp[0].str));}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 103 "action.y" /* yacc.c:1646  */
    {checkAlias((yyvsp[0].str));}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 110 "action.y" /* yacc.c:1646  */
    { ls(); }
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 112 "action.y" /* yacc.c:1646  */
    { ls_reDirect((yyvsp[0].str)); }
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 113 "action.y" /* yacc.c:1646  */
    { ls_reDirect((yyvsp[0].str));}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 114 "action.y" /* yacc.c:1646  */
    { ls_reDirect((yyvsp[0].str)); }
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 117 "action.y" /* yacc.c:1646  */
    { ls_one_opt((yyvsp[0].str)); }
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 119 "action.y" /* yacc.c:1646  */
    { ls_one_opt_redirect((yyvsp[0].str), (yyvsp[-2].str));}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 120 "action.y" /* yacc.c:1646  */
    { ls_one_opt_redirect((yyvsp[0].str), (yyvsp[-2].str));  }
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 121 "action.y" /* yacc.c:1646  */
    { ls_one_opt_redirect((yyvsp[0].str), (yyvsp[-2].str));}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 124 "action.y" /* yacc.c:1646  */
    { ls_two_opt((yyvsp[-1].str), (yyvsp[0].str));  }
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 126 "action.y" /* yacc.c:1646  */
    { printf("ls option option > alpha"); }
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 127 "action.y" /* yacc.c:1646  */
    { printf("ls option option > variable"); }
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 128 "action.y" /* yacc.c:1646  */
    { printf("ls option option > path"); }
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 131 "action.y" /* yacc.c:1646  */
    { ls_path((yyvsp[0].str)); }
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 132 "action.y" /* yacc.c:1646  */
    { ls_path((yyvsp[0].str)); }
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 133 "action.y" /* yacc.c:1646  */
    {   ls_path((yyvsp[0].str));	  }
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 135 "action.y" /* yacc.c:1646  */
    { printf("ls path > alpha"); }
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 136 "action.y" /* yacc.c:1646  */
    { printf("ls path > variable"); }
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 137 "action.y" /* yacc.c:1646  */
    { printf("ls path > path"); }
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 138 "action.y" /* yacc.c:1646  */
    { printf("ls path2 > alpha"); }
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 139 "action.y" /* yacc.c:1646  */
    { printf("ls path2 > variable"); }
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 140 "action.y" /* yacc.c:1646  */
    { printf("ls path2 > path"); }
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 141 "action.y" /* yacc.c:1646  */
    { printf("ls path3 > alpha"); }
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 142 "action.y" /* yacc.c:1646  */
    { printf("ls path3 > variable"); }
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 143 "action.y" /* yacc.c:1646  */
    { printf("ls path3 > path"); }
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 146 "action.y" /* yacc.c:1646  */
    { ls_one_opt_one_path((yyvsp[-1].str), (yyvsp[0].str)); }
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 147 "action.y" /* yacc.c:1646  */
    { ls_one_opt_one_path((yyvsp[-1].str), (yyvsp[0].str)); }
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 148 "action.y" /* yacc.c:1646  */
    { ls_one_opt_one_path((yyvsp[-1].str), (yyvsp[0].str)); }
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 150 "action.y" /* yacc.c:1646  */
    { ls_one_opt_one_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 151 "action.y" /* yacc.c:1646  */
    { ls_one_opt_one_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 152 "action.y" /* yacc.c:1646  */
    { ls_one_opt_one_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 153 "action.y" /* yacc.c:1646  */
    { ls_one_opt_one_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 154 "action.y" /* yacc.c:1646  */
    { ls_one_opt_one_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 155 "action.y" /* yacc.c:1646  */
    { ls_one_opt_one_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 156 "action.y" /* yacc.c:1646  */
    { ls_one_opt_one_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 157 "action.y" /* yacc.c:1646  */
    { ls_one_opt_one_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 158 "action.y" /* yacc.c:1646  */
    { ls_one_opt_one_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 161 "action.y" /* yacc.c:1646  */
    { ls_one_path_one_opt((yyvsp[-1].str),(yyvsp[0].str)); }
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 162 "action.y" /* yacc.c:1646  */
    { ls_one_path_one_opt((yyvsp[-1].str),(yyvsp[0].str)); }
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 163 "action.y" /* yacc.c:1646  */
    { ls_one_path_one_opt((yyvsp[-1].str),(yyvsp[0].str)); }
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 165 "action.y" /* yacc.c:1646  */
    { ls_one_opt_one_path_redirect((yyvsp[0].str), (yyvsp[-2].str), (yyvsp[-3].str)); }
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 166 "action.y" /* yacc.c:1646  */
    { ls_one_opt_one_path_redirect((yyvsp[0].str), (yyvsp[-2].str), (yyvsp[-3].str)); }
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 167 "action.y" /* yacc.c:1646  */
    { ls_one_opt_one_path_redirect((yyvsp[0].str), (yyvsp[-2].str), (yyvsp[-3].str)); }
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 168 "action.y" /* yacc.c:1646  */
    { ls_one_opt_one_path_redirect((yyvsp[0].str), (yyvsp[-2].str), (yyvsp[-3].str)); }
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 169 "action.y" /* yacc.c:1646  */
    { ls_one_opt_one_path_redirect((yyvsp[0].str), (yyvsp[-2].str), (yyvsp[-3].str)); }
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 170 "action.y" /* yacc.c:1646  */
    { ls_one_opt_one_path_redirect((yyvsp[0].str), (yyvsp[-2].str), (yyvsp[-3].str)); }
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 171 "action.y" /* yacc.c:1646  */
    { ls_one_opt_one_path_redirect((yyvsp[0].str), (yyvsp[-2].str), (yyvsp[-3].str)); }
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 172 "action.y" /* yacc.c:1646  */
    { ls_one_opt_one_path_redirect((yyvsp[0].str), (yyvsp[-2].str), (yyvsp[-3].str)); }
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 173 "action.y" /* yacc.c:1646  */
    { ls_one_opt_one_path_redirect((yyvsp[0].str), (yyvsp[-2].str), (yyvsp[-3].str)); }
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 176 "action.y" /* yacc.c:1646  */
    { ls_two_path((yyvsp[-1].str), (yyvsp[0].str)); }
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 177 "action.y" /* yacc.c:1646  */
    { ls_two_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 178 "action.y" /* yacc.c:1646  */
    { ls_two_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 179 "action.y" /* yacc.c:1646  */
    { ls_two_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 181 "action.y" /* yacc.c:1646  */
    { ls_two_path((yyvsp[-1].str), (yyvsp[0].str)); }
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 182 "action.y" /* yacc.c:1646  */
    { ls_two_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 183 "action.y" /* yacc.c:1646  */
    { ls_two_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 184 "action.y" /* yacc.c:1646  */
    { ls_two_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 186 "action.y" /* yacc.c:1646  */
    { ls_two_path((yyvsp[-1].str), (yyvsp[0].str)); }
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 187 "action.y" /* yacc.c:1646  */
    { ls_two_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 188 "action.y" /* yacc.c:1646  */
    { ls_two_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 189 "action.y" /* yacc.c:1646  */
    { ls_two_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 191 "action.y" /* yacc.c:1646  */
    { ls_two_path((yyvsp[-1].str), (yyvsp[0].str));}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 192 "action.y" /* yacc.c:1646  */
    { ls_two_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 193 "action.y" /* yacc.c:1646  */
    { ls_two_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 194 "action.y" /* yacc.c:1646  */
    { ls_two_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 196 "action.y" /* yacc.c:1646  */
    { ls_two_path((yyvsp[-1].str), (yyvsp[0].str)); }
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 197 "action.y" /* yacc.c:1646  */
    { ls_two_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 198 "action.y" /* yacc.c:1646  */
    { ls_two_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 199 "action.y" /* yacc.c:1646  */
    { ls_two_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 2036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 201 "action.y" /* yacc.c:1646  */
    { ls_two_path((yyvsp[-1].str), (yyvsp[0].str)); }
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 202 "action.y" /* yacc.c:1646  */
    { ls_two_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 203 "action.y" /* yacc.c:1646  */
    { ls_two_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 2054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 204 "action.y" /* yacc.c:1646  */
    { ls_two_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 206 "action.y" /* yacc.c:1646  */
    { ls_two_path((yyvsp[-1].str), (yyvsp[0].str)); }
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 207 "action.y" /* yacc.c:1646  */
    { ls_two_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 208 "action.y" /* yacc.c:1646  */
    { ls_two_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 209 "action.y" /* yacc.c:1646  */
    { ls_two_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 2084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 211 "action.y" /* yacc.c:1646  */
    { ls_two_path((yyvsp[-1].str), (yyvsp[0].str)); }
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 212 "action.y" /* yacc.c:1646  */
    { ls_two_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 213 "action.y" /* yacc.c:1646  */
    { ls_two_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 214 "action.y" /* yacc.c:1646  */
    { ls_two_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 2108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 216 "action.y" /* yacc.c:1646  */
    { ls_two_path((yyvsp[-1].str), (yyvsp[0].str)); }
#line 2114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 217 "action.y" /* yacc.c:1646  */
    { ls_two_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 2120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 218 "action.y" /* yacc.c:1646  */
    { ls_two_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 2126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 219 "action.y" /* yacc.c:1646  */
    { ls_two_path_redirect((yyvsp[0].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 2132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 225 "action.y" /* yacc.c:1646  */
    { pwd(); }
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 226 "action.y" /* yacc.c:1646  */
    { pwdReDir((yyvsp[0].str)); }
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 227 "action.y" /* yacc.c:1646  */
    {printf("pwd > variable");}
#line 2150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 228 "action.y" /* yacc.c:1646  */
    {printf("pwd > path");}
#line 2156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 232 "action.y" /* yacc.c:1646  */
    { printf("WC needs params"); }
#line 2162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 233 "action.y" /* yacc.c:1646  */
    { printf("wc needs params"); }
#line 2168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 234 "action.y" /* yacc.c:1646  */
    { printf("wc needs params"); }
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 235 "action.y" /* yacc.c:1646  */
    { printf("wc needs params"); }
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 238 "action.y" /* yacc.c:1646  */
    {wc((yyvsp[0].str)); }
#line 2186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 239 "action.y" /* yacc.c:1646  */
    {	printf("wc 1 param > alpha");}
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 240 "action.y" /* yacc.c:1646  */
    {	printf("wc 1 param > variable");}
#line 2198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 241 "action.y" /* yacc.c:1646  */
    {	printf("wc 1 param > path");}
#line 2204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 242 "action.y" /* yacc.c:1646  */
    { wc((yyvsp[0].str)); }
#line 2210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 243 "action.y" /* yacc.c:1646  */
    {	printf("wc 1 param1 > alpha");}
#line 2216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 244 "action.y" /* yacc.c:1646  */
    {	printf("wc 1 param1 > variable");}
#line 2222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 245 "action.y" /* yacc.c:1646  */
    {	printf("wc 1 param1 > path");}
#line 2228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 248 "action.y" /* yacc.c:1646  */
    {printf("wc alpha alpha");}
#line 2234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 249 "action.y" /* yacc.c:1646  */
    {printf("wc 2 params > alpha");}
#line 2240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 250 "action.y" /* yacc.c:1646  */
    {printf("wc 2 params > variable");}
#line 2246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 251 "action.y" /* yacc.c:1646  */
    {printf("wc 2 params > path");}
#line 2252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 253 "action.y" /* yacc.c:1646  */
    {printf("wc alpha path");}
#line 2258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 254 "action.y" /* yacc.c:1646  */
    {printf("wc 2 params1 > alpha");}
#line 2264 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 255 "action.y" /* yacc.c:1646  */
    {printf("wc 2 params1 > variable");}
#line 2270 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 256 "action.y" /* yacc.c:1646  */
    {printf("wc 2 params1 > path");}
#line 2276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 258 "action.y" /* yacc.c:1646  */
    {printf("wc path alpha");}
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 259 "action.y" /* yacc.c:1646  */
    {printf("wc 2 params2 > alpha");}
#line 2288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 260 "action.y" /* yacc.c:1646  */
    {printf("wc 2 params2 > variable");}
#line 2294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 261 "action.y" /* yacc.c:1646  */
    {printf("wc 2 params2 > path");}
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 263 "action.y" /* yacc.c:1646  */
    {printf("wc path path");}
#line 2306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 264 "action.y" /* yacc.c:1646  */
    {printf("wc 2 params3 > alpha");}
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 265 "action.y" /* yacc.c:1646  */
    {printf("wc 2 params3 > variable");}
#line 2318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 266 "action.y" /* yacc.c:1646  */
    {printf("wc 2 params3 > path");}
#line 2324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 271 "action.y" /* yacc.c:1646  */
    { printAlias(); }
#line 2330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 282 "action.y" /* yacc.c:1646  */
    { storeAlias((yyvsp[-1].str),(yyvsp[0].str));}
#line 2336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 283 "action.y" /* yacc.c:1646  */
    { storeAlias((yyvsp[-1].str),(yyvsp[0].str));}
#line 2342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 284 "action.y" /* yacc.c:1646  */
    { storeAlias((yyvsp[-1].str),(yyvsp[0].str));}
#line 2348 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 285 "action.y" /* yacc.c:1646  */
    { storeAlias((yyvsp[-1].str),(yyvsp[0].str));}
#line 2354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 290 "action.y" /* yacc.c:1646  */
    {checkAlias((yyvsp[0].str));}
#line 2360 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 291 "action.y" /* yacc.c:1646  */
    {checkAlias((yyvsp[0].str));}
#line 2366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 292 "action.y" /* yacc.c:1646  */
    {checkAlias((yyvsp[0].str));}
#line 2372 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 293 "action.y" /* yacc.c:1646  */
    {checkAlias((yyvsp[0].str));}
#line 2378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 294 "action.y" /* yacc.c:1646  */
    {checkAlias((yyvsp[0].str));}
#line 2384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 299 "action.y" /* yacc.c:1646  */
    { removeAlias((yyvsp[0].str)); }
#line 2390 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2394 "y.tab.c" /* yacc.c:1646  */
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
