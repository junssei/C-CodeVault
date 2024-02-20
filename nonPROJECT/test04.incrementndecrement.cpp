#include <iostream>
using namespace std;

int main() {

	char reset;
	int a;
	
	do {
		cout << endl;
		cout << "Displays the operation of pre and post-increment and decrement" << endl;
		cout << "Input a number: "; cin >> a; cout << endl;
		
		//increment
		cout<< "The number is: " << a++ <<endl;
		cout<< "After post-increment by 1, the number is: " << a << endl;
		cout<< "After pre-increment by 1, the number is: " << ++a <<endl;
		cout<< "After increasing by 1, the number is: " << (a+=1) <<endl;
		//decrement
		a--; cout<< "After post-decrement by 1, the number is: " << a << endl;
		cout<< "After pre-decrement by 1, the number is: " << --a <<endl;
		cout<< "After decreasing by 1, the number is: " << (a-=1) <<endl << endl;
		
		//reset
		cout << "Do you want to reset? Y/y: ";
		cin >> reset;
		
	} while (reset=='Y'||'y');
}