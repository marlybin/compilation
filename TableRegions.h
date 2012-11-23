#ifndef REGION_H
#define REGION_H

#include "Arbre.h"


typedef struct lignRegion{
    int taille;
    int NIS;
    arbre* tree;
}lignRegion;


void initRegions();
void afficherTblRegions();
<<<<<<< HEAD
int insererRegion(int taille, int nis, arbre *abr);

=======
int insererRegion(int taille, int nis, arbre *arb);
>>>>>>> 1eb6962c7f26755c779a8a421b48ea3e74592498
#endif
