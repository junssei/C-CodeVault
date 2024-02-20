//Name Sorter
//2D array

#include <iostream>
#include <string>

using namespace std;

int main(){
	int size;
	cout<<"How many person you want to input? ";
	cin>>size;
	
	string arr[size][3] = {};
		cout<<"Enter "<<size<<" Name (First Name, Middle Name, Last Name)\n";
	//Input	
	for(int i=0; i<size; i++){
		for(int j=0; j<3; j++){
			cin>>arr[i][j];
		}
	}
	
	//Display
  /*for(int i=0; i<size; i++){
		cout<<"Person #"<<i<<" : ";
		for(int j=0; j<3; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}*/
	
	
	//For Ascending Sort
	for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
        	for(int x=0; x < 1; x++){//Check first name
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
	
	//For Descending Sort
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
	
	//Descending Order Display
	cout<<"\nDescending Order: "<<endl;
	for(int i=0; i<size; i++){
		cout<<i<<" : ";
		for(int j=0; j<3; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
}