using namespace std;
#include "grmat.h"
#include "makeBlankGraph.h"
#include <fstream>
int main() {
	
	ofstream fout;
	
	fout.open("graph.txt");
	
	Graphm MyGraph(100000);
	
	cout << MyGraph.e() << endl;
	
	makeBlankGraph(MyGraph,100000,false);
	
	cout << MyGraph.e() << endl;
	
	MyGraph.serializegph(fout);
	
	
	
	
	
}