#include <stdio.h>
#include <stdlib.h>
#include "TableDeclarations.h"

#define MAX 50

lgnDeclaration tblDeclaration[MAX + MAXD];
int i_debordement = MAX;

//intialisation de la table de declaration
void initTblDeclaration(){

	int i;
	for(i=0; i<=3;i++){

		tblDeclaration[i].nature = TYPE_B;
		tblDeclaration[i].suivant = -1;
		tblDeclaration[i].region = 1;
		tblDeclaration[i].description = i;
	}
	tblDeclaration[0].execution = sizeof(int);
	tblDeclaration[1].execution = sizeof(double);
	tblDeclaration[2].execution = sizeof(char);
	tblDeclaration[3].execution = sizeof(char);
}
// Affichage de la table de declaration
void afficherTblDeclaration(){

	int i;
	printf("\n\n\tTable des déclarations\n\nNLex\tsuiv\tnat\tregion\tdesc\texec\n");
	for( i=0;i<MAX;i++ ){
		printf("%i \t%i \t%i \t%i \t%i \t%i \n",i,
		tblDeclaration[i].suivant,
		tblDeclaration[i].nature,
		tblDeclaration[i].region,
		tblDeclaration[i].description,
		tblDeclaration[i].execution
		);
	}
	printf("--------------------------------------------\n");
	for( i=MAX;i<MAX+MAXD;i++ ){
		printf("%i \t%i \t%i \t%i \t%i \t%i \n",i,
		tblDeclaration[i].suivant,
		tblDeclaration[i].nature,
		tblDeclaration[i].region,
		tblDeclaration[i].description,
		tblDeclaration[i].execution
		);
	}
}

//inserer une ligne dans notre tableau de declaration
int insererDeclaration( int numLexico,int nature,int region, int desciption,int execution ){

	if( tblDeclaration[numLexico].suivant == 0 ) {

		tblDeclaration[numLexico].suivant = -1 ;
		tblDeclaration[numLexico].nature = nature;
		tblDeclaration[numLexico].region = region;
		tblDeclaration[numLexico].description = desciption ;
		tblDeclaration[numLexico].execution = execution ;
	}
	else{

		tblDeclaration[i_debordement].suivant = -1;
		tblDeclaration[i_debordement].nature = nature;
		tblDeclaration[i_debordement].region = region;
		tblDeclaration[i_debordement].description = desciption ;
		tblDeclaration[i_debordement].execution = execution ;

		int i = numLexico;
		while( tblDeclaration[i].suivant !=-1 ){

			i = tblDeclaration[i].suivant;
		}

		tblDeclaration[i].suivant = i_debordement;

		i_debordement++;
	}

	return 0;
}


