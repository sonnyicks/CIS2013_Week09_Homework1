#include <iostream>
#include <string>
#include <fstream>

using namespace std;

char codelet [28];
int codenum [28];
char num [27]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' ' };


int main(){
	char encrypt_or_decrypt;
	bool valid_choice = false;
	
	void load_file();
	void decrypt();
	int encrypt();
	void code_convert();
	
	load_file();
	code_convert();
	
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
	char bb;
	
	while (valid_file==false){
		cout << endl << "Enter file name: ";
		cin >> file;
		encrypt.open (file);
		if (encrypt.fail()){
		cout << "File not available.  Please choose another: ";
		}
		else {valid_file=true;}
		for (int i=0; i<=27; i++){
			encrypt.get(bb);
			codelet[i]=bb;
		}
	}
}

int encrypt(){
	string message;
	
	cout << "Enter your message:\n";
	getline(cin, message);
	getline(cin, message);
	cout << num[3];
	return 0;
}
void decrypt(){cout << "decrypting...";}

void code_convert(){
	for (int i=0; i<=27; i++){
		for (int x=0; x<=27; x++){
			if (num[x]==codelet[i]){
				codenum[i]=x;
		}
		}
	}
	for (int y=0; y<=27; y++){
		cout << codenum[y] << " ";
	}
}