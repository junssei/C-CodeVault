#include <iostream>
using namespace std;

int main() {
	
	int reset;
	
	do {
	
	int a, b, c, d, user;
	user = a, b, c, d;
	
		cout << "Enter a numbers: " << endl;
		cin >> a >> b >> c >> d; cout << endl;
	
	//reset	
	cout << "Do you want reset? Y/y: ";
	cin >> reset;
	} while (reset=='Y'||'y');
}
