#include <iostream>
#include <fstream>

using namespace std;

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    ifstream inputFile("file.txt");
    if (!inputFile) {
        cout << "Error opening file." << endl;
        return 1;
    }
    
    int numbers[10];
    int num, count = 0;
    while (inputFile >> num && count < 10) {
        numbers[count++] = num;
    }

    inputFile.close();
	
    if (count != 10) {
        cout << "File should contain exactly 10 numbers." << endl;
        return 1;
    }

	// Displaying all integers from the file
    cout << "Entered No: ";
    for (int i = 0; i < 10; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;
	
    // Sorting the array manually
    sortArray(numbers, 10);

    // Displaying the 3rd smallest and 3rd largest numbers
    cout << "3rd smallest number: " << numbers[2] << endl;
    cout << "3rd largest number: " << numbers[7] << endl;

    return 0;
}