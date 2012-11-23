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
int insererRegion(int taille, int nis, arbre *abr);

#endif
