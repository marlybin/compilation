#ifndef PILEREGIONS_H
#define PILEREGIONS_H


typedef struct Pile Pile;

struct Pile{
    int info;
    struct Pile* precedent;
    struct Pile* suivant;
};

Pile* Table_region;
//Pile* Table_inter;

// cree une pile vide
Pile *initPile(); 

//empile a->info dans la pile d
void empile(Pile* d, int n); 

//depile p jusqu'au dernier element de la pile
Pile* depile(Pile * p);

//affiche les elements de la pile a partir de l'element p
void affiche(Pile* p); 

#endif
