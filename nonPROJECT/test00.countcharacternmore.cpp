#include <iostream>

using namespace std;

int main(){
	string sentenz;
	int count, words=1, spaces=0;
	char r;
	
	do{
	
	cout<<"Sentence: ";
	getline(cin,sentenz);
	
	while(sentenz[count]!=NULL){
		count++;
		if(sentenz[count] == ' '){
			words++;
			spaces++;
		}
	}
	
	cout<<"Character: "<<count<<endl;
	cout<<"Spaces: "<<spaces<<endl;
	cout<<"Words: "<<words<<endl;
	
	cout<<"\nDo you want to reset? "; cin>>r;
	
	}while(r == 'Y' || r == 'y');
}