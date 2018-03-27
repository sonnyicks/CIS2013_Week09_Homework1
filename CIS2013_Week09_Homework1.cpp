#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main(){
	ifstream encrypt;
	char file [16];
	bool valid_file = false;
	
	
	while (valid_file==false){
	cout << "Enter file name: ";
	cin >> file;
	encrypt.open (file);
		if (encrypt.fail()){
		cout << "File not available.  Please choose another: ";
		}
	else {valid_file=true;}
	}
	
	return 0;
}