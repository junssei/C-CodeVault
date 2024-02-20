#include <iostream>
#include <string>

using namespace std;

// Function to create a folder
void createFolder(const string& folderName) {
    string command = "mkdir \"" + folderName + "\"";
    if (system(command.c_str()) == 0) {
        cout << "Folder '" << folderName << "' created successfully.\n";
    } else {
        cout << "Failed to create folder '" << folderName << "'.\n";
    }
}

// Function to delete a folder
void deleteFolder(const string& folderName) {
    string command = "rmdir /s /q \"" + folderName + "\"";
    if (system(command.c_str()) == 0) {
        cout << "Folder '" << folderName << "' deleted successfully.\n";
    } else {
        cout << "Failed to delete folder '" << folderName << "'.\n";
    }
}

// Function to create a text file
void createTextFile(const string& fileName) {
    string command = "echo. > \"" + fileName + "\"";
    if (system(command.c_str()) == 0) {
        cout << "Text file '" << fileName << "' created successfully.\n";
    } else {
        cout << "Failed to create text file '" << fileName << "'.\n";
    }
}

// Function to delete a text file
void deleteTextFile(const string& fileName) {
    string command = "del \"" + fileName + "\"";
    if (system(command.c_str()) == 0) {
        cout << "Text file '" << fileName << "' deleted successfully.\n";
    } else {
        cout << "Failed to delete text file '" << fileName << "'.\n";
    }
}

int main() {
    string rootFolder = "John"; // Change this to your first name

    string command;
    string arg;

    cout << "Welcome to Basic File Operations CLI\n";
    cout << "Root Folder: " << rootFolder << "\n";

    while (true) {
        cout << "\nEnter command (create_folder, delete_folder, create_file, delete_file): ";
        cin >> command;

        if (command == "create_folder" || command == "delete_folder" || command == "create_file" || command == "delete_file") {
            cout << "Enter argument: ";
            cin >> arg;
        } else {
            cout << "Invalid command\n";
            continue;
        }

        if (command == "create_folder") {
            createFolder(rootFolder + "\\" + arg);
        } else if (command == "delete_folder") {
            deleteFolder(rootFolder + "\\" + arg);
        } else if (command == "create_file") {
            createTextFile(rootFolder + "\\" + arg);
        } else if (command == "delete_file") {
            deleteTextFile(rootFolder + "\\" + arg);
        }
    }

    return 0;
}