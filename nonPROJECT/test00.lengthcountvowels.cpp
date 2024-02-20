#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main(){
	int vowels;
	string sentence;
	
	cout << "Enter a sentence: " << endl;
	getline(cin, sentence);
	
	for(int i=0; i<sentence.length; i++){
		char a = sentence[i];
		if(a == 'a', 'e', 'i', 'o', 'u'){
			vowels++;
		}
	}
	cout << "Number of vowels: "<< vowels;
}