#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int size;
	
	cout<<"How many you want to input? ";
	cin>>size;
	
	//Enter number into array
	int arr[size];
	for(int i = 1; i<size; i++){
		cout<<"\nEnter for #"<<i<<": ";
		cin>>arr[i-1];
		cout<<endl;
	
	//Sorting lowest to highest
	for (int x = 0; x < i - 1; ++x) {
        for (int j = x + 1; j < i; ++j) {
            if (arr[x] > arr[j]) {
                int temp = arr[x];
                arr[x] = arr[j];
                arr[j] = temp;
            }
        }
    }
	
	//Display Sorted Numbers
    for(int k = 0; k < i; k++){
    	cout<<arr[k]<<" ";
	}
}
	
}

