#include <iostream>
#include <string>
#include <fstream>

using namespace std;

char codelet [27];
int codenum [27];
char num [27]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' ' };
string message;
string abc="abcdefghijklmnopqrstuvwxyz ";

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
	
	cout << "Enter your message:\n";
	cin.ignore();
	getline(cin, message);
	int result;
	
	int a = message.length();
	int msg_num[a];
	
	for (int i=0; i<=a; i++){
		for (int x=0; x<=26; x++){
			if (abc[x]==message[i]){
				msg_num[i]=x+1;
			}
		}
	}
	for (int i=0; i<a; i++){
		result = (msg_num[i]+codenum[i])%27;
		cout << num[result-1];
	}
}

void decrypt(){cout << "decrypting...";}

void code_convert(){
	for (int i=0; i<=26; i++){
		for (int x=0; x<=26; x++){
			if (num[x]==codelet[i]){
				codenum[i]=x+1;
			}
		}
	}
}