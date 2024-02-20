#include <iostream>
#include <fstream>

using namespace std;

int main(){
	char r;
	int size=10;
	int num[size];
	int large, slarge, sslarge;
	
	do{
	cout<<"Enter ten numbers: \n";
	for(int i=1; i<=size; i++){
		cout<<i<<": ";cin>>num[i];
	}
	cout<<"Entered No.: ";
	for(int i=1; i<=size; i++){
		cout<<num[i]<<" ";
	}
	
	//large
	large = num[0];
	for(int i=0; i<=size; i++){
		if(large<num[i]){
			large = num[i];
		}
	}
	
	cout<<"\nThe Largest Number: "<<large<<endl;
	
	
		
	cout<<"\n Do you want to reset? Y/N : ";
	cin>>r;
	}while(r == 'Y' || r == 'y');
	
}