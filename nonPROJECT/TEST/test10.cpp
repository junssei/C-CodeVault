#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream inputfile("uniquefile.txt");
    if (!inputfile) {
        cout << "Error opening file." << endl;
        return 1;
    }
    int arr[10];
    int num, count = 0;
    while (inputfile >> num && count < 10) {
        arr[count++] = num;
    }
    inputfile.close();

    if (count < 1) {
       fstream inputfile("uniquefile.txt");
        int size;
        cout << "inter the size of the Array." << endl;
        cin>>size;
        for (int i = 0; i <size; i++) {
        cout<<"\nEnter Integer no. "<<i+1<<": ";
        cin>>arr[i];
    	inputfile << arr[i]<<" ";
      }
    	inputfile.close();
    }else{
        for (int k = 0; k < count; k++) {
            cout<< arr[k]<<" ";
        }
        cout<<endl;
        
        cout<<"\n\nThe 3rd Smallest Number: "<<arr[2];
		cout<<"\nThe 3rd Largest Number: "<<arr[7];
     }
    }