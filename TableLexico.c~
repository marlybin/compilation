#include <stdio.h>
#include <string.h>

#include "Table_lexico.h"

int i_tblLex = 0;

/***
 *
 * 
 *
 ***/
void initTblLexeme(){

	int i;
	// initialisation de la table lexicographique
	

	for(i=0;i<MAX;i++){
		
		tblLex[i].lexeme=NULL;
		tblLex[i].longeur=0;
		tblLex[i].suivant=-1;
	}
	// initialisation de la table hashage
	for(i=0;i<H_LEN;i++){
		TableHcode[i]=-1;
	}
	insererLexeme("int");
	insererLexeme("real");
	insererLexeme("boolean");
	insererLexeme("char");
}

/***
 *
 * 
 *
 ***/
int calculHCode(char * lexeme){

	int i,h=0;

	for(i=0;i<strlen(lexeme);i++){
		h+=lexeme[i];
	}
	
	int hc=h% H_LEN;
	//printf("%i\n",hc);
	return hc;
}
/***
 *
 * 
 *
 ***/
int insererLexeme( char * l ){

	int hc = calculHCode( l );

	int taille = strlen(l);

	if( TableHcode[hc]==-1 ){
		//printf("Nouvelle Hcode\n");
		TableHcode[hc]=i_tblLex;
	}
	else{
		int i = TableHcode[hc];


		while( tblLex[i].suivant != -1 ){

			if( !strcmp(tblLex[i].lexeme,l) ) {
				return i;
			}

			i=tblLex[i].suivant;	
		}

		if( !strcmp(tblLex[i].lexeme,l) ) { return i; }
		tblLex[i].suivant 	= i_tblLex;
	}
	tblLex[i_tblLex].lexeme 	= strdup(l);
	tblLex[i_tblLex].longeur	= taille;
	tblLex[i_tblLex].suivant	=-1;


	i_tblLex++;
	return i_tblLex-1;	
}

/***
 *
 * 
 *
 ***/
int chercherLexeme(char* lexeme){

	//Recupere le numero lexicographique	
	int numLexico = TableHcode[calculHCode(lexeme)];
	if( !strcmp(tblLex[numLexico].lexeme,lexeme)){
		return numLexico;
	} 
	while( tblLex[numLexico].suivant!=-1 ){

		numLexico = tblLex[numLexico].suivant;
		if( !strcmp(tblLex[numLexico].lexeme,lexeme) ) return numLexico;
	}

	
	return -1 ;
}
void afficheTableLexico(){

	int i;
	printf("\n\n     Table lexicographique\n\n");
	printf(" _________________________________________________\n");
	printf(" | i | Taille \t|\tLexeme\t|\tSuivant\t |\n");
	printf(" |___|__________|_______________|________________|\n");

	for(i=0;i<i_tblLex;i++){
		printf(" | %d |\t%d\t| \t%s\t|\t %d \t |\n",i,tblLex[i].longeur,tblLex[i].lexeme, tblLex[i].suivant );
	}
	printf(" |___|__________________________|________________|\n");
}
