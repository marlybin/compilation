#include <stdio.h>
#include <stdlib.h>

#include "Arbre.h"

noeud * creerNoeud_bis( int type, valeurNoeud valeur );

/*
 * Crée un nouveau noeud sans valeur
 */
noeud * creerNoeud( int type ){

	valeurNoeud val ;
	return creerNoeud_bis( type,val );
}

/*
 * Crée un nouveau noeud qui a une valeur entière
 */
noeud * creerNoeud_i( int type, int valeur ){

	valeurNoeud val ;
	val.entier = valeur;
	return creerNoeud_bis( type,val );
}

/*
 * Crée un nouveau noeud qui a une valeur float
 */
noeud * creerNoeud_f( int type, float valeur ){

	valeurNoeud val ;
	val.reel = valeur;
	return creerNoeud_bis( type,val );
}

/*
 * Crée un nouveau noeud avec son type et sa valeur
 */
noeud * creerNoeud_bis( int type, valeurNoeud valeur ){

	noeud * noe = (noeud *) malloc( sizeof(arbre) );

	noe->type = type;
	noe->valeur = valeur;
	noe->fils = NULL;
	noe->frere = NULL;

	return noe;
}

/*
 * Ajoute un fils arg2 au noeud arg1
 */
void ajouterFils( noeud * origin, noeud * fils ){

	origin->fils = fils;
}

/*
 * Ajoute un frere arg2 au noeud arg1
 */
void ajouterFrere( noeud * origin, noeud * frere ){

	origin->frere = frere;
}

/*
 * Affiche un arbre en ligne
 */
void afficherArbre( arbre * abr ){

	printf("(");
	while( abr != NULL ){

		switch( abr->type ){

			case T_CST_ENTIER :
				printf(" CST-INT=%i ",abr->valeur.entier);
			break;

			case T_CST_REEL :
				printf(" CST-REEL=%f ",abr->valeur.reel);
			break;

			case T_AFFECT :
				printf(" AFFECT ");
			break;
		}

		if( abr->fils!=NULL ){
			afficherArbre( abr->fils );
		}

		abr = abr->frere;
		if( abr!=NULL ) printf(",");
	}
	printf(")");
}



