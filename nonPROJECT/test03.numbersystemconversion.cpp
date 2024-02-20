#include <iostream>

using namespace std;

int main() {
	
	char reset;
	int userChoice;
	
	do {
	
	cout << "Choose number system: [1] Decimal [2] Binary [3] Octal [4] Hexadecimal : ";
	cin >> userChoice;
	
	switch(userChoice) {
		case 1: { //decimal to 3 number system
			int looper;
			int deci = 0, array[100];
			
			cout << "Enter in decimal number: ";
			cin >> deci; int deciOct = deci; int deciHexa = deci;
			
			//decimal to binary
			for(int i=0; deci>0; i++) {
				looper++;
				array[i] = deci%2;
				deci = deci/2;
			} cout << "Binary: ";
			for(int i = (looper-1);i>=0;i--){
				cout<<array[i];
			} looper=0; cout<< endl;
			
			//decimal to octal
			for(int i=0; deciOct>0; i++) {
				looper++;
				array[i] = deciOct%8;
				deci = deciOct/8;
			} cout << "Octal: ";
			for(int i=(looper-1);i>=0;i--){
				cout<<array[i];
			} looper=0; cout<< endl;
			
		break;
		}
		case 2: { //binary to 3 number system
			
			cout << "Enter in binary number: ";
			
		break;
		}
		case 3: { //octal to 3 number system
			
			cout << "Enter in octal number: ";
			
			
		break;
		}
		case 4: { //hexa to 3 number system
			
			cout << "Enter in hexadecimal number: ";
			
		break;
		}
	}
		
		
	//reset
	cout << endl;
	cout << "Do you want to reset? Y/y ";
	cin >> reset;
		
	} while(reset == 'Y' || 'y');
	
	
	
}