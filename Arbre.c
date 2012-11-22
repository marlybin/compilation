#include <stdio.h>
#include <stdlib.h>

#include "Arbre.h"
#include "TableLexico.h"


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
 * Crée un nouveau noeud qui a une valeur char *
 */
noeud * creerNoeud_s( int type, char * valeur ){

	valeurNoeud val ;
	val.string = valeur;
	return creerNoeud_bis( type,val );

}

/*
 * Crée un nouveau noeud qui a une valeur char *
 */
noeud * creerNoeud_c( int type, char valeur ){

	valeurNoeud val ;
	val.caractere = valeur;
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
noeud * ajouterFils( noeud * origin, noeud * fils ){

	origin->fils = fils;
	return origin;
}

/*
 * Ajoute un frere arg2 au noeud arg1
 */
noeud * ajouterFrere( noeud * origin, noeud * frere ){

	origin->frere = frere;
	return origin;
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

			case T_VAR :
				printf(" VAR[%s] ",tblLex[abr->valeur.entier].lexeme);
			break;

			case T_MULT :
				printf(" MULT ");
			break;

			case T_DIV :
				printf(" DIV ");
			break;

			case T_PLUS :
				printf(" PLUS ");
			break;

			case T_MOINS :
				printf(" MOINS ");
			break;

			case T_APPEL :
				printf(" APPEL [%s]",tblLex[abr->valeur.entier].lexeme);
			break;

			case T_CONCAT :
				printf(" CONCAT ");
			break;

			case T_CHAINE :
				printf(" CHAINE [%s]",abr->valeur.string);
			break;

			case T_TANTQUE :
				printf(" TANTQUE ");
			break;

			case T_AND :
				printf(" AND ");
			break;

			case T_OR :
				printf(" OR ");
			break;

			case T_SUP :
				printf(" > ");
			break;

			case T_INF :
				printf(" < ");
			break;

			case T_SUP_EGAL:
				printf(" >= ");
			break;

			case T_INF_EGAL :
				printf(" <= ");
			break;

			case T_SI :
				printf(" SI ");
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



