//Activity 1 Test 1
#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ofstream inputFile;
	inputFile.open("input.txt");
	
	int size = 10;
	int arr[size];
    
	cout<<"Enter "<<size<<" Integers: \n";
	//enter input into file
    for(int i=1; i<=size; i++){
		cout<<i<<": "; cin>>arr[i];
		inputFile << arr[i] << " ";
	}
	
	cout<<"\nEntered No. ";
	for(int i=1; i<=size; i++){
		cout<<arr[i]<<" ";
	}
	
	//Sorting
	for(int x=1; x<=size; x++){
		for(int y=1; y<=size-1; y++){
			if(arr[y] > arr[y+1]){
				int temp = arr[y];
				arr[y] = arr[y+1];
				arr[y+1] = temp;
			}
		}
	}
	
	/*Display Sorted Numbers
	cout<<"\nSorted: ";
	for(int i=1; i<=size; i++){
		cout<<arr[i]<<" ";
	}
	*/
	
	//Data - File
	inputFile << "\nSorted: ";
	for(int i=1; i<=size; i++){
		inputFile << arr[i] << " ";
	}
	
	cout<<"\n\nThe 3rd Smallest Number: "<<arr[3];
	cout<<"\nThe 3rd Largest Number: "<<arr[size-2];
	inputFile.close();
}