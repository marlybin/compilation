#include <stdio.h>
#include "TableDeclarations.h"
#include "Arbre.h"
#include "TableRegions.h"

int main( int argc, char * argv[] ){

	insererDeclaration( 4,0,132,0,0 );
	insererDeclaration( 4,0,456,0,0 );
	insererDeclaration( 4,0,46,0,0 );
	
	afficherTblDeclaration();
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
	 int r = insererRegion(66, 88, g);
	  r = insererRegion(5, 88, h);
	  r =insererRegion(4, 88, c);
	  r =insererRegion(3, 88, b);
	  r = insererRegion(6, 88, a);

	 //display_tree(a);

	afficherTblRegions();
	printf("il y a %d regions ok", r);
	
	return 0;
}
