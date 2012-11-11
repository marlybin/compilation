#ifndef REGION_H
#define REGION_H

typedef struct table_region{
	int taille;
	int niveau_imbric;
	//arbre* arbre_region;
}table_region;

int getTaille();
int ajouteRegion(int taille, arbre* arbre_region);
void afficheTableRegion();
int get_mon_num_region();

#endif
