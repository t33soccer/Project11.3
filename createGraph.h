#ifndef __CREATEGRAPH__
#define __CREATEGRAPH__

#include "graph.h"

void createGraph(Graph& g, int v, bool isDense) {
	// v is verticies
	// isDense determines if g is dense or sparse
	// g is passed in graph, blank
	
	int e;
	
	if (isDense == true) {
		e = (v-1); //if v is 20 e is 19
	}
	else{
		e = 2; //e will always be 2 if sparse
	}
	
	int i;
	int j;
	for (i=0; i<v; i++) {
		for (j=0; j<e; j++) {
			g.setEdge(i,j,1);
		}
	}
}

#endif