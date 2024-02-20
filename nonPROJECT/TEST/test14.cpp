#include <iostream>

using namespace std;

int main(){
	int max = 10;
	int arr[max];
	int top = -1;
	
	cout<<arr.maxsize();
	
	for(int i = 0; i < max; i++){
		cin>>arr[top];
	}
	
	for(int i = 0; i < 10; i++){
		cout<<arr[top++]<<endl;
	}
	
}