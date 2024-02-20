#include <iostream>

using namespace std;

int main(){
	
	int numbr[10];
	
	for(int i=1;i<=10;i++){
		numbr[i] = 0;
	}
	
	cout<<"Enter a ten numbers: "<<endl;
	for(int i=1;i<=10;i++){
		cout<<i << " : ";
		cin>>numbr[i];
	}
	
	cout<<endl;
	
	for(int i=10;i>=1; i--){
		cout<<i<<" : "<<numbr[i] << endl;
	}
	
}