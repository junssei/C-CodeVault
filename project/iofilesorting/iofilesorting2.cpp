//Activity 1 Testing
#include <iostream>
#include <fstream>

using namespace std;

int main(){
	//Integer input
	//Create input file to array
	/*If there no input to a file
	then it will prompt to enter integer*/
	fstream inputFile("Testing.txt");
	if(!inputFile){
		cout<<"Creating File....";
		ofstream inputFile ("Testing.txt");
		return 1;
	}
	
	int arr[10];
	int num, count = 0;
	while(inputFile >> num && count < 10){
		arr[count++] = num;
	}
	
	inputFile.close();
	
	if(count < 1){
		inputFile.open("Testing.txt");
		for(int i=0; i<10; i++){
			cout<<"Enter Integer No. "<<i+1<<": ";
			cin>>arr[i];
			inputFile << arr[i] << " ";
		}
		
	//Sorting
	for(int x=0; x<10; x++){
		for(int y=0; y<10-1; y++){
			if(arr[y] > arr[y+1]){
				int temp = arr[y];
				arr[y] = arr[y+1];
				arr[y+1] = temp;
			}
		}
	}
		
		cout<<"Sorted: ";
		for(int j = 0; j < 10; j++){
			cout<< arr[j] << " ";
		}
		
		inputFile.close();
	} else {
		
		//Sorting
	for(int x=0; x<10; x++){
		for(int y=0; y<10-1; y++){
			if(arr[y] > arr[y+1]){
				int temp = arr[y];
				arr[y] = arr[y+1];
				arr[y+1] = temp;
			}
		}
	}
		
		cout<<"Sorted: ";
		for(int j = 0; j < count; j++){
			cout<< arr[j] << " ";
		}
	}
	
	cout<<endl;
	
	cout<<"\nThe 3rd Smallest Number: "<<arr[2];
	cout<<"\nThe 3rd Largest Number: " <<arr[7];
	
}