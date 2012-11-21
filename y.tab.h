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
     IDF = 287,
     CSTE_CHAINE = 288,
     CSTE_CHAR = 289,
     CSTE_REEL = 290,
     ENTIER = 291,
     REEL = 292,
     CARACTERE = 293,
     CHAINE = 294,
     BOOLEEN = 295,
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
#define IDF 287
#define CSTE_CHAINE 288
#define CSTE_CHAR 289
#define CSTE_REEL 290
#define ENTIER 291
#define REEL 292
#define CARACTERE 293
#define CHAINE 294
#define BOOLEEN 295
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

/* Line 2068 of yacc.c  */
#line 24 "projet.y"
 double dval; int ival; char * sval; char cval; struct noeud * noeudval; 


/* Line 2068 of yacc.c  */
#line 182 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


