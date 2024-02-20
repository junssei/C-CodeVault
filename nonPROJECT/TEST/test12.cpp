//Test12
//Testing String Array Sort
#include <iostream>
#include <string>

using namespace std;

int main(){
	int size = 5;
	string arr[2][3];
	
	//Input
	for(int i=0; i<size; i++){
		for(int j=0; j<3; j++){
			cin>>arr[i][j];
		}
	}
	
	cout<<endl;
	//Display
	for(int i=0; i<size; i++){
		for(int j=0; j<3; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//For Ascending Sort
	for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
        	for(int x=0; x < 1; x++){
            	if (arr[j][x] > arr[j + 1][x]) {
                	// Swap names[j] and names[j+1]
                	for(int y = 0; y < 3; y++){
                	string temp = arr[j][y];
                	arr[j][y] = arr[j + 1][y];
                	arr[j + 1][y] = temp;
                	}
            	}
        	}
        }
    }
	
	//Ascending Order Display
	cout<<"\nAscending Order: "<<endl;
	for(int i=0; i<size; i++){
		cout<<i<<" : ";
		for(int j=0; j<3; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
}