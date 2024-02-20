#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

int main() {
    std::ifstream inputFile("file.txt");
    if (!inputFile) {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    std::vector<int> numbers;
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
    std::sort(numbers.begin(), numbers.end());

    if (numbers.size() < 3) {
        std::cerr << "Not enough numbers in the file." << std::endl;
        return 1;
    }

    // Displaying the 3rd smallest and 3rd largest numbers
    std::cout << "3rd smallest number: " << numbers[2] << std::endl;
    std::cout << "3rd largest number: " << numbers[numbers.size() - 3] << std::endl;

    return 0;
}