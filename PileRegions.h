#ifndef PILEREGIONS_H
#define PILEREGIONS_H

#define MAXREGION 20

int PileRegion[MAXREGION];

void 	empileRegion(int n);
void 	depileRegion();
int 	topRegion();
int 	getRegion(int n);

void initPileRegion();

void affichePileRegion();

#endif