/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
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

/* Line 2068 of yacc.c  */
#line 24 "projet.y"
 double dval; int ival; char * sval; char cval; struct noeud * noeudval; 


/* Line 2068 of yacc.c  */
#line 180 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


