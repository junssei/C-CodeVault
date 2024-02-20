//Test 11
//IOFILE
//Get input into the file

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ofstream myFile ("testFileOne.txt");
	
	int arr[10];
	int num, count = 0;
	while(myFile >> num && count < 10){
		arr[count++] = num;
	}
	
	cout<<arr[0];
}