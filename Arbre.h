#ifndef ARBRE_H
#define ARBRE_H

#define T_CST_ENTIER 0
#define T_CST_REEL 1
#define T_AFFECT 2

/*
 * Déclaration des structures
 */

typedef union valeurNoeud{

	int entier;
	double reel;
}valeurNoeud;

typedef struct noeud noeud;
struct noeud{

	int type;
	valeurNoeud valeur;
	noeud * fils;
	noeud * frere;

};
typedef noeud arbre;

/*
 * Prototypes
 */

void ajouterFils( noeud * origin, noeud * fils );
void ajouterFrere( noeud * origin, noeud * frere );

noeud * creerNoeud( int type );
noeud * creerNoeud_i( int type, int valeur );
noeud * creerNoeud_f( int type, float valeur );

void afficherArbre( arbre * abr);

#endif
