#include <stdio.h>
#include <stdlib.h>
#include "Pile_regions.h"
#define MAXSTACK 50

int P[MAXSTACK];
int i_P =0;

void empile( int val ){
	P[i_P] = val;
	i_P++;
}

void depile(){

	if( i_P>0 ) i_P--;
}

int top(){

	if( i_P==0 ) return -1;
	return P[i_P-1];
}

void afficher( ){

	int i;
	for( i=0;i<i_P;i++ ){
		printf("%i | ",P[i]);
	}
}

