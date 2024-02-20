#include <iostream>
#include <string>
#include <cctype>


//June Vincent M. Fernandez
using namespace std;

string vowel(string sentenz){
	
	for(int i=0; i<=sentenz.length(); i++){
		char a = sentenz[i];
		
		if (isspace(sentenz[i])){
			sentenz[i - 1] = toupper(sentenz[i - 1]);
			sentenz[i + 1] = toupper(sentenz[i + 1]);
			cout<<" ";
		} else if(a == 'a' || a == 'A'){
			cout<<"";
		} else if (a == 'e' || a == 'E'){
			cout<<"";
		} else if (a == 'i' || a == 'I'){
			cout<<"";
		} else if (a == 'o' || a == 'O'){
			cout<<"";
		} else if (a == 'u' || a == 'U'){
			cout<<"";
		} else {
			cout<<sentenz[i];
		}
	}	
	cout<<endl;
	return sentenz;
}

int main(){
	string sen;
	cout<<"Type a sentence: ";
	getline(cin, sen);
	
	cout<<vowel(sen);
	
	cout<<endl;
}