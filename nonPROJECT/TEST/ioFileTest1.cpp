#include <iostream>
#include <fstream>

using namespace std;

int main(){
	fstream inputFile("fileTest.txt");
	if(!inputFile){
		cout<< "Creating File....";
		ofstream inputFile("Testing.txt");
		return 1;
	}
}