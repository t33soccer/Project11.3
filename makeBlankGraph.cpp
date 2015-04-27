using namespace std;
// #include "grmat.h"
#include "grlist.h"
#include "makeBlankGraph.h"
#include <fstream>
int main() {
	int graphsize;
	
	graphsize = 750;
	ofstream fout;
	fout.open("graph.txt");
	Graphl MyGraph(graphsize);
	cout << MyGraph.e() << endl;
	makeBlankGraph(MyGraph,graphsize,true);
	cout << MyGraph.e() << endl;
	MyGraph.serializegph(fout);
	
	
	
	
	
}