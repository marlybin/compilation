#ifndef ARBRE_H
#define ARBRE_H

#define T_TEST -1
#define T_CST_ENTIER 0
#define T_CST_REEL 1
#define T_AFFECT 2
#define T_VAR 3
#define T_EXP 4
#define T_AND 5
#define T_OR 6
#define T_NOT 7
#define T_BOOL 8
#define T_MULT 9
#define T_DIV 10
#define T_CHAINE 11

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

noeud * ajouterFils( noeud * origin, noeud * fils );
noeud * ajouterFrere( noeud * origin, noeud * frere );

noeud * creerNoeud( int type );
noeud * creerNoeud_i( int type, int valeur );
noeud * creerNoeud_f( int type, float valeur );

void afficherArbre( arbre * abr);

#endif
