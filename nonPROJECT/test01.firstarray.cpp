#include <iostream>

using namespace std;

//my first made array activity : test01

int main() {
    int size=5, evenCounter=0, oddCounter=0;
    string user;
    
    int Arr1D[size];
    
    do {
	
	for(int i=0; i<size; i++){
        cin >> Arr1D[i];
        
        if (Arr1D[i]%2==0){
           cout << Arr1D[i] << " is even" << endl; evenCounter++;
        } else {
          oddCounter++; cout << Arr1D[i] << " is odd" << endl;
        }
    }

    cout << "There are " << evenCounter << " even numbers" << endl;
    cout << "There are " << oddCounter << " ood numbers" << endl;
    cout << endl;
    
    cout << "Do you wish to re-enter the data? ";
    cin >> user;
    
	} while (user == "y" || "yes" || "Yes"  || "Y");
}
