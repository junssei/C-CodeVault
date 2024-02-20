#include <iostream>

using namespace std;

int main() {
	
	char reset, choice;
	int input, a ,b;
	
	do {
		
		cout << "Enter two integers number: " << endl;
		cin >> a >> b;
		cout << "Choose A = Addition || S = Subtraction || D = Division || M = Multiplication : ";
		cin >> choice;
		
		switch(choice) {
			case 'A': case 'a': {
				int addition = a + b;
				cout << a << " + " << b << " = "<< addition;
				
				break;
			}
			case 'S': case 's': {
				int subtraction = a-b;
				cout << a << " - " << b << " = "<< subtraction;
				
				break;
			}
			case 'D': case 'd': {
				int division = a/b;
				cout << a << " / " << b << " = "<< division;
				
				break;
			}
			case 'M': case 'm': {
				int multiplication = a*b;
				cout << a << " x " << b << " = "<< multiplication;
				
				break;
			}
		}
		
		//reset
		cout << endl;
		cout << "Do you want to reset? Y/y: ";
		cin >> reset;
	} while(reset=='Y'||'y');
	
	
	
}