#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string code [28];
string num="abcdefghijklmnopqrstuvwxyz ";

int main(){
	char encrypt_or_decrypt;
	bool valid_choice = false;
	
	void load_file();
	void decrypt();
	int encrypt();
	
	load_file();
	
	cout << "Enter encrypt(e) or decrypt(d) :";
	cin >> encrypt_or_decrypt;
	
	while (valid_choice==false){
		if (encrypt_or_decrypt=='d'){decrypt();
		valid_choice=true;
		}
		else if (encrypt_or_decrypt=='e'){encrypt();
		valid_choice=true;
		}
		else {cout << "invalid entry, please enter encrypt(e) or decrypt(d) :";}
	}
	
	return 0;
}

void load_file(){
	ifstream encrypt;
	char file [16];
	bool valid_file = false;
	
	while (valid_file==false){
		cout << endl << "Enter file name: ";
		cin >> file;
		encrypt.open (file);
		if (encrypt.fail()){
		cout << "File not available.  Please choose another: ";
		}
		else {valid_file=true;}
		for (int i=0; i<=27; i++){
			encrypt >> code [i];
		}
	}
}

int encrypt(){
	string a;
	
	cout << "Enter your message:\n";
	getline(cin, a);
	getline(cin, a);
	cout << num[10];
	return 0;
}
void decrypt(){cout << "decrypting...";}