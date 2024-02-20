#include <iostream>

using namespace std;

//evenodd

int evenOdd(int a){
	bool checker;
	
	if(a%2==0){
		checker = 0;
	} else checker = 1;
	
	return checker;
}

int main(){
	char res;
	int input;
	
	do {
	
	cout << "TAKS: EVEN OR ODD\n";	
	cout << "Input a number: "; cin >> input;
	
	if(evenOdd(input) == 0){
		cout << input << " is Even";
	} else cout << input << " is Odd";
	
	cout<<"\n\nDo you want to reset? Y/N : "; cin >> res;
	} while (res == 'Y' || res == 'y');
}