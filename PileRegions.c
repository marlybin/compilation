#include <stdio.h>
#include <stdlib.h>
#include "PileRegions.h"

int indice=0;

void empileRegion(int n){
    PileRegion[indice] = n;
    indice++;

}

void depileRegion(){
    if(PileRegion != NULL)
        indice--;

}

int topRegion(){
    if(PileRegion != NULL) return -1;
    else 
        return PileRegion[indice];

}

void affichePileRegion(){
    int i;
    for( i=0;i<indice;i++ ){
        printf("%i | ",PileRegion[i]);
    }

}
