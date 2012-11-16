//
//  Arbre.h
//  arbre
//
//  Created by Oc Tave on 10/30/12.
//  Copyright (c) 2012 Oc Tave. All rights reserved.
//

#ifndef ARBRE_h
#define ARBRE_h

#define N_PLUS 1
#define N_MOINS 2
#define N_MULT 3
#define N_DIV 4
#define N_MOD 6
#define N_OPAFF 7
#define N_IDF 8
#define N_LIST 9
#define N_CSTE_ENT 10
#define N_CSTE_C 11
#define N_CSTE_CHAINE 12
#define N_CSTE_REEL 13
#define N_CSTE_CHAR 14
#define N_BOOL 15
#define N_INF 16
#define N_SUP 17
#define N_EGAL 18
#define N_SUPEG 19
#define N_INFEG 20
#define N_ET 21
#define N_OU 22
#define N_DIFF 23
#define N_APPEL_FCT 24
#define N_APPEL_PROC 25
#define N_FOR 26
#define N_WHILE 27
#define N_REPEAT 28
#define N_SWITCH 29
#define N_IFTHENELSE 30
#define N_TAB 31
#define N_STRUCT 32
#define N_LIRE 33
#define N_ECRIRE 34
#define N_RETURN 35


typedef struct arbre  arbre;

struct arbre{
    int att1;
    int att2;
    int type_N;
    arbre *fils;
    arbre *frere;
};

arbre *create_empty();
arbre *concat_pereFils(arbre *pere, arbre *fils);
arbre *concat_pereFrere(arbre *pere, arbre *frere);
arbre *create_NodeNull(int type_N);
arbre *create_Node(int type_N, int att1);
arbre *create_Node2(int type_N, int att1, int att2);
arbre *copy_tree(arbre *toCopy);
arbre *frere(arbre *tree);
arbre *fils(arbre *fils);

int getTypeTree(arbre *tree);
int getAtt1(arbre *tree);
int getAtt2(arbre *tree);

void display_tree(arbre *tree);


#endif
