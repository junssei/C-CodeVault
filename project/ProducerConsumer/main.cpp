#include <iostream>

using namespace std;

const int BUFFER_SIZE = 5;
int buffer[BUFFER_SIZE];
int count = 0;

void produce() {
    if (count < BUFFER_SIZE) {
        int value;
        cout << "Enter the value to produce: ";
        cin >> value;
        buffer[count++] = value;
        cout << "Produced value: " << value << endl;
    } else {
        cout << "Buffer is full. Cannot produce." << endl;
    }
}

void consume() {
    if (count > 0) {
        int value = buffer[--count];
        cout << "Consumed value: " << value << endl;
    } else {
        cout << "Buffer is empty. Cannot consume." << endl; 
    }
}

int main() {
    int choice;
    do {
        cout << "1. Produce\t2. Consume\t3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                produce();
                break;
            case 2:
                consume();
                break;
            case 3:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
