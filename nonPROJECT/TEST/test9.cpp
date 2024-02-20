#include <iostream>

using namespace std;

int main(){
	int size;
	cout<<"Size: "; cin>>size;
	
	int arr[size];
	for(int i = 0; i<size; i++){
		cin>>arr[i];
	}
	
	//Sort
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size - 1; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	for(int i = 0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	
}