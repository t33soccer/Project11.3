using namespace std;
#include "grmat.h"
#include "makeBlankGraph.h"
#include <fstream>
int main() {
	
	ofstream fout;
	
	fout.open("test.txt");
	
	Graphm MyGraph(10);
	
	cout << MyGraph.e() << endl;
	
	makeBlankGraph(MyGraph,10,true);
	
	cout << MyGraph.e() << endl;
	
	MyGraph.serializegph(fout);
	
	// MyGraph.serializedot(fout);
	
	// fout.close();
	
	// Graphm MyFGraph(1000);
	
	// ifstream fin;
	
	// fin.open("test.txt");
	
	// cout << MyFGraph.e() << endl;
	
	// MyFGraph.deserializedot(fin);
	
	// cout << MyFGraph.e() << endl;
	
	// ofstream fout2;
	
	// fout2.open("test2.txt");
	
	// MyFGraph.serializedot(fout2);
	
	// fout2.close();
	
	
	
	
}