#include <iostream>
using namespace std;

int main() {

	char reset;
	
	do {
		int choice; int i=0, size=4; int array[5];
		
		cout << "Enter any number: " << endl;
		if(i == 0){
			if(i<=size)
				/*cout << i << "A: ";*/ cin	>> array[i];
				/*array[choice] = array[i];*/ i++;
			if(i<=size)
				/*cout << i << "B: ";*/ cin	>> array[i];
				/*array[choice] = array[i];*/ i++;
			if(i<=size) 
				/*cout << i << "C: ";*/ cin	>> array[i];
				/*array[choice] = array[i];*/ i++; 
			if(i<=size)
				/*cout << i << "D: ";*/ cin	>> array[i]; 
				/*array[choice] = array[i];*/ i++;
			if(i<=size)
				/*cout << i << "E: ";*/ cin	>> array[i]; 
				/*array[choice] = array[i];*/ i++;
			} else {
				cout << "Error";
			}
			cout << endl;
			cout << "Output: " << endl;
			for(i=size; i>=0; i--){
			cout << array[i] << endl;
			}
			
		//reset
		cout << "Do you want to reset? Y/y: ";
		cin >> reset;
		
	} while (reset=='Y'||'y');
}