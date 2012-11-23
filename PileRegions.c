#include <stdio.h>
#include <stdlib.h>
#include "PileRegions.h"

Pile* initPile(){
Pile* p;
p = malloc(sizeof(Pile));
p->suivant = NULL;
p->precedent = NULL;
return p;
}

void empile(Pile *p, int n){
    if(p->precedent == NULL){
    p->precedent =initPile();
    int rep = p->info;
    p->precedent->info = rep;
    p->info = n;
    }
    else {
    Pile* pp = initPile();
    pp->info = n;
    int rep = n;
    pp->info = p->info;
    p->info = rep;
    pp->precedent = p->precedent;
    p->precedent = pp;
    }
}


Pile* depile(Pile* p){
if(p->precedent != NULL){
 return p->precedent;
}
else return NULL;
}

void affiche(Pile* p){
  /*  
    printf("\n\n\tPile des Regions\n");
    while(p->precedent != NULL){
    printf("| %d |", p->info);
    p = depile(p);

    }
    printf("\n\n");
    */
}

