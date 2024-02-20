#include <iostream>

using namespace std;

int main() {
	
	int choice, looper=0;
	
	cout << "Enter a number for the pattern: ";
	cin >> choice;
	
	for(int j=0; j<=choice; j++){
		for(int i=choice-looper; i>=1; i--){
		cout << "*";
	}
	looper++;
	cout << endl;
	}
}