#include <stdio.h>
#include <stdlib.h>


typedef struct Pile Pile;

struct Pile{
    int info;
    struct Pile* pre;
    struct Pile* suiv;
};

Pile* Table_region;
//Pile* Table_inter;

Pile *vide(); // cree une pile vide
void empile(Pile* d, int n); //empile a->info dans la pile d
Pile* depile(Pile * p); //depile p jusqu'au dernier element de la pile
void affiche(Pile* p); //affiche les elements de la pile a partir de l'element p
