using namespace std;
#using <fstream>
#using <iostream>

void findme(ifstream& i) {
	string str;
	string num1;
	int firNumStart;
	int secNumStart;
	int dashStart;
	
	while (getline(i,str)) {
		
		std::string::size_type n;
		
		n = str.find("-");
		
		num1 = str.substr(0,n);
		
		cout << num1 << endl;
	
	}
}