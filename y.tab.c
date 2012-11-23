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
	#include "Arbre.h"


	int yylex (void);
	int yyerror (char const * s );
	extern int num_ligne;
	extern char* yytext;

	int counter = 0;
	int cregion = 0;
	int niveauImbrication = 0;


/* Line 268 of yacc.c  */
#line 97 "y.tab.c"

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
     FINSI = 261,
     PROCEDURE = 262,
     FONCTION = 263,
     EST = 264,
     ET = 265,
     OU = 266,
     NON = 267,
     VRAI = 268,
     FAUX = 269,
     OPAFF = 270,
     INF = 271,
     INF_EGAL = 272,
     SUP = 273,
     SUP_EGAL = 274,
     EGAL = 275,
     DIFF = 276,
     POINT_VIRGULE = 277,
     DEUX_POINTS = 278,
     POINT = 279,
     VIRGULE = 280,
     GUILLEMET = 281,
     POINT_POINT = 282,
     PLUS = 283,
     MOINS = 284,
     DIV = 285,
     MULT = 286,
     ENTIER = 287,
     REEL = 288,
     CARACTERE = 289,
     CHAINE = 290,
     BOOLEEN = 291,
     TABLEAU = 292,
     DE = 293,
     STRUCT = 294,
     FSTRUCT = 295,
     VARIABLE = 296,
     TYPE = 297,
     FORMAT_ENTIER = 298,
     FORMAT_REELLE = 299,
     FORMAT_CARACTERE = 300,
     FORMAT_CHAINE = 301,
     CROCHET_OUVRANT = 302,
     CROCHET_FERMANT = 303,
     PARENTHESE_OUVRANTE = 304,
     PARENTHESE_FERMANTE = 305,
     SI = 306,
     ALORS = 307,
     SINON = 308,
     TANT_QUE = 309,
     FAIRE = 310,
     END_TANT_QUE = 311,
     RETOURNE = 312,
     VIDE = 313,
     CSTE_ENTIERE = 314,
     IDF = 315,
     CSTE_CHAINE = 316,
     CSTE_CHAR = 317,
     CSTE_REEL = 318
   };
#endif
/* Tokens.  */
#define PROG 258
#define DEBUT 259
#define FIN 260
#define FINSI 261
#define PROCEDURE 262
#define FONCTION 263
#define EST 264
#define ET 265
#define OU 266
#define NON 267
#define VRAI 268
#define FAUX 269
#define OPAFF 270
#define INF 271
#define INF_EGAL 272
#define SUP 273
#define SUP_EGAL 274
#define EGAL 275
#define DIFF 276
#define POINT_VIRGULE 277
#define DEUX_POINTS 278
#define POINT 279
#define VIRGULE 280
#define GUILLEMET 281
#define POINT_POINT 282
#define PLUS 283
#define MOINS 284
#define DIV 285
#define MULT 286
#define ENTIER 287
#define REEL 288
#define CARACTERE 289
#define CHAINE 290
#define BOOLEEN 291
#define TABLEAU 292
#define DE 293
#define STRUCT 294
#define FSTRUCT 295
#define VARIABLE 296
#define TYPE 297
#define FORMAT_ENTIER 298
#define FORMAT_REELLE 299
#define FORMAT_CARACTERE 300
#define FORMAT_CHAINE 301
#define CROCHET_OUVRANT 302
#define CROCHET_FERMANT 303
#define PARENTHESE_OUVRANTE 304
#define PARENTHESE_FERMANTE 305
#define SI 306
#define ALORS 307
#define SINON 308
#define TANT_QUE 309
#define FAIRE 310
#define END_TANT_QUE 311
#define RETOURNE 312
#define VIDE 313
#define CSTE_ENTIERE 314
#define IDF 315
#define CSTE_CHAINE 316
#define CSTE_CHAR 317
#define CSTE_REEL 318




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 26 "projet.y"
 double dval; int ival; char * sval; char cval; struct noeud * noeudval; 


/* Line 293 of yacc.c  */
#line 263 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 275 "y.tab.c"

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
#define YYLAST   203

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNRULES -- Number of states.  */
#define YYNSTATES  183

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

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
      55,    56,    57,    58,    59,    60,    61,    62,    63
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
     127,   129,   133,   137,   139,   141,   143,   145,   147,   150,
     151,   153,   156,   160,   161,   163,   167,   169,   177,   183,
     189,   193,   196,   197,   202,   205,   207,   211,   214,   218,
     220,   222,   224,   226,   228,   232,   236,   240,   242,   246,
     250,   252,   256,   258,   261,   264,   266,   268,   270,   274,
     278,   280,   283,   285,   289,   291,   293,   295,   299,   303,
     307,   311
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      65,     0,    -1,     3,    66,    -1,    -1,    67,    68,    -1,
      68,    -1,    70,    22,    -1,    70,    22,    67,    -1,     4,
      69,     5,    -1,    88,    22,    -1,    88,    22,    69,    -1,
      71,    -1,    79,    -1,    81,    -1,    83,    -1,    42,    60,
      23,    39,    75,    40,    -1,    42,    60,    23,    37,    72,
      38,    77,    -1,    47,    73,    48,    -1,    74,    -1,    73,
      25,    74,    -1,    59,    27,    59,    -1,    76,    22,    -1,
      76,    22,    75,    -1,    60,    23,    77,    -1,    78,    -1,
      60,    -1,    32,    -1,    33,    -1,    36,    -1,    34,    -1,
      35,    47,    59,    48,    -1,    41,    80,    -1,    60,    23,
      77,    -1,    60,    25,    80,    -1,    -1,     7,    60,    85,
      82,    66,    -1,    -1,     8,    60,    85,    57,    78,    84,
      66,    -1,    49,    86,    50,    -1,    -1,    87,    -1,    86,
      25,    87,    -1,    60,    23,    78,    -1,    96,    -1,    94,
      -1,    95,    -1,    90,    -1,    58,    -1,    57,    89,    -1,
      -1,   101,    -1,    60,    91,    -1,    49,    92,    50,    -1,
      -1,    93,    -1,    93,    25,    92,    -1,   101,    -1,    51,
     106,    52,    69,    53,    69,     6,    -1,    51,   106,    52,
      69,     6,    -1,    54,   106,    55,    69,    56,    -1,    97,
      15,   101,    -1,    60,    98,    -1,    -1,    47,    99,    48,
      98,    -1,   100,    98,    -1,   103,    -1,   103,    25,    99,
      -1,    24,    60,    -1,    24,    60,   100,    -1,   103,    -1,
     106,    -1,    62,    -1,   102,    -1,    61,    -1,   102,    28,
      61,    -1,   103,    28,   104,    -1,   103,    29,   104,    -1,
     104,    -1,   104,    31,   105,    -1,   104,    30,   105,    -1,
     105,    -1,    49,   103,    50,    -1,    97,    -1,    29,    59,
      -1,    29,    63,    -1,    59,    -1,    63,    -1,    90,    -1,
     106,    10,   107,    -1,   106,    11,   107,    -1,   107,    -1,
      12,   108,    -1,   108,    -1,    49,   106,    50,    -1,    13,
      -1,    14,    -1,   109,    -1,   103,    16,   103,    -1,   103,
      17,   103,    -1,   103,    18,   103,    -1,   103,    19,   103,
      -1,   103,    20,   103,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    55,    55,    59,    60,    61,    65,    66,    70,    74,
      75,    81,    82,    83,    84,    88,    93,   100,   104,   105,
     109,   113,   114,   118,   122,   123,   127,   128,   129,   130,
     131,   135,   139,   143,   150,   150,   159,   159,   168,   169,
     173,   174,   178,   184,   185,   186,   187,   188,   189,   193,
     194,   198,   202,   205,   206,   207,   211,   215,   216,   220,
     224,   229,   233,   234,   235,   239,   240,   244,   245,   249,
     250,   251,   252,   256,   257,   261,   262,   263,   267,   268,
     269,   273,   274,   275,   276,   277,   278,   279,   284,   285,
     286,   290,   291,   295,   296,   297,   298,   303,   304,   305,
     306,   307
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROG", "DEBUT", "FIN", "FINSI",
  "PROCEDURE", "FONCTION", "EST", "ET", "OU", "NON", "VRAI", "FAUX",
  "OPAFF", "INF", "INF_EGAL", "SUP", "SUP_EGAL", "EGAL", "DIFF",
  "POINT_VIRGULE", "DEUX_POINTS", "POINT", "VIRGULE", "GUILLEMET",
  "POINT_POINT", "PLUS", "MOINS", "DIV", "MULT", "ENTIER", "REEL",
  "CARACTERE", "CHAINE", "BOOLEEN", "TABLEAU", "DE", "STRUCT", "FSTRUCT",
  "VARIABLE", "TYPE", "FORMAT_ENTIER", "FORMAT_REELLE", "FORMAT_CARACTERE",
  "FORMAT_CHAINE", "CROCHET_OUVRANT", "CROCHET_FERMANT",
  "PARENTHESE_OUVRANTE", "PARENTHESE_FERMANTE", "SI", "ALORS", "SINON",
  "TANT_QUE", "FAIRE", "END_TANT_QUE", "RETOURNE", "VIDE", "CSTE_ENTIERE",
  "IDF", "CSTE_CHAINE", "CSTE_CHAR", "CSTE_REEL", "$accept", "programme",
  "corps", "liste_declarations", "liste_instructions", "suite_liste_inst",
  "declaration", "declaration_type", "dimension", "liste_dimensions",
  "une_dimension", "liste_champs", "un_champ", "nom_type", "type_simple",
  "declaration_variable", "suite_declaration_variable",
  "declaration_procedure", "$@1", "declaration_fonction", "$@2",
  "liste_parametres", "liste_param", "un_param", "instruction",
  "resultat_retourne", "appel", "liste_arguments", "liste_args", "un_arg",
  "condition", "tant_que", "affectation", "variable", "variable_suite",
  "liste_ind", "liste_champs_var", "expression", "concat",
  "expression_arith", "exp1", "exp2", "expression_bool", "eb1", "eb2",
  "expression_comp", 0
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
     315,   316,   317,   318
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    66,    66,    66,    67,    67,    68,    69,
      69,    70,    70,    70,    70,    71,    71,    72,    73,    73,
      74,    75,    75,    76,    77,    77,    78,    78,    78,    78,
      78,    79,    80,    80,    82,    81,    84,    83,    85,    85,
      86,    86,    87,    88,    88,    88,    88,    88,    88,    89,
      89,    90,    91,    92,    92,    92,    93,    94,    94,    95,
      96,    97,    98,    98,    98,    99,    99,   100,   100,   101,
     101,   101,   101,   102,   102,   103,   103,   103,   104,   104,
     104,   105,   105,   105,   105,   105,   105,   105,   106,   106,
     106,   107,   107,   108,   108,   108,   108,   109,   109,   109,
     109,   109
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     1,     2,     3,     3,     2,
       3,     1,     1,     1,     1,     6,     7,     3,     1,     3,
       3,     2,     3,     3,     1,     1,     1,     1,     1,     1,
       4,     2,     3,     3,     0,     5,     0,     7,     3,     0,
       1,     3,     3,     1,     1,     1,     1,     1,     2,     0,
       1,     2,     3,     0,     1,     3,     1,     7,     5,     5,
       3,     2,     0,     4,     2,     1,     3,     2,     3,     1,
       1,     1,     1,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     2,     2,     1,     1,     1,     3,     3,
       1,     2,     1,     3,     1,     1,     1,     3,     3,     3,
       3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     0,     0,     0,     0,     0,     2,     0,
       5,     0,    11,    12,    13,    14,     1,     0,     0,    49,
      47,    62,     0,     0,    46,    44,    45,    43,     0,    39,
      39,     0,    31,     0,     4,     6,     0,    94,    95,     0,
       0,    85,    86,    87,    82,     0,    77,    80,     0,    90,
      92,    96,     0,    73,    71,    48,    50,    72,    69,    70,
       0,     0,    53,    51,    61,    62,     8,     9,     0,     0,
      34,     0,     0,     0,     0,     7,    91,    83,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    67,     0,     0,    65,     0,
      54,    56,    64,    10,    60,     0,     0,    40,     3,     0,
      26,    27,    29,     0,    28,    25,    32,    24,    33,     0,
       0,    81,    93,    97,    98,    99,   100,   101,    75,    76,
      79,    78,    88,    89,     0,     0,    74,    68,     0,    62,
       0,    52,    53,     0,     0,    38,    35,    36,     0,     0,
       0,     0,     0,     0,    58,     0,    59,    63,    66,    55,
      42,    41,     3,     0,     0,     0,    18,     0,     0,    15,
      21,     0,    37,    30,     0,     0,    17,    16,    23,    22,
      57,    20,    19
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,     9,    10,    22,    11,    12,   150,   165,
     166,   152,   153,   116,   117,    13,    32,    14,   108,    15,
     162,    70,   106,   107,    23,    55,    43,    63,    99,   100,
      25,    26,    27,    44,    64,    97,    65,   101,    57,    45,
      46,    47,    59,    49,    50,    51
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -106
static const yytype_int16 yypact[] =
{
      19,    91,    25,   106,   -32,    16,    36,    47,  -106,    42,
    -106,   103,  -106,  -106,  -106,  -106,  -106,    24,    24,     0,
    -106,     3,   126,   113,  -106,  -106,  -106,  -106,   136,    93,
      93,    49,  -106,   130,  -106,     1,    64,  -106,  -106,   -44,
      24,  -106,  -106,  -106,  -106,   127,    50,  -106,     6,  -106,
    -106,  -106,    10,  -106,  -106,  -106,  -106,   122,   127,    75,
      98,    59,     0,  -106,  -106,   -13,  -106,   106,     0,    99,
    -106,   104,   105,    36,    -4,  -106,  -106,  -106,  -106,    86,
      29,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      24,    24,   106,   106,   101,   148,    59,   125,    72,   124,
     150,  -106,  -106,  -106,  -106,   153,     5,  -106,    91,   135,
    -106,  -106,  -106,   131,  -106,  -106,  -106,  -106,  -106,   132,
     117,  -106,  -106,    81,    81,    81,    81,    81,    50,    50,
    -106,  -106,  -106,  -106,    -2,   128,  -106,  -106,    -5,   -13,
      59,  -106,     0,   135,    99,  -106,  -106,  -106,   121,   123,
     143,   160,   145,   164,  -106,   106,  -106,  -106,  -106,  -106,
    -106,  -106,    91,   139,   161,    -7,  -106,   105,   105,  -106,
     117,   183,  -106,  -106,   133,   123,  -106,  -106,  -106,  -106,
    -106,  -106,  -106
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -106,  -106,  -105,   155,   182,   -61,  -106,  -106,  -106,  -106,
      18,    26,  -106,   -51,   -99,  -106,   129,  -106,  -106,  -106,
    -106,   165,  -106,    53,  -106,  -106,    -3,  -106,    52,  -106,
    -106,  -106,  -106,    -1,   -64,    60,   108,   -12,  -106,   -14,
      34,    41,    94,    58,   162,  -106
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      24,   102,    28,   146,   154,    58,   103,    56,     4,     5,
     147,    60,    36,    37,    38,    77,    90,    91,   175,    78,
      90,    91,     1,    86,    87,    16,    79,    60,    29,    39,
     144,   134,   135,   119,    61,   120,    36,    37,    38,    90,
      91,   176,     6,     7,   160,   121,     3,    98,    58,    40,
      61,   155,    62,    39,    58,   145,   104,   172,    92,    41,
      21,    53,    54,    42,    24,    93,    28,   123,   124,   125,
     126,   127,    72,    40,    73,   157,    30,    37,    38,   122,
      88,    89,   138,    41,    21,    90,    91,    42,    39,    24,
      24,    28,    28,    39,   171,     3,    31,   140,     4,     5,
      86,    87,    81,    82,    83,    84,    85,    33,    96,    86,
      87,    48,    52,    40,    86,    87,   177,   178,    41,    21,
     128,   129,    42,    41,    21,    35,    98,    42,    58,   130,
     131,    66,     6,     7,    80,    67,   121,   110,   111,   112,
     113,   114,    69,    81,    82,    83,    84,    85,   132,   133,
      94,    68,    24,    74,    28,    86,    87,    17,    95,   105,
      18,   109,   136,    19,    20,   115,    21,   110,   111,   112,
     113,   114,    60,   139,   141,   142,   143,   151,   148,   149,
     163,   167,   164,   168,   156,   169,   170,   173,   174,   180,
      75,    34,   181,   182,   159,    71,   179,   161,    76,     0,
     158,     0,   118,   137
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-106))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       3,    65,     3,   108,     6,    19,    67,    19,     7,     8,
     109,    24,    12,    13,    14,    59,    10,    11,    25,    63,
      10,    11,     3,    28,    29,     0,    40,    24,    60,    29,
      25,    92,    93,    37,    47,    39,    12,    13,    14,    10,
      11,    48,    41,    42,   143,    50,     4,    61,    62,    49,
      47,    53,    49,    29,    68,    50,    68,   162,    52,    59,
      60,    61,    62,    63,    67,    55,    67,    81,    82,    83,
      84,    85,    23,    49,    25,   139,    60,    13,    14,    50,
      30,    31,    96,    59,    60,    10,    11,    63,    29,    92,
      93,    92,    93,    29,   155,     4,    60,    25,     7,     8,
      28,    29,    16,    17,    18,    19,    20,    60,    49,    28,
      29,    17,    18,    49,    28,    29,   167,   168,    59,    60,
      86,    87,    63,    59,    60,    22,   140,    63,   142,    88,
      89,     5,    41,    42,    40,    22,    50,    32,    33,    34,
      35,    36,    49,    16,    17,    18,    19,    20,    90,    91,
      28,    15,   155,    23,   155,    28,    29,    51,    60,    60,
      54,    57,    61,    57,    58,    60,    60,    32,    33,    34,
      35,    36,    24,    48,    50,    25,    23,    60,    47,    47,
      59,    38,    59,    23,    56,    40,    22,    48,    27,     6,
      35,     9,    59,   175,   142,    30,   170,   144,    36,    -1,
     140,    -1,    73,    95
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    65,     4,     7,     8,    41,    42,    66,    67,
      68,    70,    71,    79,    81,    83,     0,    51,    54,    57,
      58,    60,    69,    88,    90,    94,    95,    96,    97,    60,
      60,    60,    80,    60,    68,    22,    12,    13,    14,    29,
      49,    59,    63,    90,    97,   103,   104,   105,   106,   107,
     108,   109,   106,    61,    62,    89,   101,   102,   103,   106,
      24,    47,    49,    91,    98,   100,     5,    22,    15,    49,
      85,    85,    23,    25,    23,    67,   108,    59,    63,   103,
     106,    16,    17,    18,    19,    20,    28,    29,    30,    31,
      10,    11,    52,    55,    28,    60,    49,    99,   103,    92,
      93,   101,    98,    69,   101,    60,    86,    87,    82,    57,
      32,    33,    34,    35,    36,    60,    77,    78,    80,    37,
      39,    50,    50,   103,   103,   103,   103,   103,   104,   104,
     105,   105,   107,   107,    69,    69,    61,   100,   103,    48,
      25,    50,    25,    23,    25,    50,    66,    78,    47,    47,
      72,    60,    75,    76,     6,    53,    56,    98,    99,    92,
      78,    87,    84,    59,    59,    73,    74,    38,    23,    40,
      22,    69,    66,    48,    27,    25,    48,    77,    77,    75,
       6,    59,    74
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
        case 2:

/* Line 1806 of yacc.c  */
#line 55 "projet.y"
    { (yyval.noeudval) = (yyvsp[(2) - (2)].noeudval) ; insererRegion( 0,0,(yyvsp[(2) - (2)].noeudval) ); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 59 "projet.y"
    { (yyval.noeudval) = creerNoeud( T_VIDE ); }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 60 "projet.y"
    { (yyval.noeudval) = (yyvsp[(2) - (2)].noeudval); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 61 "projet.y"
    { (yyval.noeudval) = (yyvsp[(1) - (1)].noeudval); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 70 "projet.y"
    { (yyval.noeudval) = (yyvsp[(2) - (3)].noeudval); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 74 "projet.y"
    { (yyval.noeudval) = (yyvsp[(1) - (2)].noeudval); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 75 "projet.y"
    { (yyval.noeudval) = ajouterFrere( (yyvsp[(1) - (3)].noeudval),(yyvsp[(3) - (3)].noeudval) ); }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 88 "projet.y"
    { 
			int taille = 0;
			int description = ajoute_Struct((yyvsp[(5) - (6)].ival), getBuf()); counter=0;buffer_clear();
			insererDeclaration( (yyvsp[(2) - (6)].ival),TYPE_S,0,description,taille);
		}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 93 "projet.y"
    {
			int description = ajoute_Tab((yyvsp[(5) - (7)].ival),(yyvsp[(7) - (7)].ival), getBuf());buffer_clear();
			insererDeclaration( (yyvsp[(2) - (7)].ival),TYPE_T,0,description,0 );
		}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 100 "projet.y"
    {(yyval.ival)=(yyvsp[(2) - (3)].ival);}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 104 "projet.y"
    {(yyval.ival)=(yyvsp[(1) - (1)].ival);}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 105 "projet.y"
    {(yyval.ival)=(yyvsp[(1) - (3)].ival)+1;}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 109 "projet.y"
    { buffer_ajoute2((yyvsp[(1) - (3)].ival),(yyvsp[(3) - (3)].ival)); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 113 "projet.y"
    { (yyval.ival)=1; }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 114 "projet.y"
    { (yyval.ival)=(yyvsp[(3) - (3)].ival)+1; }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 118 "projet.y"
    { buffer_ajoute3((yyvsp[(1) - (3)].ival),(yyvsp[(3) - (3)].ival),counter++); }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 122 "projet.y"
    { (yyval.ival)=(yyvsp[(1) - (1)].ival); }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 123 "projet.y"
    { (yyval.ival)=(yyvsp[(1) - (1)].ival); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 127 "projet.y"
    { (yyval.ival) = 0; }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 128 "projet.y"
    { (yyval.ival) = 1; }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 129 "projet.y"
    { (yyval.ival) = 2; }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 130 "projet.y"
    { (yyval.ival) = 3; }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 131 "projet.y"
    { (yyval.ival) = 0; }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 139 "projet.y"
    {
							insererDeclaration( (yyvsp[(1) - (3)].ival),VAR,0,(yyvsp[(3) - (3)].ival),0 );
							(yyval.ival) = (yyvsp[(3) - (3)].ival);
							}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 143 "projet.y"
    {
							insererDeclaration( (yyvsp[(1) - (3)].ival),VAR,0,(yyvsp[(3) - (3)].ival),0 );
							(yyval.ival) = (yyvsp[(3) - (3)].ival);
							}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 150 "projet.y"
    { niveauImbrication++; }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 150 "projet.y"
    {
			int description = ajoute_Proc((yyvsp[(3) - (5)].ival), getBuf()); buffer_clear();
			int region = insererRegion( 0,niveauImbrication,(yyvsp[(5) - (5)].noeudval) );
			insererDeclaration( (yyvsp[(2) - (5)].ival),PROC,0,description,region );
			niveauImbrication--;
			}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 159 "projet.y"
    { niveauImbrication++; }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 159 "projet.y"
    {
			int description = ajoute_Func((yyvsp[(5) - (7)].ival), (yyvsp[(3) - (7)].ival),getBuf()); buffer_clear();
			int region = insererRegion( 0,niveauImbrication,(yyvsp[(7) - (7)].noeudval) );
			insererDeclaration( (yyvsp[(2) - (7)].ival),FUNC,0,description,region );
			niveauImbrication--;
			}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 168 "projet.y"
    {(yyval.ival)=(yyvsp[(2) - (3)].ival);}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 169 "projet.y"
    {(yyval.ival)=0;}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 173 "projet.y"
    {(yyval.ival)=1;}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 174 "projet.y"
    {(yyval.ival)=(yyvsp[(1) - (3)].ival)+1;}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 178 "projet.y"
    { buffer_ajoute2((yyvsp[(1) - (3)].ival),(yyvsp[(3) - (3)].ival));}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 184 "projet.y"
    {(yyval.noeudval) = (yyvsp[(1) - (1)].noeudval);}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 185 "projet.y"
    {(yyval.noeudval) = (yyvsp[(1) - (1)].noeudval);}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 186 "projet.y"
    {(yyval.noeudval) = (yyvsp[(1) - (1)].noeudval);}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 187 "projet.y"
    {(yyval.noeudval) = (yyvsp[(1) - (1)].noeudval);}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 188 "projet.y"
    {(yyval.noeudval) = creerNoeud( T_VIDE );}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 189 "projet.y"
    {(yyval.noeudval) = ajouterFils(creerNoeud( T_RETOURNE ),(yyvsp[(2) - (2)].noeudval));}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 193 "projet.y"
    { (yyval.noeudval) = creerNoeud( T_VIDE ); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 194 "projet.y"
    { (yyval.noeudval) = (yyvsp[(1) - (1)].noeudval); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 198 "projet.y"
    { (yyval.noeudval) = ajouterFils(creerNoeud_i( T_APPEL,(yyvsp[(1) - (2)].ival) ),(yyvsp[(2) - (2)].noeudval)); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 202 "projet.y"
    { (yyval.noeudval) = (yyvsp[(2) - (3)].noeudval); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 205 "projet.y"
    {(yyval.noeudval)=NULL;}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 206 "projet.y"
    { (yyval.noeudval) = (yyvsp[(1) - (1)].noeudval); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 207 "projet.y"
    { (yyval.noeudval) = ajouterFrere( (yyvsp[(1) - (3)].noeudval),(yyvsp[(3) - (3)].noeudval) ); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 211 "projet.y"
    { (yyval.noeudval) = (yyvsp[(1) - (1)].noeudval); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 215 "projet.y"
    { (yyval.noeudval) = ajouterFils(creerNoeud(T_SI), ajouterFrere( (yyvsp[(2) - (7)].noeudval),ajouterFrere( (yyvsp[(4) - (7)].noeudval),(yyvsp[(6) - (7)].noeudval) ) ) ); }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 216 "projet.y"
    { (yyval.noeudval) = ajouterFils(creerNoeud(T_SI), ajouterFrere( (yyvsp[(2) - (5)].noeudval),(yyvsp[(4) - (5)].noeudval))); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 220 "projet.y"
    { (yyval.noeudval) = ajouterFils(creerNoeud(T_TANTQUE),ajouterFrere( (yyvsp[(2) - (5)].noeudval), (yyvsp[(4) - (5)].noeudval) )); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 224 "projet.y"
    { (yyval.noeudval) =  ajouterFils(creerNoeud( T_AFFECT ),ajouterFrere((yyvsp[(1) - (3)].noeudval), (yyvsp[(3) - (3)].noeudval) )); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 229 "projet.y"
    { (yyval.noeudval) = ajouterFils(creerNoeud_i( T_VAR,(yyvsp[(1) - (2)].ival) ),(yyvsp[(2) - (2)].noeudval)); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 233 "projet.y"
    { (yyval.noeudval) = NULL; }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 234 "projet.y"
    { (yyval.noeudval) = ajouterFrere( ajouterFils(creerNoeud( T_TABLE_ELEM ),(yyvsp[(2) - (4)].noeudval)),(yyvsp[(4) - (4)].noeudval) ); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 235 "projet.y"
    { (yyval.noeudval) = ajouterFrere((yyvsp[(1) - (2)].noeudval),(yyvsp[(2) - (2)].noeudval)); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 239 "projet.y"
    { (yyval.noeudval) = ajouterFils( creerNoeud( T_INDICE ),(yyvsp[(1) - (1)].noeudval) ); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 240 "projet.y"
    { (yyval.noeudval) = ajouterFrere( ajouterFils(creerNoeud( T_INDICE ),(yyvsp[(1) - (3)].noeudval)),(yyvsp[(3) - (3)].noeudval) ); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 244 "projet.y"
    { (yyval.noeudval) = creerNoeud_i( T_STRUCT_ELEM,(yyvsp[(2) - (2)].ival)); }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 245 "projet.y"
    { (yyval.noeudval) = ajouterFrere( creerNoeud_i( T_STRUCT_ELEM,(yyvsp[(2) - (3)].ival) ),(yyvsp[(3) - (3)].noeudval) ); }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 249 "projet.y"
    { (yyval.noeudval) = (yyvsp[(1) - (1)].noeudval); }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 250 "projet.y"
    { (yyval.noeudval) = (yyvsp[(1) - (1)].noeudval); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 251 "projet.y"
    { (yyval.noeudval) = creerNoeud_c( T_CHAR,(yyvsp[(1) - (1)].cval) ); }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 252 "projet.y"
    { (yyval.noeudval) = (yyvsp[(1) - (1)].noeudval); }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 256 "projet.y"
    { (yyval.noeudval) = creerNoeud_s( T_CHAINE,(yyvsp[(1) - (1)].sval) ); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 257 "projet.y"
    { (yyval.noeudval) = ajouterFils( creerNoeud( T_CONCAT ),ajouterFrere( (yyvsp[(1) - (3)].noeudval),creerNoeud_s( T_CHAINE, (yyvsp[(3) - (3)].sval)) )); }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 261 "projet.y"
    { (yyval.noeudval) = ajouterFils( creerNoeud( T_PLUS ), ajouterFrere( (yyvsp[(1) - (3)].noeudval),(yyvsp[(3) - (3)].noeudval) ) ); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 262 "projet.y"
    { (yyval.noeudval) = ajouterFils( creerNoeud( T_MOINS ), ajouterFrere( (yyvsp[(1) - (3)].noeudval),(yyvsp[(3) - (3)].noeudval) ) ); }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 263 "projet.y"
    { (yyval.noeudval) = (yyvsp[(1) - (1)].noeudval); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 267 "projet.y"
    { (yyval.noeudval) = ajouterFils(creerNoeud( T_MULT ),ajouterFrere( (yyvsp[(1) - (3)].noeudval) , (yyvsp[(3) - (3)].noeudval) )); }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 268 "projet.y"
    { (yyval.noeudval) =  ajouterFils(creerNoeud( T_DIV ),ajouterFrere( (yyvsp[(1) - (3)].noeudval) , (yyvsp[(3) - (3)].noeudval) )); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 269 "projet.y"
    { (yyval.noeudval) = (yyvsp[(1) - (1)].noeudval); }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 273 "projet.y"
    { (yyval.noeudval) =  (yyvsp[(2) - (3)].noeudval) ; }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 274 "projet.y"
    { (yyval.noeudval) = (yyvsp[(1) - (1)].noeudval); }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 275 "projet.y"
    { (yyval.noeudval) = creerNoeud_i( T_CST_ENTIER,-1*(yyvsp[(2) - (2)].ival) ); }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 276 "projet.y"
    { (yyval.noeudval) = creerNoeud_f( T_CST_REEL, -1*(yyvsp[(2) - (2)].dval)); }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 277 "projet.y"
    { (yyval.noeudval) = creerNoeud_i( T_CST_ENTIER,(yyvsp[(1) - (1)].ival) ); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 278 "projet.y"
    { (yyval.noeudval) = creerNoeud_f( T_CST_REEL,(yyvsp[(1) - (1)].dval) ); }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 279 "projet.y"
    { (yyval.noeudval) = (yyvsp[(1) - (1)].noeudval); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 284 "projet.y"
    { (yyval.noeudval) =  ajouterFils(creerNoeud( T_AND ),ajouterFrere( (yyvsp[(1) - (3)].noeudval) , (yyvsp[(3) - (3)].noeudval) ));  }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 285 "projet.y"
    { (yyval.noeudval) =  ajouterFils(creerNoeud( T_OR ),ajouterFrere( (yyvsp[(1) - (3)].noeudval) , (yyvsp[(3) - (3)].noeudval) ));  }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 286 "projet.y"
    { (yyval.noeudval) = (yyvsp[(1) - (1)].noeudval); }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 290 "projet.y"
    { (yyval.noeudval) = ajouterFils( creerNoeud( T_NOT ),(yyvsp[(2) - (2)].noeudval) );  }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 291 "projet.y"
    { (yyval.noeudval) = (yyvsp[(1) - (1)].noeudval); }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 295 "projet.y"
    { (yyval.noeudval) = (yyvsp[(2) - (3)].noeudval); }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 296 "projet.y"
    { (yyval.noeudval) = creerNoeud_i( T_BOOL,1 ); }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 297 "projet.y"
    { (yyval.noeudval) = creerNoeud_i( T_BOOL,0 ); }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 298 "projet.y"
    { (yyval.noeudval) = (yyvsp[(1) - (1)].noeudval); }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 303 "projet.y"
    { (yyval.noeudval) = ajouterFils(creerNoeud( T_INF ),ajouterFrere( (yyvsp[(1) - (3)].noeudval) , (yyvsp[(3) - (3)].noeudval) )); }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 304 "projet.y"
    { (yyval.noeudval) = ajouterFils(creerNoeud( T_INF_EGAL ),ajouterFrere( (yyvsp[(1) - (3)].noeudval) , (yyvsp[(3) - (3)].noeudval) )); }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 305 "projet.y"
    { (yyval.noeudval) = ajouterFils(creerNoeud( T_SUP ),ajouterFrere( (yyvsp[(1) - (3)].noeudval) , (yyvsp[(3) - (3)].noeudval) )); }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 306 "projet.y"
    { (yyval.noeudval) = ajouterFils(creerNoeud( T_SUP_EGAL ),ajouterFrere( (yyvsp[(1) - (3)].noeudval) , (yyvsp[(3) - (3)].noeudval) )); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 307 "projet.y"
    { (yyval.noeudval) = ajouterFils(creerNoeud( T_EGAL ),ajouterFrere( (yyvsp[(1) - (3)].noeudval) , (yyvsp[(3) - (3)].noeudval) )); }
    break;



/* Line 1806 of yacc.c  */
#line 2363 "y.tab.c"
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
#line 310 "projet.y"


int main(int argc, char* argv[]){

	printf("\n\n");

	initTblLexeme();
	initTblDeclaration();
	initTableRepType();
	initRegions();
	buffer_clear();
	
	yyparse(); // Lancement de lex/yacc

	printf("\n\n");

	//afficheTableLexico();
	//afficher_Tbl_Type();
	afficherTblDeclaration();
	afficherTblRegions();
	//affiche(Table_region);
	printf("\n\n");

	return 0;
}
