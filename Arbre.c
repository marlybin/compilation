#include<stdio.h>
#include<stdlib.h>
#include "Arbre.h"



arbre *create_empty(){
    arbre *tree = (arbre*)malloc(sizeof(arbre));
    tree->frere = NULL;
    tree->fils = NULL;
    tree->att1 = 0;
    tree->att2 = 0;
    tree->type_N = 0;

    return tree;
}

arbre *concat_pereFils(arbre *pere, arbre *fils){
    if(pere == NULL){return fils;}
    pere->fils = fils;
    return pere;
}

arbre *concat_pereFrere(arbre *pere, arbre *frere){
    if(pere == NULL){return frere;}
    if(pere->frere !=  NULL){pere->frere = concat_pereFils(create_NodeNull(N_LIST),concat_pereFrere(pere->frere,frere));}
    else{pere->frere = frere;}
    return pere;
}

arbre *create_NodeNull(int type_N){
    arbre *tree = (arbre*)malloc(sizeof(arbre));
    tree->type_N = type_N;
    tree->att1 = 0;
    tree->att2 = 0;
    tree->fils = NULL;
    tree->frere = NULL;
    return tree;
}

arbre *create_Node(int type_N, int att1){
    arbre *tree = (arbre*)malloc(sizeof(arbre));
    tree->type_N = type_N;
    tree->att1 = att1;
    tree->att2 = 0;
    tree->fils = NULL;
    tree->frere = NULL;
    return tree;
}

arbre *create_Node2(int type_N, int att1, int att2){
    arbre *tree = (arbre*)malloc(sizeof(arbre));
    tree->type_N = type_N;
    tree->att1 = att1;
    tree->att2 = att2;
    tree->fils = NULL;
    tree->frere = NULL;
    return tree;
}





arbre *copy_tree(arbre *toCopy){
    arbre *tree = (arbre*)malloc(sizeof(arbre));
    tree->att1 = toCopy->att1;
    tree->att2 = toCopy->att2;
    tree->fils = toCopy->fils;
    tree->frere = toCopy->frere;
    return tree;
}


int getTypeTree(arbre *tree){
    return tree->type_N;
}

int getAtt1(arbre *tree){
    return tree->att1;
}

int getAtt2(arbre *tree){
    return tree->att2;
}


void display_tree(arbre *tree){
    arbre *filsTemp = (arbre*)malloc(sizeof(arbre));
    filsTemp = tree->fils;;
    if ((tree->fils == NULL) && (tree->frere == NULL)) {
       /* test :*/ printf("(%d, NULL, NULL)", tree->type_N);
    }

    if ((tree->fils != NULL) || (tree->frere != NULL)) {
        printf("(%d, ", tree->type_N);
    }


    if ((tree->fils == NULL) && (tree->frere == NULL)) {
        //goto Fin;
    }
    else {
        if(tree->fils==NULL)
            {printf("(%d, NULL, NULL), ", 0/*tree->type_N*/);}
        while(tree->fils != NULL){
            display_tree(tree->fils);
            tree->fils = NULL;
            printf(", ");
        }
        tree->fils = filsTemp;
        if(tree->frere==NULL)
            {printf("(%d, NULL, NULL)", 0/*tree->type_N*/);}
        while(tree->frere != NULL){
            display_tree(tree->frere);
            tree->frere = NULL;
        }
        tree->frere = filsTemp;
    }

    if(tree->frere == NULL) {
        printf(")");
        //goto Fin;
    }

   /* Fin :*/ if (((tree->fils != NULL) || (tree->frere != NULL))) {
        printf(")");
    }


}


