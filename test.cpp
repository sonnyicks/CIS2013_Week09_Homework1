#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char a[25];
	
	cout << "Enter your message:";
	cin.getline(a, 25);
	cout << a;
}