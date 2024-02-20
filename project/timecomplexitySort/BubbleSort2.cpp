#include <iostream>
#include <fstream>

using namespace std;

const int size = 10000; //adjust the size
fstream inputFile;
int arr[size];

void filetoProgram(){
	
	string fileName = to_string(size) + ".txt";
	inputFile.open(fileName);
	int num = 0, count = 0;
    while(inputFile >> num && count < size){
		arr[count++] = num;
	}
}

void bubbleSort(){
	for(int x=0; x<=size; x++){
		for(int y=0; y<=size-1; y++){
			if(arr[y] > arr[y+1]){
				int temp = arr[y];
				arr[y] = arr[y+1];
				arr[y+1] = temp;
			}
		}
	}
}

int main(){
	
	filetoProgram();
	bubbleSort();
	
	//Display Sorted Numbers
	cout<<"\nBubble Sort\n";
	cout<<"Sorted Data: \n";
	for(int i=0; i<size; i++){
			cout<<arr[i]<<" ";
	}
	
	inputFile.close();
}