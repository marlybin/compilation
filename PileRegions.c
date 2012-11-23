#include <stdio.h>
#include <stdlib.h>
#include "PileRegions.h"

int indice=0;


void initPileRegion(){
    indice = 1;
    PileRegion[0]=0;
}

void empileRegion(int n){
    PileRegion[indice] = n;
    indice++;

}

void depileRegion(){
    if(PileRegion != NULL)
        indice--;

}

int topRegion(){
    if(PileRegion == NULL)
        return -1;
    else 
        return PileRegion[indice-1];

}

/*
 * Récupère l'élément n de la pile, en partant du sommet
 * return -1 si on a atteint la base de la pile
 */
int getRegion( int n ){

    if( n>indice ) return -1;
    if( n<0 ) return -1;

    return PileRegion[indice-n-1];
}

void affichePileRegion(){
    int i;
    for( i=0;i<indice;i++ ){
        printf("%i | ",PileRegion[i]);
    }

}