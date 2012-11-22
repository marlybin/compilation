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
#define T_PLUS 12
#define T_MOINS 13
#define T_APPEL 14
#define T_CONCAT 15
#define T_CHAR 16

#define T_INF 17
#define T_INF_EGAL 18
#define T_SUP 19
#define T_SUP_EGAL 20
#define T_EGAL 21

#define T_VIDE 22

#define T_SI 23
#define T_TANTQUE 24

#define T_LIRE 25
#define T_ECRIRE 26
#define T_RETOURNE 27

#define T_ITBL 28
#define T_NSTR 29
#define T_INDICE 30


/*
 * Déclaration des structures
 */

typedef union valeurNoeud{

	int entier;
	double reel;
	char * string;
	char caractere;
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
noeud * creerNoeud_s( int type, char * valeur );
noeud * creerNoeud_c( int type, char valeur );


void afficherArbre( arbre * abr);

#endif
