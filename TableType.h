#ifndef TABLE_REPRESENTATION_H
#define TABLE_REPRESENTATION_H
#define MAXA 50

// Initialisation du tableau
void initTableRepType();

// Affichage de la table
void afficher_Tbl_Type();


// Ajoute une fonction
int ajoute_Func(int type_retour, int nbparam, int * tab);

// Ajoute une procédure
int ajoute_Proc(int nbparam, int * tab);

// Ajoute une structure
int ajoute_Struct(int nbChamps, int * champs);

// Ajoute un tableau
int ajoute_Tab(int dim, int type, int * dims);

#endif
