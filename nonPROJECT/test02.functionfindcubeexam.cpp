#include <iostream>

using namespace std;

//find cube

int findCube(int a){
	int cube = a*a*a;
	return cube;
}

int main(){
	
	int input;
	char reset;
	
	do {
	cout << "TASK: FIND CUBE\n"<<"Input a number: "; cin >> input;
	cout << findCube(input) << endl << endl;
	
	cout <<"Do you want to reset? Y/N : "; cin >> reset;
	} while (reset == 'Y' || reset == 'y');
}