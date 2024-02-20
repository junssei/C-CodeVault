#include <iostream>
#include <cctype>
#include <string>

using namespace std;

string vowels(string sentenz){
	for(int i = 0; i < sentenz.length(); i++){
		char a = sentenz[i];
		switch(a){
			case 'a': case 'A':{
				cout<<"";
				break;
			}
			case 'e': case 'E':{
				cout<<"";
				break;
			}
			case 'i': case 'I':{
				cout<<"";
				break;
			}
			case 'o': case 'O':{
				cout<<"";
				break;
			}
			case 'u': case 'U':{
				cout<<"";
				break;
			}
			default: {
			if (islower(sentenz[i]) | isupper(sentenz[i]) | isblank(sentenz[i])){
                cout << sentenz[i];
            }
			for(int i = 0; i < sentenz.length(); i++){
			if (i == 0 || i == sentenz.length() - 1){
                sentenz[i] = toupper(sentenz[i]);
            }
            else if(sentenz[i]==' '){
            	sentenz[i] = toupper(sentenz[i-1]);
            	sentenz[i] = toupper(sentenz[i+1]);
			}
			}
			break;
        	}
		}
	}
}

int main(){
	string sen="";
	
	cout<<"Type a sentence: ";
	getline(cin, sen);
	
	cout<<vowels(sen);
}