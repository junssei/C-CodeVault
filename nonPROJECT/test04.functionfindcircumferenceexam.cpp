#include <iostream>

using namespace std;

//find the circumference
float circle(float r){
	float p = 3.14;
	float c = 2*p*r;
	return c;
}

int main(){
	
	char res;
	float radius;
	float p = 3.14;
	do {
		
		cout << "TASK: FIND CIRCUMFERENCE\n";
		cout << "Formula: 2*3.14*RADIUS\n";
		cout << "Radius: "; cin >> radius; cout << endl;
		
		
		cout << "2 * " << p << " * " << radius << " = "<< circle(radius) << endl;
		
	cout << "\nDo yo want to reset? Y/N"; cin >> res;
	} while (res == 'y' || res == 'Y');
}