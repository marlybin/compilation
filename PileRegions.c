#include <stdio.h>
#include <stdlib.h>
#include "PileRegions.h"

Pile* vide(){
Pile* p;
p = malloc(sizeof(Pile));
p->suiv = NULL;
p->pre = NULL;
return p;
}

void empile(Pile *p, int n){
    if(p->pre == NULL){
    p->pre = vide();
    int rep = p->info;
    p->pre->info = rep;
    p->info = n;
    }
    else {
    Pile* pp = vide();
    pp->info = n;
    int rep = n;
    pp->info = p->info;
    p->info = rep;
    pp->pre = p->pre;
    p->pre = pp;
    }
}


Pile* depile(Pile* p){
if(p->pre != NULL){
 return p->pre;
}
else return NULL;
}

void affiche(Pile* p){
    while(p->pre != NULL){
    printf("| %d |", p->info);
    p = depile(p);
    }

}

/*int main(int argc,char* argv[]){
Pile* region = vide();
Pile* pp = vide();
Pile* po = vide();
Pile* pl = vide();
pl->info = 30;
pp->info = 20;
po->info = 10;
region->info = 00;

empile(region, 88);
empile(region, 77);
//affiche(region);
empile(region, 99);
empile( region, 690);empile( region, 1);empile( region, 2);
empile( region, 3);empile( region, 690);
affiche(region);

free(region);
free(pp);
free(po);

return 0;
}*/