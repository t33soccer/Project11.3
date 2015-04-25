using namespace std;
#include "grmat.h"
#include "createGraph.h"
#include <fstream>
int main() {
	
	ofstream fout;
	
	fout.open("test.txt");
	
	Graphm MyGraph(1000);
	
	cout << MyGraph.e() << endl;
	
	createGraph(MyGraph,1000,true);
	
	cout << MyGraph.e() << endl;
	
	MyGraph.serializedot(fout);
	
	fout.close();
	
	Graphm MyFGraph(1000);
	
	ifstream fin;
	
	fin.open("test.txt");
	
	cout << MyFGraph.e() << endl;
	
	MyFGraph.deserializedot(fin);
	
	cout << MyFGraph.e() << endl;
	
	ofstream fout2;
	
	fout2.open("test2.txt");
	
	MyFGraph.serializedot(fout2);
	
	fout2.close();
	
	
	
	
}