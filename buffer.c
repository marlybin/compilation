/*
 *
 * Ce fichier met a disposition des fonctions permettant de gérer facilement un buffer
 * Le buffer est util pour stoquer des informations tels que les différents champs d'une structure.
 *
 */

#include "buffer.h"

int buffer[MAXBUF];

// Réinitialise
void buffer_clear(){

	buffer[0] = 1;
}

// Ajoute 2 éléments au buffer
void buffer_ajoute2( int a, int b ){

	buffer[buffer[0]++] = a;
	buffer[buffer[0]++] = b;
}

// Ajoute 3 éléments au buffer
void buffer_ajoute3( int a, int b, int c ){

	buffer[buffer[0]++] = a;
	buffer[buffer[0]++] = b;
	buffer[buffer[0]++] = c;
}

// Récupère le buffer pour lecture
int * getBuf(){

	return buffer+1 ;
}
