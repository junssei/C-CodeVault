//Activity 2 //Test 1

#include <iostream>

using namespace std;

int main(){
	int size = 10;
	int arr[size];
	
	for(int i=1; i<=size; i++){
		cout<<"Enter Integer: ";
		cin>>arr[i];
		
		//Sorting
		for(int x = 1; x <= i; x++){
			for(int y = 1; y <= i-1; y++){
				if(arr[y] > arr[y+1]){
					int temp = arr[y];
					arr[y] = arr[y+1];
					arr[y+1] = temp;
				}
			}
		}
		
		//Display Sorted
		cout<<"Array Item(s): ";
		for(int d = 1; d <= i; d++){
			cout<<arr[d]<<" ";
		}
		cout<<endl;
		
	}
	
}