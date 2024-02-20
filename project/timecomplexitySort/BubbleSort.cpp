#include <iostream>
#include <fstream>

using namespace std;

int main(){
	fstream inputFile;
	
	int size = 10000; //adjust the size
	string fileName = to_string(size) + ".txt";
	inputFile.open(fileName);
	int arr[size], num = 0, count = 0;
    
    while(inputFile >> num && count < size){
		arr[count++] = num;
	}
	
	/*//Display Not Sorted
	for(int i=0; i<=size; i++){
		cout<<arr[i]<<" ";
	}*/
	
	//Sorting
	for(int x=0; x<=size; x++){
		for(int y=0; y<=size-1; y++){
			if(arr[y] > arr[y+1]){
				int temp = arr[y];
				arr[y] = arr[y+1];
				arr[y+1] = temp;
			}
		}
	}
	
	//Display Sorted Numbers
	cout<<"\nBubble Sort:";
	cout<<"\nSorted: \n";
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	
	/*Data - File
	inputFile << "\nSorted: ";
	for(int i=1; i<=size; i++){
		inputFile << arr[i] << " ";
	}*/
	
	inputFile.close();
}