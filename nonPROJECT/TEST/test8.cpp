#include <iostream>
#include <fstream>

using namespace std;

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
   	/* fstream inputfile("userfile.txt");
    if (!inputfile) {
        cout << "Error opening file." << endl;
        return 1;
    }
	inputfile.close();*/
	
	ofstream inputfile;
	
	inputfile.open ("userfile.txt");
	    int arr[10];
	    cout<<" input the Value"<<endl;
	    for (int i = 1; i <=10; i++) {
	    cout<<"\nEnter Integer: "<<i<<endl;
	        cin>>arr[i-1];
	        
	sortArray(value, i);
	   
	cout << "Array item(s): ";
	for (int k = 0; k < i; k++) {
	        cout << arr[k] << " ";
	    }
	 }
	    cout<<endl;
	    cout << "3rd smallest number: " << arr[2] << endl;
	    cout << "3rd largest number: " << arr[7] << endl;
	
	    return 0;
}