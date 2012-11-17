/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "projet.y"

#include <stdio.h>
#include <string.h>
#include "TableLexico.h"
#include "TableType.h"
#include "buffer.h"

#include "Arbre.h"
#include "TableRegions.h"
#include "PileRegions.h"
#include "TableDeclarations.h"


int yylex (void);
int yyerror (char const * s );
extern int num_ligne;
extern char* yytext;

int counter = 0;



/* Line 268 of yacc.c  */
#line 94 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PROG = 258,
     DEBUT = 259,
     FIN = 260,
     PROCEDURE = 261,
     FONCTION = 262,
     EST = 263,
     ET = 264,
     OU = 265,
     NON = 266,
     VRAI = 267,
     FAUX = 268,
     OPAFF = 269,
     INF = 270,
     INF_EGAL = 271,
     SUP = 272,
     SUP_EGAL = 273,
     EGAL = 274,
     DIFF = 275,
     POINT_VIRGULE = 276,
     DEUX_POINTS = 277,
     POINT = 278,
     VIRGULE = 279,
     GUILLEMET = 280,
     POINT_POINT = 281,
     PLUS = 282,
     MOINS = 283,
     DIV = 284,
     MULT = 285,
     CSTE_ENTIERE = 286,
     CSTE_CHAINE = 287,
     CSTE_CHAR = 288,
     CSTE_REEL = 289,
     ENTIER = 290,
     REEL = 291,
     CARACTERE = 292,
     CHAINE = 293,
     BOOLEEN = 294,
     IDF = 295,
     TABLEAU = 296,
     DE = 297,
     STRUCT = 298,
     FSTRUCT = 299,
     VARIABLE = 300,
     TYPE = 301,
     FORMAT_ENTIER = 302,
     FORMAT_REELLE = 303,
     FORMAT_CARACTERE = 304,
     FORMAT_CHAINE = 305,
     CROCHET_OUVRANT = 306,
     CROCHET_FERMANT = 307,
     PARENTHESE_OUVRANTE = 308,
     PARENTHESE_FERMANTE = 309,
     SI = 310,
     ALORS = 311,
     SINON = 312,
     TANT_QUE = 313,
     FAIRE = 314,
     END_TANT_QUE = 315,
     LIRE = 316,
     ECRIRE = 317,
     RETOURNE = 318,
     VIDE = 319
   };
#endif
/* Tokens.  */
#define PROG 258
#define DEBUT 259
#define FIN 260
#define PROCEDURE 261
#define FONCTION 262
#define EST 263
#define ET 264
#define OU 265
#define NON 266
#define VRAI 267
#define FAUX 268
#define OPAFF 269
#define INF 270
#define INF_EGAL 271
#define SUP 272
#define SUP_EGAL 273
#define EGAL 274
#define DIFF 275
#define POINT_VIRGULE 276
#define DEUX_POINTS 277
#define POINT 278
#define VIRGULE 279
#define GUILLEMET 280
#define POINT_POINT 281
#define PLUS 282
#define MOINS 283
#define DIV 284
#define MULT 285
#define CSTE_ENTIERE 286
#define CSTE_CHAINE 287
#define CSTE_CHAR 288
#define CSTE_REEL 289
#define ENTIER 290
#define REEL 291
#define CARACTERE 292
#define CHAINE 293
#define BOOLEEN 294
#define IDF 295
#define TABLEAU 296
#define DE 297
#define STRUCT 298
#define FSTRUCT 299
#define VARIABLE 300
#define TYPE 301
#define FORMAT_ENTIER 302
#define FORMAT_REELLE 303
#define FORMAT_CARACTERE 304
#define FORMAT_CHAINE 305
#define CROCHET_OUVRANT 306
#define CROCHET_FERMANT 307
#define PARENTHESE_OUVRANTE 308
#define PARENTHESE_FERMANTE 309
#define SI 310
#define ALORS 311
#define SINON 312
#define TANT_QUE 313
#define FAIRE 314
#define END_TANT_QUE 315
#define LIRE 316
#define ECRIRE 317
#define RETOURNE 318
#define VIDE 319




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 23 "projet.y"
 double dval; int ival; char * sval; char cval; 


/* Line 293 of yacc.c  */
#line 262 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 274 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   211

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  116
/* YYNRULES -- Number of states.  */
#define YYNSTATES  207

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,    10,    12,    15,    19,    23,
      26,    30,    32,    34,    36,    38,    45,    53,    57,    59,
      63,    67,    70,    74,    78,    80,    82,    84,    86,    88,
      90,    95,    98,   102,   106,   107,   113,   114,   122,   126,
     127,   129,   133,   137,   139,   141,   143,   145,   147,   149,
     151,   154,   155,   157,   160,   164,   165,   167,   171,   173,
     180,   185,   191,   195,   200,   208,   209,   212,   215,   217,
     219,   221,   223,   224,   228,   229,   231,   235,   241,   244,
     246,   250,   251,   254,   256,   258,   260,   262,   264,   266,
     270,   274,   278,   280,   284,   288,   290,   294,   296,   299,
     302,   304,   306,   308,   312,   316,   318,   321,   323,   327,
     329,   331,   333,   337,   341,   345,   349
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      66,     0,    -1,     3,    67,    -1,    -1,    68,    69,    -1,
      69,    -1,    71,    21,    -1,    71,    21,    68,    -1,     4,
      70,     5,    -1,    89,    21,    -1,    89,    21,    70,    -1,
      72,    -1,    80,    -1,    82,    -1,    84,    -1,    46,    40,
      22,    43,    76,    44,    -1,    46,    40,    22,    41,    73,
      42,    78,    -1,    51,    74,    52,    -1,    75,    -1,    74,
      24,    75,    -1,    31,    26,    31,    -1,    77,    21,    -1,
      77,    21,    76,    -1,    40,    22,    78,    -1,    79,    -1,
      40,    -1,    35,    -1,    36,    -1,    39,    -1,    37,    -1,
      38,    51,    31,    52,    -1,    45,    81,    -1,    40,    22,
      78,    -1,    40,    24,    81,    -1,    -1,     6,    40,    86,
      83,    67,    -1,    -1,     7,    40,    86,    63,    79,    85,
      67,    -1,    53,    87,    54,    -1,    -1,    88,    -1,    87,
      24,    88,    -1,    40,    22,    79,    -1,    97,    -1,    95,
      -1,    96,    -1,    91,    -1,    98,    -1,    99,    -1,    64,
      -1,    63,    90,    -1,    -1,   108,    -1,    40,    92,    -1,
      53,    93,    54,    -1,    -1,    94,    -1,    93,    24,    94,
      -1,   108,    -1,    55,   113,    56,    69,    57,    69,    -1,
      55,   113,    56,    69,    -1,    58,   113,    59,    69,    60,
      -1,   104,    14,   108,    -1,    61,    53,   103,    54,    -1,
      62,    53,    25,   100,    25,   102,    54,    -1,    -1,   101,
     100,    -1,    38,   100,    -1,    47,    -1,    48,    -1,    49,
      -1,    50,    -1,    -1,    24,   104,   102,    -1,    -1,   104,
      -1,   103,    24,   104,    -1,    40,    51,   105,    52,   106,
      -1,    40,   106,    -1,   107,    -1,   105,    24,   107,    -1,
      -1,    23,   104,    -1,   110,    -1,   110,    -1,   113,    -1,
      33,    -1,   109,    -1,    32,    -1,   109,    27,    32,    -1,
     110,    27,   111,    -1,   110,    28,   111,    -1,   111,    -1,
     111,    30,   112,    -1,   111,    29,   112,    -1,   112,    -1,
      53,   110,    54,    -1,   104,    -1,    28,    31,    -1,    28,
      34,    -1,    31,    -1,    34,    -1,    91,    -1,   113,     9,
     114,    -1,   113,    10,   114,    -1,   114,    -1,    11,   115,
      -1,   115,    -1,    53,   113,    54,    -1,    12,    -1,    13,
      -1,   116,    -1,   110,    15,   110,    -1,   110,    16,   110,
      -1,   110,    17,   110,    -1,   110,    18,   110,    -1,   110,
      19,   110,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    50,    51,    52,    55,    56,    59,    62,
      63,    66,    67,    68,    69,    72,    77,    83,    86,    87,
      90,    93,    94,    97,   100,   101,   104,   105,   106,   107,
     108,   111,   114,   118,   124,   124,   130,   130,   136,   137,
     140,   141,   144,   147,   148,   149,   150,   151,   152,   153,
     154,   157,   158,   161,   165,   168,   169,   170,   174,   177,
     178,   180,   183,   186,   189,   192,   193,   194,   197,   198,
     199,   200,   205,   206,   209,   210,   211,   214,   215,   218,
     219,   222,   223,   226,   229,   230,   231,   232,   235,   236,
     239,   240,   241,   244,   245,   246,   249,   250,   251,   252,
     253,   254,   255,   259,   260,   261,   264,   265,   268,   269,
     270,   271,   275,   276,   277,   278,   279
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROG", "DEBUT", "FIN", "PROCEDURE",
  "FONCTION", "EST", "ET", "OU", "NON", "VRAI", "FAUX", "OPAFF", "INF",
  "INF_EGAL", "SUP", "SUP_EGAL", "EGAL", "DIFF", "POINT_VIRGULE",
  "DEUX_POINTS", "POINT", "VIRGULE", "GUILLEMET", "POINT_POINT", "PLUS",
  "MOINS", "DIV", "MULT", "CSTE_ENTIERE", "CSTE_CHAINE", "CSTE_CHAR",
  "CSTE_REEL", "ENTIER", "REEL", "CARACTERE", "CHAINE", "BOOLEEN", "IDF",
  "TABLEAU", "DE", "STRUCT", "FSTRUCT", "VARIABLE", "TYPE",
  "FORMAT_ENTIER", "FORMAT_REELLE", "FORMAT_CARACTERE", "FORMAT_CHAINE",
  "CROCHET_OUVRANT", "CROCHET_FERMANT", "PARENTHESE_OUVRANTE",
  "PARENTHESE_FERMANTE", "SI", "ALORS", "SINON", "TANT_QUE", "FAIRE",
  "END_TANT_QUE", "LIRE", "ECRIRE", "RETOURNE", "VIDE", "$accept",
  "programme", "corps", "liste_declarations", "liste_instructions",
  "suite_liste_inst", "declaration", "declaration_type", "dimension",
  "liste_dimensions", "une_dimension", "liste_champs", "un_champ",
  "nom_type", "type_simple", "declaration_variable",
  "suite_declaration_variable", "declaration_procedure", "$@1",
  "declaration_fonction", "$@2", "liste_parametres", "liste_param",
  "un_param", "instruction", "resultat_retourne", "appel",
  "liste_arguments", "liste_args", "un_arg", "condition", "tant_que",
  "affectation", "lire", "ecrire", "ecrit", "format", "suite_ecriture",
  "liste_variables", "variable", "liste_ind", "liste_champs_var",
  "un_indice", "expression", "concat", "expression_arith", "exp1", "exp2",
  "expression_bool", "eb1", "eb2", "expression_comp", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    67,    67,    67,    68,    68,    69,    70,
      70,    71,    71,    71,    71,    72,    72,    73,    74,    74,
      75,    76,    76,    77,    78,    78,    79,    79,    79,    79,
      79,    80,    81,    81,    83,    82,    85,    84,    86,    86,
      87,    87,    88,    89,    89,    89,    89,    89,    89,    89,
      89,    90,    90,    91,    92,    93,    93,    93,    94,    95,
      95,    96,    97,    98,    99,   100,   100,   100,   101,   101,
     101,   101,   102,   102,   103,   103,   103,   104,   104,   105,
     105,   106,   106,   107,   108,   108,   108,   108,   109,   109,
     110,   110,   110,   111,   111,   111,   112,   112,   112,   112,
     112,   112,   112,   113,   113,   113,   114,   114,   115,   115,
     115,   115,   116,   116,   116,   116,   116
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     1,     2,     3,     3,     2,
       3,     1,     1,     1,     1,     6,     7,     3,     1,     3,
       3,     2,     3,     3,     1,     1,     1,     1,     1,     1,
       4,     2,     3,     3,     0,     5,     0,     7,     3,     0,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     1,     2,     3,     0,     1,     3,     1,     6,
       4,     5,     3,     4,     7,     0,     2,     2,     1,     1,
       1,     1,     0,     3,     0,     1,     3,     5,     2,     1,
       3,     0,     2,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     2,     2,
       1,     1,     1,     3,     3,     1,     2,     1,     3,     1,
       1,     1,     3,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     0,     0,     0,     0,     0,     2,     0,
       5,     0,    11,    12,    13,    14,     1,    81,     0,     0,
       0,     0,    51,    49,     0,     0,    46,    44,    45,    43,
      47,    48,     0,    39,    39,     0,    31,     0,     4,     6,
       0,     0,    55,    53,    78,     0,   109,   110,     0,   100,
     101,     0,   102,    97,     0,    92,    95,     0,   105,   107,
     111,     0,    74,     0,    88,    86,    50,    52,    87,    84,
      85,     8,     9,     0,     0,    34,     0,     0,     0,     0,
       7,    81,    82,     0,     0,    79,    83,     0,    56,    58,
     106,    98,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
      65,     0,    10,    62,     0,     0,    40,     3,     0,    26,
      27,    29,     0,    28,    25,    32,    24,    33,     0,     0,
       0,     0,    81,     0,    54,    96,   108,   112,   113,   114,
     115,   116,    90,    91,    94,    93,   103,   104,    60,     0,
       0,    63,    65,    68,    69,    70,    71,     0,    65,    89,
       0,     0,    38,    35,    36,     0,     0,     0,     0,     0,
       0,    80,    77,    57,     0,    61,    76,    67,    72,    66,
      42,    41,     3,     0,     0,     0,    18,     0,     0,    15,
      21,    59,     0,     0,    37,    30,     0,     0,    17,    16,
      23,    22,    72,    64,    20,    19,    73
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,     9,    10,    24,    11,    12,   167,   185,
     186,   169,   170,   125,   126,    13,    36,    14,   117,    15,
     182,    75,   115,   116,    25,    66,    52,    43,    87,    88,
      27,    28,    29,    30,    31,   157,   158,   193,   108,    53,
      84,    44,    85,    89,    68,    54,    55,    56,    70,    58,
      59,    60
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -126
static const yytype_int16 yypact[] =
{
      10,    28,    20,    81,   -34,    24,    40,    50,  -126,    26,
    -126,    75,  -126,  -126,  -126,  -126,  -126,     3,    55,    55,
      53,    59,    12,  -126,    96,    89,  -126,  -126,  -126,  -126,
    -126,  -126,   105,    71,    71,    80,  -126,   116,  -126,    42,
     106,    97,    12,  -126,  -126,    69,  -126,  -126,     5,  -126,
    -126,    55,  -126,  -126,   140,   100,  -126,     2,  -126,  -126,
    -126,    -2,   106,   129,  -126,  -126,  -126,  -126,   149,   140,
      19,  -126,    81,    12,   137,  -126,   115,   125,    40,    64,
    -126,   -13,  -126,    97,   -10,  -126,    57,    17,  -126,  -126,
    -126,  -126,  -126,    99,     6,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    55,    55,    26,    26,    37,  -126,
      85,   147,  -126,  -126,   158,    38,  -126,    28,   134,  -126,
    -126,  -126,   130,  -126,  -126,  -126,  -126,  -126,   131,   143,
      66,    97,   161,    12,  -126,  -126,  -126,    57,    57,    57,
      57,    57,   100,   100,  -126,  -126,  -126,  -126,   128,   126,
     106,  -126,    85,  -126,  -126,  -126,  -126,   162,    85,  -126,
     134,   137,  -126,  -126,  -126,   157,   159,   150,   169,   151,
     172,  -126,  -126,  -126,    26,  -126,  -126,  -126,   170,  -126,
    -126,  -126,    28,   144,   171,    -5,  -126,   125,   125,  -126,
     143,  -126,   106,   145,  -126,  -126,   167,   159,  -126,  -126,
    -126,  -126,   170,  -126,  -126,  -126,  -126
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -126,  -126,  -112,   163,    -8,   132,  -126,  -126,  -126,  -126,
       4,    13,  -126,   -47,  -109,  -126,   122,  -126,  -126,  -126,
    -126,   173,  -126,    44,  -126,  -126,     0,  -126,  -126,    73,
    -126,  -126,  -126,  -126,  -126,  -125,  -126,     7,  -126,    -3,
    -126,    76,    79,   -18,  -126,   -20,    48,    49,    -1,    70,
     166,  -126
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      32,    38,    69,    26,    67,   163,    33,   104,   105,   164,
      40,   104,   105,     1,   131,   104,   105,    57,    61,   197,
      16,    86,    69,    45,    46,    47,    40,   177,   104,   105,
       3,    93,     3,   179,     4,     5,    91,    82,    41,    92,
      48,   133,   132,    49,    64,    65,    50,   198,     4,     5,
      94,   180,    17,    69,    41,   113,    42,   107,   106,   109,
     136,   150,   161,   130,    34,    51,    45,    46,    47,    32,
     194,   134,    26,     6,     7,   137,   138,   139,   140,   141,
      35,    46,    47,    48,   100,   101,    49,     6,     7,    50,
      37,   151,   162,   100,   101,    17,    39,    48,   148,   149,
      49,    71,    77,    50,    78,   128,    62,   129,    51,    17,
      72,    86,    63,    69,    95,    96,    97,    98,    99,    73,
     135,    17,    51,   152,    74,    48,   100,   101,    49,   102,
     103,    50,   153,   154,   155,   156,    18,    17,    79,    19,
     199,   200,    20,    21,    22,    23,    81,   176,   142,   143,
      83,   144,   145,   135,   110,    95,    96,    97,    98,    99,
     119,   120,   121,   122,   123,   124,   191,   100,   101,   119,
     120,   121,   122,   123,   146,   147,   111,   114,   118,   159,
     160,   165,   166,   168,    40,   174,   175,   178,   183,   202,
     184,   188,   187,   190,   192,   189,   195,   196,   204,   203,
     127,   205,    80,   201,   112,   181,   173,    76,   172,   206,
     171,    90
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-126))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_uint8 yycheck[] =
{
       3,     9,    22,     3,    22,   117,    40,     9,    10,   118,
      23,     9,    10,     3,    24,     9,    10,    18,    19,    24,
       0,    41,    42,    11,    12,    13,    23,   152,     9,    10,
       4,    51,     4,   158,     6,     7,    31,    40,    51,    34,
      28,    24,    52,    31,    32,    33,    34,    52,     6,     7,
      51,   160,    40,    73,    51,    73,    53,    59,    56,    62,
      54,    24,    24,    83,    40,    53,    11,    12,    13,    72,
     182,    54,    72,    45,    46,    95,    96,    97,    98,    99,
      40,    12,    13,    28,    27,    28,    31,    45,    46,    34,
      40,    54,    54,    27,    28,    40,    21,    28,   106,   107,
      31,     5,    22,    34,    24,    41,    53,    43,    53,    40,
      21,   131,    53,   133,    15,    16,    17,    18,    19,    14,
      54,    40,    53,    38,    53,    28,    27,    28,    31,    29,
      30,    34,    47,    48,    49,    50,    55,    40,    22,    58,
     187,   188,    61,    62,    63,    64,    40,   150,   100,   101,
      53,   102,   103,    54,    25,    15,    16,    17,    18,    19,
      35,    36,    37,    38,    39,    40,   174,    27,    28,    35,
      36,    37,    38,    39,   104,   105,    27,    40,    63,    32,
      22,    51,    51,    40,    23,    57,    60,    25,    31,   192,
      31,    22,    42,    21,    24,    44,    52,    26,    31,    54,
      78,   197,    39,   190,    72,   161,   133,    34,   132,   202,
     131,    45
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    66,     4,     6,     7,    45,    46,    67,    68,
      69,    71,    72,    80,    82,    84,     0,    40,    55,    58,
      61,    62,    63,    64,    70,    89,    91,    95,    96,    97,
      98,    99,   104,    40,    40,    40,    81,    40,    69,    21,
      23,    51,    53,    92,   106,    11,    12,    13,    28,    31,
      34,    53,    91,   104,   110,   111,   112,   113,   114,   115,
     116,   113,    53,    53,    32,    33,    90,   108,   109,   110,
     113,     5,    21,    14,    53,    86,    86,    22,    24,    22,
      68,    40,   104,    53,   105,   107,   110,    93,    94,   108,
     115,    31,    34,   110,   113,    15,    16,    17,    18,    19,
      27,    28,    29,    30,     9,    10,    56,    59,   103,   104,
      25,    27,    70,   108,    40,    87,    88,    83,    63,    35,
      36,    37,    38,    39,    40,    78,    79,    81,    41,    43,
     110,    24,    52,    24,    54,    54,    54,   110,   110,   110,
     110,   110,   111,   111,   112,   112,   114,   114,    69,    69,
      24,    54,    38,    47,    48,    49,    50,   100,   101,    32,
      22,    24,    54,    67,    79,    51,    51,    73,    40,    76,
      77,   107,   106,    94,    57,    60,   104,   100,    25,   100,
      79,    88,    85,    31,    31,    74,    75,    42,    22,    44,
      21,    69,    24,   102,    67,    52,    26,    24,    52,    78,
      78,    76,   104,    54,    31,    75,   102
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
      yychar = YYLEX;
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1806 of yacc.c  */
#line 72 "projet.y"
    { 
					//int execution = ??;
					int description = ajoute_Struct((yyvsp[(5) - (6)].ival), getBuf()); counter=0;buffer_clear();
					insererDeclaration( insererLexeme((yyvsp[(2) - (6)].sval)),TYPE_S,0,description,0);
					}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 77 "projet.y"
    {
					int description = ajoute_Tab((yyvsp[(5) - (7)].ival),(yyvsp[(7) - (7)].ival), getBuf());buffer_clear();
					insererDeclaration( insererLexeme((yyvsp[(2) - (7)].sval)),TYPE_T,0,description,0 );
					}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 83 "projet.y"
    {(yyval.ival)=(yyvsp[(2) - (3)].ival);}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 86 "projet.y"
    {(yyval.ival)=(yyvsp[(1) - (1)].ival);}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 87 "projet.y"
    {(yyval.ival)=(yyvsp[(1) - (3)].ival)+1;}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 90 "projet.y"
    {buffer_ajoute2((yyvsp[(1) - (3)].ival),(yyvsp[(3) - (3)].ival));}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 93 "projet.y"
    {(yyval.ival)=1;}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 94 "projet.y"
    {(yyval.ival)=(yyvsp[(3) - (3)].ival)+1;}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 97 "projet.y"
    { insererLexeme((yyvsp[(1) - (3)].sval)); buffer_ajoute3(insererLexeme((yyvsp[(1) - (3)].sval)),(yyvsp[(3) - (3)].ival),counter++); }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 100 "projet.y"
    { (yyval.ival)=(yyvsp[(1) - (1)].ival); }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 101 "projet.y"
    { (yyval.ival)=chercherLexeme((yyvsp[(1) - (1)].sval)); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 104 "projet.y"
    { (yyval.ival) = 0; }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 105 "projet.y"
    { (yyval.ival) = 1; }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 106 "projet.y"
    { (yyval.ival) = 2; }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 107 "projet.y"
    { (yyval.ival) = 3; }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 108 "projet.y"
    { (yyval.ival) = 0; }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 114 "projet.y"
    {
							(yyval.ival) = (yyvsp[(3) - (3)].ival);
							insererDeclaration( insererLexeme((yyvsp[(1) - (3)].sval)),VAR,0,(yyvsp[(3) - (3)].ival),0 );
							}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 118 "projet.y"
    {
							(yyval.ival) = (yyvsp[(3) - (3)].ival);
							insererDeclaration( insererLexeme((yyvsp[(1) - (3)].sval)),VAR,0,(yyvsp[(3) - (3)].ival),0 );
							}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 124 "projet.y"
    {
							int description = ajoute_Proc((yyvsp[(3) - (3)].ival), getBuf()); buffer_clear();
							insererDeclaration( insererLexeme((yyvsp[(2) - (3)].sval)),PROC,0,description,0 ); 
							}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 130 "projet.y"
    {
							int description = ajoute_Func((yyvsp[(5) - (5)].ival), (yyvsp[(3) - (5)].ival),getBuf()); buffer_clear();
							insererDeclaration( insererLexeme((yyvsp[(2) - (5)].sval)),FUNC,0,description,0 ); 
							}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 136 "projet.y"
    {(yyval.ival)=(yyvsp[(2) - (3)].ival);}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 137 "projet.y"
    {(yyval.ival)=0;}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 140 "projet.y"
    {(yyval.ival)=1;}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 141 "projet.y"
    {(yyval.ival)=(yyvsp[(1) - (3)].ival)+1;}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 144 "projet.y"
    { buffer_ajoute2(insererLexeme((yyvsp[(1) - (3)].sval)),(yyvsp[(3) - (3)].ival));}
    break;



/* Line 1806 of yacc.c  */
#line 1901 "y.tab.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 281 "projet.y"

int main(int argc, char* argv[]){

	initTblLexeme();
	initTblDeclaration();
	initTableRepType();
	initRegions();
	buffer_clear();
	
	yyparse(); // Lancement de lex/yacc

	afficheTableLexico();
	afficher_Tbl_Type();
	afficherTblDeclaration();
	afficherTblRegions();

	return 0;
}





						
					
