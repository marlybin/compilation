/* /!\ Note : veiller à bien lancer un buffer_clear() avant toute manipulation */

#ifndef BUFFER_H
#define BUFFER_H

#define MAXBUF 100

// Réinitialise
void buffer_clear();

// Ajoute 2 éléments au buffer
void buffer_ajoute2( int a, int b );

// Ajoute 3 éléments au buffer
void buffer_ajoute3( int a, int b, int c );

// Récupère le buffer pour lecture
int * getBuf();

#endif
