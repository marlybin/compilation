#include <stdio.h>
#include <string.h>
#include "Table_des_type.h"

int TableRepType[MAXA];
int indiceTblRep=4;

// Initialise la table
void initTableRepType(){

	TableRepType[0]=0;	// int
	TableRepType[1]=1;	// real
	TableRepType[2]=2;	// boolean
	TableRepType[3]=3;	// char
}

// Ajoute une déclaration de fonction à la table de représentation des types
int ajoute_Func(int type_retour, int nbparam,int* tab){

	int i,place=nbparam*2;
	int debut = indiceTblRep;

	TableRepType[indiceTblRep++]=type_retour;
	TableRepType[indiceTblRep++]=nbparam;

	for(i=0;i<place;i++){
		TableRepType[indiceTblRep++]=tab[i];
	}

	return debut;
}

// Ajoute une déclaration de procédure à la table de représentation des types
int ajoute_Proc(int nbparam, int * tab){

	int i,debut = indiceTblRep;

	TableRepType[indiceTblRep++]=nbparam;
	for(i=0;i<nbparam*2;i++){
		TableRepType[indiceTblRep++]=tab[i];
	}
	return debut;
}

// Ajoute une déclaration de structure à la table de représentation des types
int ajoute_Struct(int nbChamps, int * champs){

	int i,debut = indiceTblRep;

	TableRepType[indiceTblRep++]=nbChamps;
	for(i=0;i<nbChamps*3;i++){
		TableRepType[indiceTblRep++]=champs[i];
	}
	return debut;
	
}

// Ajoute une déclaration de tableau à la table de représentation des types
int ajoute_Tab(int dim, int type, int * dims){

	int i,debut = indiceTblRep;
	TableRepType[indiceTblRep++]=dim;
	TableRepType[indiceTblRep++]=type;
	for(i=0;i<dim*2;i++){
		TableRepType[indiceTblRep++]=dims[i];
	}
	return debut;

}

// Affichage
void afficher_Tbl_Type(){


	printf("\n\n     Table de représentation des types\n\n");
	int i;
	for( i=0; i<indiceTblRep; i++){
		printf(" %d |",TableRepType[i]);
	}
	printf("\n\n");
}
