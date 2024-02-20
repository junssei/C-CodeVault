
//Noel
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

    int value[10];
        char r;
do{
    fstream inputfile("userfile.txt");
    if (!inputfile) {
        cout << "Error opening file." << endl;
        return 1;
    }
    cout<<" input the Value"<<endl;

    for (int i = 1; i <=10; i++) {
        cout<<"\nEnter Integer "<<i<<": ";
        cin>>value[i-1];


    inputfile << value[i-1]<<" ";

     sortArray(value, i);

    cout << "Array item(s): "; 
    for (int k = 0; k < i; k++) {
            cout<< value[k]<<" ";
        }
        cout<<endl;
     }

    inputfile.close(); 
    cout<<endl;

        cout << "3rd smallest number: " << value[2] << endl;
        cout << "3rd largest number: " << value[7] << endl;

        cout<<"\n\nYou have reached your tenth input do you want to try again? Y/N : ";
        cin>>r;
}while( r == 'Y' || r == 'y');

    return 0;
}