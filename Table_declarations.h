#ifndef DECLARATION_H
#define DECLARATION_H

#define TYPE_B 1
#define TYPE_T 2
#define TYPE_S 3
#define VAR 4
#define PROC 5
#define FUNC 6
#define PARAM 7

#define MAXD 20

typedef struct lgnDeclaration_s {

	int nature;
	int suivant;
	int region;
	int description;
	int execution;
} lgnDeclaration;

void initTblDeclaration();
void afficherTblDeclaration();
int insererDeclaration( int numLexico,int nature,int region, int desciption,int execution );

#endif
