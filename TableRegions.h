#ifndef REGION_H
#define REGION_H

#define MAXR 5

#include "Arbre.h"


typedef struct lignRegion{
    int taille;
    int NIS;
    arbre* tree;
}lignRegion;

lignRegion TblRegions[MAXR];

void initRegions();
void afficherTblRegions();
int insererRegion(int taille, int nis, arbre *abr);

#endif
