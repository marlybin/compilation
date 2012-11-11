%{
#include <stdio.h>
#include <string.h>
#include "Table_lexico.h"
#include "Table_des_type.h"
#include "buffer.h"


#include "Pile_regions.h"
#include "Table_declarations.h"


int yylex (void);
int yyerror (char const * s );
extern int num_ligne;
extern char* yytext;

int counter = 0;

%}

%union{ double dval; int ival; char * sval; char cval; }

%token PROG DEBUT FIN 
%token PROCEDURE FONCTION EST
%token ET OU NON VRAI FAUX
%token OPAFF INF INF_EGAL SUP SUP_EGAL EGAL DIFF
%token POINT_VIRGULE DEUX_POINTS POINT VIRGULE  GUILLEMET POINT_POINT
%token PLUS MOINS DIV MULT 
%token <ival>CSTE_ENTIERE
%token CSTE_CHAINE CSTE_CHAR 
%token CSTE_REEL 
%token ENTIER 
%token REEL 
%token CARACTERE CHAINE  BOOLEEN
%token <sval> IDF
%token TABLEAU DE STRUCT FSTRUCT VARIABLE TYPE
%token  FORMAT_ENTIER FORMAT_REELLE FORMAT_CARACTERE  FORMAT_CHAINE
%token CROCHET_OUVRANT CROCHET_FERMANT PARENTHESE_OUVRANTE PARENTHESE_FERMANTE
%token SI ALORS SINON TANT_QUE FAIRE END_TANT_QUE
%token LIRE ECRIRE  RETOURNE  VIDE 

%type <ival> liste_param liste_parametres type_simple une_dimension dimension nom_type liste_dimensions liste_champs un_champ suite_declaration_variable
%%

programme : PROG  corps //{$2= NIS; Pile* p = vide(); p->info = $2; NIS++;}
	  ;

corps  :
	|liste_declarations liste_instructions
	| liste_instructions
	;

liste_declarations : declaration POINT_VIRGULE
		   |   declaration POINT_VIRGULE liste_declarations
		   ;

liste_instructions : DEBUT suite_liste_inst FIN
		   ;
	
suite_liste_inst : instruction POINT_VIRGULE
		 | instruction POINT_VIRGULE suite_liste_inst 
		 ;

declaration : declaration_type
	    | declaration_variable
	    | declaration_procedure
	    | declaration_fonction
	    ;
			
declaration_type : TYPE IDF DEUX_POINTS STRUCT liste_champs FSTRUCT { 
					int execution = ??;
					int description = ajoute_Struct($5, getBuf()); counter=0;buffer_clear();
					insererDeclaration( insererLexeme($2),TYPE_S,0,description,execution );
					}
		       | TYPE IDF DEUX_POINTS TABLEAU dimension DE nom_type {
					int description = ajoute_Tab($5,$7, getBuf());buffer_clear();
					insererDeclaration( insererLexeme($2),TYPE_T,0,description,0 );
					}
		       ;
						
dimension : CROCHET_OUVRANT liste_dimensions CROCHET_FERMANT{$$=$2;}
	  ;
			
liste_dimensions : une_dimension	{$$=$1;}
		 | liste_dimensions VIRGULE une_dimension	{$$=$1+1;}
		 ;
				
une_dimension :  CSTE_ENTIERE POINT_POINT  CSTE_ENTIERE	{buffer_ajoute2($1,$3);}
		;

liste_champs : un_champ POINT_VIRGULE	{$$=1;}
	     | un_champ POINT_VIRGULE  liste_champs {$$=$3+1;}
	     ;

un_champ : IDF DEUX_POINTS nom_type	{ insererLexeme($1); buffer_ajoute3(insererLexeme($1),$3,counter++); }
		;

nom_type : type_simple { $$=$1; }
		| IDF { $$=chercherLexeme($1); }
		;
		
type_simple	: ENTIER	{ $$ = 0; }
		| REEL		{ $$ = 1; }
		| BOOLEEN	{ $$ = 2; }
		| CARACTERE	{ $$ = 3; }
		| CHAINE CROCHET_OUVRANT CSTE_ENTIERE CROCHET_FERMANT	{ $$ = 0; }
		;
			
declaration_variable : VARIABLE suite_declaration_variable
		     ;

suite_declaration_variable	: IDF DEUX_POINTS nom_type {
							$$ = $3;
							insererDeclaration( insererLexeme($1),VAR,0,$3,0 );
							}
				| IDF VIRGULE suite_declaration_variable {
							$$ = $3;
							insererDeclaration( insererLexeme($1),VAR,0,$3,0 );
							}
				;

declaration_procedure : PROCEDURE IDF liste_parametres {
							int description = ajoute_Proc($3, getBuf()); buffer_clear();
							insererDeclaration( insererLexeme($2),PROC,0,description,0 ); 
							} corps
			;
			
declaration_fonction : FONCTION IDF liste_parametres RETOURNE type_simple {
							int description = ajoute_Func($5, $3,getBuf()); buffer_clear();
							insererDeclaration( insererLexeme($2),FUNC,0,description,0 ); 
							} corps
			;
		
liste_parametres : PARENTHESE_OUVRANTE liste_param PARENTHESE_FERMANTE{$$=$2;}
		 | {$$=0;}
		 ;

liste_param : un_param {$$=1;}
	    | liste_param   VIRGULE  un_param{$$=$1+1;}
	    ;

un_param : IDF DEUX_POINTS type_simple { buffer_ajoute2(insererLexeme($1),$3);}
	 ;

instruction	: affectation
	   	| condition
	   	| tant_que
	   	| appel
	   	| lire
	   	| ecrire
	   	| VIDE
	   	| RETOURNE resultat_retourne
	  	;

resultat_retourne 	: 
			| expression
			;

appel	: IDF liste_arguments 
	
	;
	
liste_arguments	: PARENTHESE_OUVRANTE liste_args PARENTHESE_FERMANTE
		;
				
liste_args : 
	   |un_arg
	   | liste_args VIRGULE un_arg
	   		
	   ;
			
un_arg : expression
		;
		
condition : SI expression_bool ALORS liste_instructions SINON liste_instructions
			| SI expression_bool ALORS liste_instructions
			;
tant_que	: TANT_QUE expression_bool FAIRE liste_instructions END_TANT_QUE
		;
			
affectation	: variable OPAFF expression
		;
			
lire : LIRE PARENTHESE_OUVRANTE liste_variables PARENTHESE_FERMANTE
	;
	
ecrire	: ECRIRE PARENTHESE_OUVRANTE GUILLEMET ecrit GUILLEMET suite_ecriture PARENTHESE_FERMANTE
	;

ecrit	: 
	| format ecrit 
	| CHAINE ecrit 
	;

format	: FORMAT_ENTIER
        | FORMAT_REELLE
        | FORMAT_CARACTERE 
        | FORMAT_CHAINE
        ;



suite_ecriture : 
	       | VIRGULE variable suite_ecriture
	       ;
				
liste_variables	:
		| variable 
		| liste_variables VIRGULE variable
		;
	
variable	:IDF CROCHET_OUVRANT liste_ind CROCHET_FERMANT liste_champs_var 
		| IDF liste_champs_var
		;

liste_ind	: un_indice 
	  	| liste_ind  VIRGULE  un_indice
	  	;
	
liste_champs_var	:
			| POINT variable
			;

un_indice	: expression_arith
		;

expression		: expression_arith 
			| expression_bool	 
			| CSTE_CHAR
			| concat
			;
			
concat			: CSTE_CHAINE
			| concat PLUS CSTE_CHAINE
			;

expression_arith : expression_arith PLUS exp1
		 | expression_arith MOINS exp1 
	     	 | exp1 
		 ;
 
exp1	: exp1 MULT exp2
	| exp1 DIV exp2
	| exp2 
	;

exp2	: PARENTHESE_OUVRANTE expression_arith PARENTHESE_FERMANTE
	| variable 		
	| MOINS CSTE_ENTIERE 
	| MOINS CSTE_REEL 
	| CSTE_ENTIERE 
	| CSTE_REEL 
	| appel 
        ;


expression_bool	: expression_bool ET eb1 
		| expression_bool OU eb1  
		| eb1 
		;

eb1	: NON eb2 
	| eb2 
	;

eb2	: PARENTHESE_OUVRANTE expression_bool PARENTHESE_FERMANTE 
	| VRAI 
	| FAUX 
	| expression_comp
	;


expression_comp	: expression_arith INF expression_arith
		| expression_arith INF_EGAL expression_arith
		| expression_arith SUP expression_arith
		| expression_arith SUP_EGAL expression_arith
                | expression_arith EGAL expression_arith 
           	;
%%
int main(int argc, char* argv[]){

	initTblLexeme();
	initTblDeclaration();
	initTableRepType();
	buffer_clear();
	
	yyparse(); // Lancement de lex/yacc

	afficheTableLexico();
	afficher_Tbl_Type();
	afficherTblDeclaration();

	return 0;
}





						
					
