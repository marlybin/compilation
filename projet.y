%{

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
%}

%union{ double dval; int ival; char * sval; char cval; struct noeud * noeudval; }

%token PROG DEBUT FIN FINSI
%token PROCEDURE FONCTION EST
%token ET OU NON VRAI FAUX
%token OPAFF INF INF_EGAL SUP SUP_EGAL EGAL DIFF
%token POINT_VIRGULE DEUX_POINTS POINT VIRGULE  GUILLEMET POINT_POINT
%token PLUS MOINS DIV MULT 
%token ENTIER REEL 
%token CARACTERE CHAINE  BOOLEEN
%token TABLEAU DE STRUCT FSTRUCT VARIABLE TYPE
%token  FORMAT_ENTIER FORMAT_REELLE FORMAT_CARACTERE  FORMAT_CHAINE
%token CROCHET_OUVRANT CROCHET_FERMANT PARENTHESE_OUVRANTE PARENTHESE_FERMANTE
%token SI ALORS SINON TANT_QUE FAIRE END_TANT_QUE
%token RETOURNE  VIDE 

%token <ival> CSTE_ENTIERE IDF
%token <sval> CSTE_CHAINE 
%token <cval> CSTE_CHAR 
%token <dval> CSTE_REEL 

%type <ival> liste_param liste_parametres type_simple une_dimension dimension nom_type liste_dimensions liste_champs un_champ suite_declaration_variable 
%type <noeudval> liste_instructions suite_liste_inst instruction corps programme condition tant_que liste_arguments liste_args un_arg resultat_retourne
%type <noeudval> affectation expression expression_arith exp1 exp2 expression_bool eb1 eb2 appel concat expression_comp liste_champs_var liste_ind variable

%%

programme :
		PROG  corps { $$ = $2 ; afficherArbre($$); }
		;

corps  :
													{ $$ = creerNoeud( T_VIDE ); }
		| liste_declarations liste_instructions		{ $$ = $2; }
		| liste_instructions						{ $$ = $1; }
		;

liste_declarations :
		declaration POINT_VIRGULE
		|   declaration POINT_VIRGULE liste_declarations
		;

liste_instructions :
		DEBUT suite_liste_inst FIN { $$ = $2; }
		;
	
suite_liste_inst :
		instruction POINT_VIRGULE						{ $$ = $1; }
		| instruction POINT_VIRGULE suite_liste_inst 	{ $$ = ajouterFrere( $1,$3 ); }
		;

/* PARTIE DES DECLARATIONS */

declaration :
		declaration_type
	    | declaration_variable
	    | declaration_procedure
	    | declaration_fonction
	    ;
			
declaration_type :
		TYPE IDF DEUX_POINTS STRUCT liste_champs FSTRUCT { 
			//int execution = ??;
			int description = ajoute_Struct($5, getBuf()); counter=0;buffer_clear();
			insererDeclaration( $2,TYPE_S,0,description,0);
			}
       | TYPE IDF DEUX_POINTS TABLEAU dimension DE nom_type {
			int description = ajoute_Tab($5,$7, getBuf());buffer_clear();
			insererDeclaration( $2,TYPE_T,0,description,0 );
			}
       ;
						
dimension :
		CROCHET_OUVRANT liste_dimensions CROCHET_FERMANT{$$=$2;}
		;

liste_dimensions :
		une_dimension	{$$=$1;}
		| liste_dimensions VIRGULE une_dimension	{$$=$1+1;}
		;
				
une_dimension : 
		CSTE_ENTIERE POINT_POINT  CSTE_ENTIERE	{buffer_ajoute2($1,$3);}
		;

liste_champs :
		un_champ POINT_VIRGULE	{$$=1;}
	    | un_champ POINT_VIRGULE  liste_champs {$$=$3+1;}
	    ;

un_champ :
		IDF DEUX_POINTS nom_type	{ $1; buffer_ajoute3($1,$3,counter++); }
		;

nom_type :
		type_simple { $$=$1; }
		| IDF { $$=$1; }
		;
		
type_simple	:
		ENTIER			{ $$ = 0; }
		| REEL			{ $$ = 1; }
		| BOOLEEN		{ $$ = 2; }
		| CARACTERE		{ $$ = 3; }
		| CHAINE CROCHET_OUVRANT CSTE_ENTIERE CROCHET_FERMANT	{ $$ = 0; }
		;
			
declaration_variable : VARIABLE suite_declaration_variable
		     ;

suite_declaration_variable	:
		IDF DEUX_POINTS nom_type {
							$$ = $3;
							insererDeclaration( $1,VAR,0,$3,0 );
							}
		| IDF VIRGULE suite_declaration_variable {
							$$ = $3;
							insererDeclaration( $1,VAR,0,$3,0 );
							}
		;

declaration_procedure :
		PROCEDURE IDF liste_parametres {
			int description = ajoute_Proc($3, getBuf()); buffer_clear();
			insererDeclaration( $2,PROC,0,description,0 ); 
			} corps
		;
			
declaration_fonction :
		FONCTION IDF liste_parametres RETOURNE type_simple {
			int description = ajoute_Func($5, $3,getBuf()); buffer_clear();
			insererDeclaration( $2,FUNC,0,description,0 ); 
			} corps
		;

liste_parametres :
		PARENTHESE_OUVRANTE liste_param PARENTHESE_FERMANTE{$$=$2;}
		| {$$=0;}
		;

liste_param :
		un_param {$$=1;}
	    | liste_param   VIRGULE  un_param{$$=$1+1;}
	    ;

un_param :
		IDF DEUX_POINTS type_simple { buffer_ajoute2($1,$3);}
	 ;

/* PARTIE DES INSTRUCTIONS */

instruction	:
		affectation		{$$ = $1;}
	   	| condition		{$$ = $1;}
	   	| tant_que		{$$ = $1;}
	   	| appel			{$$ = $1;}
	   	| VIDE			{$$ = creerNoeud( T_VIDE );}
	   	| RETOURNE resultat_retourne		{$$ = ajouterFils(creerNoeud( T_RETOURNE ),$2);}
	  	;

resultat_retourne 	: 
		/* VIDE */ 		{ $$ = creerNoeud( T_VIDE ); }
		| expression 	{ $$ = $1; }
		;

appel	:
		IDF liste_arguments { $$ = ajouterFils(creerNoeud_i( T_APPEL,$1 ),$2); }
		;
	
liste_arguments	:
		PARENTHESE_OUVRANTE liste_args PARENTHESE_FERMANTE	{ $$ = $2; }
		;
				
liste_args : 
		| un_arg						{ $$ = $1; }
		| un_arg VIRGULE liste_args		{ $$ = ajouterFrere( $1,$3 ); }
		;
			
un_arg :
		expression 	{ $$ = $1; }
		;
		
condition :
		SI expression_bool ALORS suite_liste_inst SINON suite_liste_inst FINSI	{ $$ = ajouterFils(creerNoeud(T_SI), ajouterFrere( $2,ajouterFrere( $4,$6 ) ) ); }
		| SI expression_bool ALORS suite_liste_inst FINSI						{ $$ = ajouterFils(creerNoeud(T_SI), ajouterFrere( $2,$4)); }
		;

tant_que :
		TANT_QUE expression_bool FAIRE suite_liste_inst END_TANT_QUE			{ $$ = ajouterFils(creerNoeud(T_TANTQUE),ajouterFrere( $2, $4 )); }
		;
			
affectation	:
		variable OPAFF expression { $$ =  ajouterFils(creerNoeud( T_AFFECT ),ajouterFrere($1, $3 )); }
		;

/* CECI EST A VERIFIER */
variable: IDF CROCHET_OUVRANT liste_ind CROCHET_FERMANT liste_champs_var { $$ = creerNoeud_i( T_VAR,$1 ); }
		| IDF liste_champs_var	{ $$ = creerNoeud_i( T_VAR,$1 ); }
		;

liste_ind	: expression_arith 					//{ $$ = creerNoeud_i( T_INDICE,$1 ); }
	  	| expression_arith VIRGULE liste_ind	//{ $$ = ajouterFrere( creerNoeud_i( T_INDICE,$1 ),$3 ); }
	  	;
	
liste_champs_var :
		/* Vide*/			//{ $$ = NULL; }
		| POINT variable 	//{ $$ = ajouterFils( creerNoeud( T_NSTR ),$2 ); }
		;


expression	:
		expression_arith	{ $$ = $1; }
		| expression_bool	{ $$ = $1; }
		| CSTE_CHAR			{ $$ = creerNoeud_c( T_CHAR,$1 ); }
		| concat			{ $$ = $1; }
		;
			
concat :
		CSTE_CHAINE 				{ $$ = creerNoeud_s( T_CHAINE,$1 ); }
		| concat PLUS CSTE_CHAINE 	{ $$ = ajouterFils( creerNoeud( T_CONCAT ),ajouterFrere( $1,creerNoeud_s( T_CHAINE, $3) )); }
		;

expression_arith :
		expression_arith PLUS exp1			{ $$ = ajouterFils( creerNoeud( T_PLUS ), ajouterFrere( $1,$3 ) ); }
		| expression_arith MOINS exp1  		{ $$ = ajouterFils( creerNoeud( T_MOINS ), ajouterFrere( $1,$3 ) ); }
		| exp1 								{ $$ = $1; }
		;
 
exp1:
		exp1 MULT exp2			{ $$ = ajouterFils(creerNoeud( T_MULT ),ajouterFrere( $1 , $3 )); }
		| exp1 DIV exp2			{ $$ =  ajouterFils(creerNoeud( T_DIV ),ajouterFrere( $1 , $3 )); }
		| exp2 					{ $$ = $1; }
		;

exp2:
		PARENTHESE_OUVRANTE expression_arith PARENTHESE_FERMANTE	{ $$ =  $2 ; }
		| variable 				{ $$ = $1; }
		| MOINS CSTE_ENTIERE	{ $$ = creerNoeud_i( T_CST_ENTIER,-1*$2 ); }
		| MOINS CSTE_REEL 		{ $$ = creerNoeud_f( T_CST_REEL, -1*$2); }
		| CSTE_ENTIERE			{ $$ = creerNoeud_i( T_CST_ENTIER,$1 ); }
		| CSTE_REEL 			{ $$ = creerNoeud_f( T_CST_REEL,$1 ); }
		| appel 				{ $$ = $1; }
		;


expression_bool	:
		expression_bool ET eb1			 	{ $$ =  ajouterFils(creerNoeud( T_AND ),ajouterFrere( $1 , $3 ));  }
		| expression_bool OU eb1   			{ $$ =  ajouterFils(creerNoeud( T_OR ),ajouterFrere( $1 , $3 ));  }
		| eb1 								{ $$ = $1; }
		;

eb1	:
		NON eb2 		{ $$ = ajouterFils( creerNoeud( T_NOT ),$2 );  }
		| eb2 			{ $$ = $1; }
		;

eb2	:
		PARENTHESE_OUVRANTE expression_bool PARENTHESE_FERMANTE { $$ = $2; }
		| VRAI 		{ $$ = creerNoeud_i( T_BOOL,1 ); }
		| FAUX 		{ $$ = creerNoeud_i( T_BOOL,0 ); }
		| expression_comp	{ $$ = $1; }
		;


expression_comp	:
		expression_arith INF expression_arith			{ $$ = ajouterFils(creerNoeud( T_INF ),ajouterFrere( $1 , $3 )); }
		| expression_arith INF_EGAL expression_arith	{ $$ = ajouterFils(creerNoeud( T_INF_EGAL ),ajouterFrere( $1 , $3 )); }
		| expression_arith SUP expression_arith			{ $$ = ajouterFils(creerNoeud( T_SUP ),ajouterFrere( $1 , $3 )); }
		| expression_arith SUP_EGAL expression_arith	{ $$ = ajouterFils(creerNoeud( T_SUP_EGAL ),ajouterFrere( $1 , $3 )); }
        | expression_arith EGAL expression_arith 		{ $$ = ajouterFils(creerNoeud( T_EGAL ),ajouterFrere( $1 , $3 )); }
        ;

%%

int main(int argc, char* argv[]){

	initTblLexeme();
	initTblDeclaration();
	initTableRepType();
	initRegions();
	buffer_clear();
	
	yyparse(); // Lancement de lex/yacc

	printf("\n\n");

	//afficheTableLexico();
	//afficher_Tbl_Type();
	//afficherTblDeclaration();
	//afficherTblRegions();

	return 0;
}