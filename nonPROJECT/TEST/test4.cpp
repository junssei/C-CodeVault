#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int size=10;
	int arr[size];
	ifstream myfile("file.txt");
	
	if(myfile.is_open()){
		int i = 1;
		while(myfile >> arr[i]){
			i++;
		}
	}
	
	for(int i=1; i<=size; i++){
		cout<<arr[i]<<" ";
	}
	
	ifstream inputFile("file.txt");
    if (!inputFile) {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    vector<int> numbers;
    int num;
    while (inputFile >> num) {
        numbers.push_back(num);
    }

    inputFile.close();

    if (numbers.size() != 10) {
        std::cerr << "File should contain exactly 10 numbers." << std::endl;
        return 1;
    }

    // Sorting the numbers
    sort(numbers.begin(), numbers.end());

    if (numbers.size() < 3) {
        std::cerr << "Not enough numbers in the file." << std::endl;
        return 1;
    }

    // Displaying the 3rd smallest and 3rd largest numbers
    cout << "\n3rd smallest number: " << numbers[2] << std::endl;
    cout << "3rd largest number: " << numbers[numbers.size() - 3] << std::endl;
	
}