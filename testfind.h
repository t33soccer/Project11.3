using namespace std;
#include <fstream>
#include <iostream>

void findme(ifstream& i) {
	string str;
	string num1;
	string num2;
	std::string::size_type firNumStart;
	std::string::size_type secNumStart;
	std::string::size_type dashStart;
	std::string::size_type semicolonEnd;
	
	while (getline(i,str)) {
		
		dashStart = str.find("-");
		semicolonEnd = str.find(";");
		num1 = str.substr(0,dashStart);
		secNumStart = dashStart + 2;
		num2 = str.substr(secNumStart, (semicolonEnd - secNumStart));
		cout << num2 << endl;
		
	
	}
}