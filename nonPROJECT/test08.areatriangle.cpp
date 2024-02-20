#include <iostream>

using namespace std;

int main(){
	
	//A = (1/2) * b * h Inputs = Base, and Height (2 Numbers)
	
	int b, h;
	char reset;
	
	do {
	
	cout << "Find the area of a triangle" << endl;
	cout << "Base: "; cin >> b;
	cout << "Height: "; cin >> h;
	
	int input = b * h;
	int area = input/2;
	cout << "The area of the triangle: " << area << endl;
	
	cout << "Do you want to reset? Y/y ";
	cin >> reset;
	
	} while (reset=='Y'||'y');
}