#include <iostream>

using namespace std;

//remake/practicing arrays 1ST DIMENSION

int main(){
	
	int size, evenCounter=0, oddCounter=0;
	string user;
	
	cout << "Enter the size that you want for an array: ";
	cin >> size;
	
	int Arr1D[size];
	
	
		for(int i = 0; i < size; i++) {
			cin >> Arr1D[i];
		}
		for(int i = 0; i < size; i++) {
			cout << Arr1D[i] << endl;
		}
}