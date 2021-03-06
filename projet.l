%{
int num_ligne = 1;
#include<stdio.h>
#include "y.tab.h"
#include "TableLexico.h"

#include <string.h>

char * p;

%}

%%

"program"		{return PROG;}
"begin"			{return DEBUT;}
"end"			{return FIN;}
"function"		{return FONCTION;}
"procedure"		{return PROCEDURE;}
"return" 		{return RETOURNE;}
"if"			{return SI;}
"then"			{return ALORS;}
"else"			{return SINON;}
"endif"			{return FINSI;}
"while"			{return TANT_QUE;}
"end loop"		{return END_TANT_QUE;}
"loop"			{return FAIRE;}
vide			{return VIDE;}
"record"		{return STRUCT;}
"end record"	{return FSTRUCT;}
array			{return TABLEAU;}
of				{return DE;}
"type"			{return TYPE;}
var				{return VARIABLE;}
"integer"		{return ENTIER;}
real			{return REEL;}
boolean 		{return BOOLEEN;}
char  	        {return CARACTERE;}
string			{return CHAINE;}
is				{return EST;}

\+				{return PLUS;}
\-				{return MOINS;}
\*				{return MULT;}
\/				{return DIV;}
\=				{return	EGAL;}

\(				{return PARENTHESE_OUVRANTE;}
\)				{return	PARENTHESE_FERMANTE;}
\[				{return	CROCHET_OUVRANT;}
\]				{return CROCHET_FERMANT;}

\.				{return POINT;}
\,				{return	VIRGULE;}
\;				{return POINT_VIRGULE;}
\:				{return	DEUX_POINTS;}
".."			{return	POINT_POINT;}
\"				{return GUILLEMET; }

true			{return(VRAI);}
false			{return(FAUX);}

\<				{return INF;}
\<=				{return	INF_EGAL;}
\>				{return	SUP;}
\>=				{return	SUP_EGAL;}

\<>				{return	DIFF;}
\:=				{return	OPAFF;}

or				{return OU;}
and				{return ET;}
not				{return NON;}

"%d"			{return(FORMAT_ENTIER);}
"%c"			{return(FORMAT_CARACTERE);}
"%f"			{return(FORMAT_REELLE);}
"%s"			{return(FORMAT_CHAINE);}

[a-zA-Z][a-zA-Z0-9]*		{
					yylval.ival = insererLexeme(yytext);
					return IDF;
				}
0|[1-9][0-9]*			{yylval.ival= atoi(yytext);return CSTE_ENTIERE;}
0|[1-9][0-9]*\.[0-9]+	{yylval.dval= atof(yytext);return CSTE_REEL;}
\'[a-zA-Z0-9]\'			{yylval.cval= atoi(yytext);return CSTE_CHAR; }
\"[^"]*\"			{
						yylval.sval = (char *) malloc( sizeof( yytext ) );
						strcpy( yylval.sval, yytext );
						return CSTE_CHAINE;
					}
[^\n\t ]			{yyerror("caractere interdit \n");}
.				;			
\n				{num_ligne++;}
\/\*(.|\n)*\*\/                 {;}



%%

int yyerror()
{

	printf("Erreur de syntaxe en ligne %d\n",num_ligne);
}