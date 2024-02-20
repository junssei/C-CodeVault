#include <iostream>

using namespace std;

int Factorial(int a){
	int fact = 1; int count = 1;
	for(int i=1;i<=a;i++){
		fact = fact*i;
		cout<<count<<". "<<fact<<endl;
		count++;
	}
	return fact;
}

int main(){
		char reset;
		int input;
		do {
		
		cout<<"Input a number for factorial: "; cin >> input;
		cout<<Factorial(input)<<endl<<endl;
		
		
		cout<<"Do you want to reset? Y/N : "; cin >> reset;
		} while (reset == 'y' || reset == 'Y');
}