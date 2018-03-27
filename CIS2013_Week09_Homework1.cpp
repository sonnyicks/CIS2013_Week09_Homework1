#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main(){
	char encrypt_or_decrypt;
	char user_message [250];
	bool valid_choice = false;
	void load_file();
	void decrypt();
	void encrypt();
	
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
		cout << "Enter file name: ";
		cin >> file;
		encrypt.open (file);
		if (encrypt.fail()){
		cout << "File not available.  Please choose another: ";
		}
		else {valid_file=true;}
	}
}

void encrypt(){cout << "encrypting...";}
void decrypt(){cout << "decrypting...";}