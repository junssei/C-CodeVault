#include <iostream>
//June Vincent M. Fernandez
//Sorting Arrays

using namespace std;

int main(){
	
	int size, x;
	char r;
	
	do{
	cout<<"Enter the size of the array: "; cin>>size;
	int arr[size];
	for(int i = 0; i<size; i++){
		cin>>arr[i];
	}
	
	for(int j = 0; j<size; j++){
		for(int i = 0; i<size; i++){	
			if(arr[i]<arr[i+1]){
				x = arr[i];
				arr[i] = arr[i+1];
				arr[i+1]=x;
			}
		}
	}
	
	cout<<"\nHighest to Lowest: \n";
	for(int i=0;i<size;i++){
		cout<<"Array["<<i<<"] = "<<arr[i]<<"\n";
	}
	
	cout<<"Do you want to reset? ";
	cin>>r;
	
	} while (r == 'Y' || r == 'y');
}