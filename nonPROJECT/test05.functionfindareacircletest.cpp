#include <iostream>
#include <iomanip>

using namespace std;

//find the area of the circle

float area(float r){
	float pi = 3.14, b = r*r;
	float area = pi*b;
	return area;
}

int main(){
	char res;
	float radius;
	float pi = 3.14;
	do {
		
	cout << "TASK: FIND THE AREA OF THE CIRCLE\n";
	cout << "FORMULA: A = PI*R^2\n";
	cout << "Input a radius to find the area of the circle: "; cin >> radius;
	
	cout << "A = " << pi << radius << "^2 = " << setprecision(5) << area(radius) << endl;
		
	cout<<"\nDo you want to reset? Y/N : "; cin >> res;
	} while (res == 'Y'|| res == 'y');
}