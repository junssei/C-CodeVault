#include <iostream>
#include <string>

using namespace std;

// Function to create a folder
void createFolder(const string& fileName) {
    string command = "mkdir \"" + fileName + "\"";
    if (system(command.c_str()) == 0) {
        cout << "Folder '" << fileName << "' created successfully.\n";
    } else {
        cout << "Failed to create folder '" << fileName << "'.\n";
    }
}

// Function to delete a folder
void deleteFolder(const string& fileName) {
    string command = "rmdir /s /q \"" + fileName + "\"";
    if (system(command.c_str()) == 0) {
        cout << "Folder '" << fileName << "' deleted successfully.\n";
    } else {
        cout << "Failed to delete folder '" << fileName << "'.\n";
    }
}

// Function to create a text file
void createTextFile(const string& fileName) {
    string command = "echo. > \"" + fileName + ".txt" + "\"";
    if (system(command.c_str()) == 0) {
        cout << "Text file '" << fileName << "' created successfully.\n";
    } else {
        cout << "Failed to create text file '" << fileName << "'.\n";
    }
}

// Function to delete a text file
void deleteTextFile(const string& fileName) {
    string command = "del \"" + fileName + ".txt"  + "\"";
    if (system(command.c_str()) == 0) {
        cout << "Text file '" << fileName << "' deleted successfully.\n";
    } else {
        cout << "Failed to delete text file '" << fileName << "'.\n";
    }
}

// Function to copy and paste a folder
void copynpasteFolder(const string& fileName, const string& destination){
	string command = "xcopy \"" + fileName + "\"" + " \"" + destination + "\" /t /e";
	if(system(command.c_str()) == 0){
		cout << "Folder '" << fileName << "' copy and paste successfully.\n";
	} else {
		cout << "Failed to copy and paste folder '" << fileName << "'.\n";
	}
}

// Function to copy and paste a text file
void copynpasteTextFile(const string& fileName, const string& destination){
	string command = "xcopy \"" + fileName + ".txt\"" + " \"" + destination + ".txt\"";
	if(system(command.c_str()) == 0){
		cout << "Text file '" << fileName << "' copy and paste successfully.\n";
	} else {
		cout << "Failed to copy and paste text file '" << fileName << "'.\n";
	}
}

int main(){
	string rootFolder = "root";
	string pasteFile;
	string fileName;
	int operation;
	
	while(operation!=7){
	cout<<"Welcome to My File Operation CLI Program!\n";
	cout<<"\n 1. Create New Folder\n 2. Delete Folder\n 3. Create Text File\n 4. Delete Text File";
	cout<<"\n 5. Copy and Paste Text File\n 6. Copy and Paste Folder\n 7. Exit\n\n";
	cout<<"Choose operation: ";  cin>>operation;
	
	if(operation <= 2 && operation > 0){
		cout<<"Folder File Name: "; cin>>fileName;
	} else if(operation >= 2 && operation <= 4){
		cout<<"Text File Name: "; cin>>fileName;
	} else if(operation == 5){
		cout<<"Copy Text File Name: "; cin>>fileName;
		cout<<"Paste Text File Name: "; cin>>pasteFile;
	} else if(operation == 6){
		cout<<"Copy Folder File Name: "; cin>>fileName;
		cout<<"Paste Folder File Name: "; cin>>pasteFile;
	} else if(operation == 7){
		cout<<"Thank you for using My File Operation CLI Program!\n";
	} else {
		cout<<"Invalid Command!\n";
		continue;
	}
	
		switch(operation){
			case 1:{
				createFolder(rootFolder + "\\" + fileName);	
				break;
			}
			case 2:{
				deleteFolder(rootFolder + "\\" + fileName);	
				break;
			}
			case 3:{
				createTextFile(rootFolder + "\\" + fileName);	
				break;
			}
			case 4:{
				deleteTextFile(rootFolder + "\\" + fileName);	
				break;
			}
			case 5:{
				copynpasteTextFile(rootFolder + "\\" + fileName, rootFolder + "\\" + pasteFile);
				break;
			}
			case 6:{
				copynpasteFolder(rootFolder + "\\" + fileName, rootFolder + "\\" + pasteFile);
				break;
			}
		}
		cout<<"\n\n";
	}
}