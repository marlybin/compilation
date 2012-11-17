#include <stdio.h>
#include "Arbre.h"

int main( int argc, char * argv[] ){

	noeud * b = creerNoeud_f( T_CST_REEL,4.5456456 );
	noeud * c = creerNoeud_i( T_CST_ENTIER,85);
	noeud * d = creerNoeud_i( T_CST_ENTIER,10 );


	noeud * a = creerNoeud( T_AFFECT );
	ajouterFrere( a,b );
	ajouterFils( a,c );
	ajouterFils( a,d );


	afficherArbre(a);
	printf("\n\n");

	return 0;
}
