#ifndef PILEREGIONS_H
#define PILEREGIONS_H

#define MAXREGION 20

int PileRegion[MAXREGION];

void initPile();
void empile(int n);
void depile();
int top();

void affichePileRegion();

#endif
