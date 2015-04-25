using namespace std;

#include <fstream>
#include <iostream>
#include "testfind.h"


int main() {
	ifstream fin;
	
	fin.open("testindot.txt");
	
	findme(fin);
}