#include <stdio.h>
#include <stdlib.h>
#include "TableRegions.h"
#include "Arbre.h"


int compteur=1;

void initRegions(){
	int i;
	//compteur = (int)malloc(sizeof(int));
	//compteur = 0;
	for(i = 0; i< MAXR; i++){
	    TblRegions[i].taille = 0;
	    TblRegions[i].NIS = 0;
	    TblRegions[i].tree =NULL;

	    }
}

int insererRegion(int taille, int nis, arbre *abr){

	TblRegions[ compteur ].taille = taille;
	TblRegions[ compteur ].NIS = nis;
	TblRegions[ compteur ].tree = abr;

	return compteur++;

/*
	compteur++;
	int i = 0,true = 1;
    while(true){

        if(TblRegions[i].taille == 0){

	      	TblRegions[i].taille = taille;
	        TblRegions[i].NIS = nis;
	        TblRegions[i].tree = arb;
	        true = 0;
        }
        else i++;

    }
	return compteur-1;
	*/
}

int tailleRegion (int numregion){

	return  TblRegions[numregion].taille;

}

void afficherTblRegions(){

	int i;
	printf("\n");
	printf("\tTable des regions\n");
	printf("\n");
	printf("   i     Taille    NIS\n");
	printf("___________________________\n");
	for(i=0; i<compteur; i++){

		printf("    %d   |  %d   ||   %d   | ", i, TblRegions[i].taille, TblRegions[i].NIS);
		afficherArbre( TblRegions[i].tree );
		//display_tree(TblRegions[i].tree);
		printf("\n");
    }
}


/*int main(int argc, char* argv[]){

arbre *a;
arbre* t, *b, *c, *h, *g;
t = create_empty();
a = create_empty();b = create_empty();c = create_empty();

a = create_Node2(1, 80, 90);
b = create_Node2(8, 80, 90);
c = create_Node2(3, 80, 90);
t = create_Node(2, 87);
h = create_Node(6, 87);
g = create_Node(5, 87);
 concat_pereFils(a, b);
 concat_pereFils(b, t);
 concat_pereFrere(b, g);
 concat_pereFils(c, h);

concat_pereFrere(a, c);
 init_tab();
 int r = inserer_region(66, 88, g);
  r = inserer_region(5, 88, h);
  r = inserer_region(4, 88, c);
  r = inserer_region(3, 88, b);
  r = inserer_region(6, 88, a);

 display_tree(a);

affiche();
printf("il y a %d regions ok", r);
return 0;

}*/
