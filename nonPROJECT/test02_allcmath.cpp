//rrokusan bsit-first

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#define PI 3.14159265

using namespace std;

void trigom(){//Trigonometry Function
	char opt;
	double num, result;
	do{
	cout<<"Trigonometric Function"<<endl;
	cout<<"[A] cos() [B] sin() [C] tan() [D] Back\n";
	cout<<"Option: "; cin>>opt;
	switch(opt){
		case 'a': case 'A': {
			system("CLS");
			cout<<"cos() function \n";
			cout<<"Enter the degrees to get the cosine: "; cin>>num;
			result = cos(num*PI/180.0);
			cout<<"The Cosine of "<<num<<" degrees is "<<result<<'.'<<endl<<endl;
			break;
		}
		case 'b': case 'B': {
			system("CLS");
			cout<<"sin() function \n";
			cout<<"Enter the degrees to get the sine: "; cin>>num;
			result = sin(num*PI/180.0);
			cout<<"The Sine of "<<num<<" degrees is "<<result<<'.'<<endl<<endl;
			break;
		}
		case 'c': case 'C': {
			system("CLS");
			cout<<"tan() function \n";
			cout<<"Enter the degrees to get the tan: "; cin>>num;
			result = tan(num*PI/180.0);
			cout<<"The Tangent of "<<num<<" degrees is "<<result<<'.'<<endl<<endl;
			break;
		}
	}
	} while (opt != 'd' && opt != 'D');
}
void explog(){//Exponential and Logarithmic
	char opt;
	double num, result;
	do{
	cout<<"Exponential and Logarithmic Functions"<<endl;
	cout<<"[A] exp() [B] exp2() [C] Back\n";
	cout<<"Option: "; cin>>opt;
	switch(opt){
		case 'a': case 'A': {
			system("CLS");
			cout<<"exp() function (e = 2.7182818284590452353602874713527)\n";
			cout<<"Formula: Base: e Exponent: ? : (e^exp)\n";
			cout<<"Exponent: "; cin>>num;
			result = exp(num);
			cout<<"The exponential value of "<<num<<" is "<<result<<'.'<<endl<<endl;
			break;
		}
		case 'b': case 'B': {
			system("CLS");
			cout<<"exp2() function \n";
			cout<<"Formula: Base: 2 Exponent: ? : (2^exp)\n";
			cout<<"Exponent: "; cin>>num;
			result = exp2(num);
			cout<<"The result of 2 raised to the power of "<<num<<" is "<<result<<'.'<<endl<<endl;
			break;
		}
	}
	} while (opt != 'c' && opt != 'C');
}
void powf(){//Power Functions
	char opt;
	double num, num2, result;
	do{
	cout<<"Power Functions"<<endl;
	cout<<"[A] pow() [B] sqrt() [C] cbrt() [D] hypot() [E] Back\n";
	cout<<"Option: "; cin>>opt;
	switch(opt){
		case 'a': case 'A': {
			system("CLS");
			cout<<"pow() function \n";
			cout<<"Formala: Base ^ Exponent\n";
			cout<<"Enter a base number: "; cin>>num;
			cout<<"Enter a exponent number: "; cin>>num2;
			result = pow(num, num2);
			cout<<"The result of "<<num<<" raised to the power of "<<num2<<" is "<<result<<'.'<<endl<<endl;
			break;
		}
		case 'b': case 'B': {
			system("CLS");
			cout<<"sqrt() function \n";
			cout<<"Enter a number to get the square root: "; cin>>num;
			result = sqrt(num);
			cout<<"The square root of "<<num<<" is "<<result<<'.'<<endl<<endl;
			break;
		}
		case 'c': case 'C': {
			system("CLS");
			cout<<"cbrt() function \n";
			cout<<"Enter a number to get the cubic root: "; cin>>num;
			result = cbrt(num);
			cout<<"The cube root of "<<num<<" is "<<result<<'.'<<endl<<endl;
			break;
		}
		case 'd': case 'D': {
			system("CLS");
			cout<<"hypot() function \n";
			cout<<"Enter a two side of right triangle to find the hypotenuse: \n";
			cout<<"A side: "; cin>>num;
			cout<<"B side: "; cin>>num2;
			result = hypot(num, num2);
			cout<<"The hypotenuse of the right triangle with the given side of "<<num<<" and "<<num2<<" is "<<result<<'.'<<endl<<endl;
			break;
		}
	}
	} while (opt != 'e' && opt != 'E');
}
void rore(){//Rounding and Remainder Functions
	char opt;
	double num, num2, result;
	do{
	cout<<"Rounding and Remainder Functions"<<endl;
	cout<<"[A] ceil() [B] floor() [C] round() [D] remainder() [E] Back\n";
	cout<<"Option: "; cin>>opt;
	switch(opt){
		case 'a': case 'A': {
			system("CLS");
			cout<<"ceil() function\n";
			cout<<"Enter a number that you want to round UP: "; cin>>num;
			result = ceil(num);
			cout<<"The ceil of "<<num<<" is "<<result<<'.'<<endl<<endl;
			break;
		}
		case 'b': case 'B': {
			system("CLS");
			cout<<"floor() function \n";
			cout<<"Enter a number that you want to round DOWN: "; cin>>num;
			result = floor(num);
			cout<<"The floor of "<<num<<" is "<<result<<'.'<<endl<<endl;
			break;
		}
		case 'c': case 'C': {
			system("CLS");
			cout<<"round() function \n";
			cout<<"Enter a number that you want to round off: "; cin>>num;
			result = round(num);
			cout<<"The round off of "<<num<<" is "<<result<<'.'<<endl<<endl;
			break;
		}
		case 'd': case 'D': {
			system("CLS");
			cout<<"remainder() function \n";
			cout<<"Formula: A/B = Result: Remainder\n";
			cout<<"Numerator : "; cin>>num;
			cout<<"Denominator: "; cin>>num2;
			result = remainder(num, num2);
			cout<<"The remainder of "<<num<<" / "<<num2<<" is "<<result<<'.'<<endl<<endl;
			break;
		}
	}
	} while (opt != 'e' && opt != 'E');
}
void mmd(){//Minimum, Maximum, Difference Functions
	char opt;
	double num, num2, result;
	do{
	cout<<"Minimum, Maximum, Difference Functions"<<endl;
	cout<<"[A] fmax() [B] fmin() [C] Back\n";
	cout<<"Option: "; cin>>opt;
	switch(opt){
		case 'a': case 'A': {
			system("CLS");
			cout<<"fmax() function\n";
			cout<<"Enter a two number to compare which one is larger/greater\n";
			cout<<"A: ";cin>>num;
			cout<<"B: ";cin>>num2;
			result = fmax(num, num2);
			cout<<"The max/larger between "<<num<<" and "<<num2<<" is "<<result<<'.'<<endl<<endl;
			break;
		}
		case 'b': case 'B': {
			system("CLS");
			cout<<"fmin() function \n";
			cout<<"Enter a two number to compare which one is smaller/less\n";
			cout<<"A: ";cin>>num;
			cout<<"B: ";cin>>num2;
			result = fmin(num, num2);
			cout<<"The min/smaller between "<<num<<" and "<<num2<<" is "<<result<<'.'<<endl<<endl;
			break;
		}
	}
	} while (opt != 'c' && opt != 'C');
}
void otf(){//Other functions
	char opt;
	double num, result;
	do{
	cout<<"Other functions"<<endl;
	cout<<"[A] abs() [B] Back\n";
	cout<<"Option: "; cin>>opt;
	switch(opt){
		case 'a': case 'A': {
			system("CLS");
			cout<<"abs() function \n";
			cout<<"Enter a number to get the absolute value: "; cin>>num;
			result = abs(num);
			cout<<"The Absolute Value of "<<num<<" is "<<result<<'.'<<endl<<endl;
			break;
		}
	}
	} while (opt != 'b' && opt != 'B');
}

int main(){
	int opt;
	do{
	system("CLS");
	cout<<"=============================================";
	cout<<"\n	   Choose <cmath> Function \n";
	cout<<"=============================================";
	cout<<"\n[1] Trigonometry Function\n[2] Exponential and Logarithmic\n[3] Power Functions\n";
	cout<<"[4] Rounding and Remainder Functions\n[5] Minimum, Maximum, Difference Functions\n[6] Other functions\n"; 
	cout<<"[7] Exit\nOption: "; cin>>opt;
	
	switch(opt){
		case 1: {
		system("CLS");
		trigom();
		break;
		}
		case 2: {
		system("CLS");
		explog();
		break;
		}
		case 3: {	
		system("CLS");
		powf();
			break;
		}
		case 4: {
		system("CLS");
		rore();
			break;
		}
		case 5: {
		mmd();
		system("CLS");	
			break;
		}
		case 6: {
		otf();
		system("CLS");
			break;
		}
	}
	} while (opt != 7);
}
