//group members: fernandez, 

#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

const int maxrow = 100;

string UserID[maxrow]	= {};
string UserName[maxrow] = {};
string UserWish[maxrow]	= {};
string within[maxrow]	= {};
string within1[maxrow] 	= {};

void addList(){//add function
	char id[5];
	string name;
	string wish;
	string with, with1;
	
	cin.ignore();
	
	cout<<"ID: ";
	cin.getline(id, 5);
	cout<<"Name: ";
	getline(cin, name);
	cout<<"Wish: ";
	getline(cin, wish);
	
	for(int i = 0; i<maxrow; i++){
		if (UserName[i] == "\0"){	
			UserID[i] = id;
			UserName[i] = name;
			UserWish[i] = wish;
			within[i]	= with;
			within1[i]	= with1;
			
			break;
		}
	}
}
void listRecord(){//listrecord function
	system("CLS");
	cout<<" 		List" << endl;
	cout<<"_________________________________________________" << endl;
	
	cout<<"No.	|ID	|Name		|	Wish" << endl;
	int counter = 0;
	string addcoma, addcoma1;
	for(int i = 0; i < maxrow; i++){
		if(within[i] != "\0"){
			addcoma = ", ";
		}
		if(within1[i] != "\0"){
			addcoma1 = ", ";
		}
		
		if(UserName[i] != "\0")
		{	
			counter++;
			cout << counter << "	|" << UserID[i] << "	|" << UserName[i] << "		 " << UserWish[i] << addcoma << within[i] << addcoma1 << within1[i];
			cout<< endl;
		}
	}
	
	if (counter == 0){
		system("CLS");
		cout << endl << "		No Record found!" << endl;
	}
	cout<< endl << "................................................." << endl << endl;
}
void deleteList(string check, string option){
	int counter = 0;
	
	for(int i = 0; i < maxrow; i++){
		if(UserID[i] == check){
			counter++;
			if(option == "name"){
			
			UserName[i] = "";
			
			system("CLS");
			cout << endl << "		Delete Successful! " << endl;
			} else if (option == "wish"){
			counter++;
			
			UserWish[i] = "";
			within[i]	= "";
			within1[i]	= "";
			
			system("CLS");
			cout << endl << "		Delete Successful! " << endl;
			} else if (option == "id"){
			counter++;
			
			UserID[i] = "";
			
			system("CLS");
			cout << endl << "		Delete Successful! " << endl;
			} else{
			counter++;
			
			UserID[i]	= "";
			UserName[i] = "";
			UserWish[i] = "";
			within[i]	= "";
			within1[i]	= "";
			
			system("CLS");
			cout << endl << "		Delete Successful! " << endl;
		}
		}
	}
	if (counter == 0){
		cout << endl << "		No ID found!" << endl;
	}
	cout<< endl << "................................................." << endl << endl;
}

//fernandez

void updateList(string check, string option){//update list function
	string name;
	string wish;
	char id[5];
	
	int counter = 0;
	
	for(int i = 0; i < maxrow; i++){
		if(UserID[i] == check){
			counter++;
			if(option == "name"){
			cout << "Name: ";
			getline(cin, name);
			UserName[i] = name;
			
			system("CLS");
			cout << endl << "		Update Successful! " << endl;
		} else if (option == "wish"){
			counter++;
			cout << "Wish: ";
			getline(cin, wish);
			UserWish[i] = wish;
			
			system("CLS");
			cout << endl << "		Update Successful! " << endl;
		} else if(option == "id"){
			counter++;
			cout << "ID: ";
			cin.getline(id, 5);
			UserID[i] = id;
			
			system("CLS");
			cout << endl << "		Update Successful! " << endl;
		} else{
			counter++;
			cout << "Name: ";
			getline(cin, name);
			cout << "Wish: ";
			getline(cin, wish);
			
			UserName[i] = name;
			UserWish[i] = wish;
			
			system("CLS");
			cout << endl << "		Update Successful! " << endl;
		}
		}
	}
	if (counter == 0){
		system("CLS");
		cout << endl << "		No ID found!" << endl;
	}
	cout<< endl << "................................................." << endl << endl;
}
void checkList(string check){//checklist function
	system("CLS");
	cout<<"		 Checking" << endl;
	cout<<"_________________________________________________" << endl;
	cout<<"No.	|ID	|Name		|	Wish" << endl;
	
	int counter = 0;
	string addcoma, addcoma1;
	for(int i = 0; i < maxrow; i++){
		if(within[i] != "\0"){
			addcoma = ", ";
		}
		if(within1[i] != "\0"){
			addcoma1 = ", ";
		}
		
		if(UserID[i] == check)
		{
			counter++;
			cout << counter << "	|" << UserID[i] << "	|" << UserName[i] << "		" << UserWish[i] << addcoma << within[i] << addcoma1 << within1[i];
			cout << endl;
		} //fernandez
	}
	if (counter == 0){
		system("CLS");
		cout << endl << "		No ID found!" << endl;
	}
	cout<< endl << "................................................." << endl << endl;
}
void insertList(int index){//insertlist function
	char id[5];
	string name, wish, with, with1;
	int counter = 0, count = 0;
	
	for(int i=0; i<maxrow; i++){
		if(UserID[i] != "\0"){
		count++;
		}
	}
		cin.ignore();
		cout<<"ID: ";
		cin.getline(id, 5);
		cout<<"Name: ";
		getline(cin, name);
		cout<<"Wish: ";
		getline(cin, wish);
	
		int n = count;
		for(int i=n-1; i>=index; i--){
		UserID[i+1] = UserID[i];
		UserName[i+1] = UserName[i];
		UserWish[i+1] = UserWish[i];
		within[i+1]	  = within[i];
		within1[i+1]  = within1[i];
		}
		
		UserID[index] 	= id;
		UserName[index] = name;
		UserWish[index] = wish;
		within[index] 	= with;
		within1[index]	= with1;
		
		system("CLS");
		cout << endl << "		Insert Successful! " << endl;
	
	if (count == 0){
		system("CLS");
		cout << endl << "		No Record Found!" << endl;
	}
	cout<< endl << "................................................." << endl << endl;
}
void addwithin(string check){//addwithin function
	string wish;
	
	int counter = 0;
	for(int i = 0; i<maxrow; i++){
		if(UserID[i] == check){
			counter++;
			cout<<"Add more wish: ";
			getline(cin, wish);
			
			if(UserWish[i] == "\0"){
				UserWish[i] = wish;
			} else if(within[i] == "\0"){
				if(within[i] != wish && UserWish[i] != wish && within1[i] != wish) {
				within[i] = wish;
				system("CLS");
				cout << endl << "		Add Successful! " << endl;
				} else {
				do{
				cout<<"Enter another wish: (wish is already on the list to specific ID)";
				getline(cin, wish);
				} while(within[i] == wish || UserWish[i] == wish);
				
				within[i] = wish;
				system("CLS");
				cout << endl << "		Add Successful! " << endl;
				}
			} else if(within1[i] == "\0"){
				if(within1[i] != wish && within[i] != wish && UserWish[i] != wish) {
				within1[i] = wish;
				system("CLS");
				cout << endl << "		Add Successful! " << endl;
				} else {
				do{
				cout<<"Enter another wish: (wish is already on specific list)";
				getline(cin, wish);
				} while(within1[i] == wish || within[i] == wish || UserWish[i] == wish);
				
				within1[i] = wish;
				system("CLS");
				cout << endl << "		Add Successful! " << endl;
				}
			}
		}
	}
	if (counter == 0){
		system("CLS");
		cout << endl << "		No ID found!" << endl;
		}
	cout<< endl << "................................................." << endl << endl;
}
void deletewithin(string check){//deletewithin function
	string wish;
	
	int counter = 0;
	for(int i=0; i<maxrow; i++){
		if(UserID[i] == check){
			counter++;
			cout<<"Which one of the wish do you want to delete: ";
			getline(cin, wish);
			if(within[i] == wish){
			within[i] = "";
			
			system("CLS");
			cout << endl << "		Delete Successful! " << endl;
			} else if(UserWish[i] == wish){
				UserWish[i] = "";
			
			system("CLS");
			cout << endl << "		Delete Successful! " << endl;
			} else if(within1[i] == wish){
				within1[i] = "";
				
			system("CLS");
			cout << endl << "		Delete Successful! " << endl;
			}
		}
	}
	
	if (counter == 0){
		system("CLS");
		cout << endl << "		No ID found!" << endl;
	}
	cout<< endl << "................................................." << endl << endl;
}

//fernandez
void updatewithin(string check){//updatewithin function
	string wish;
	
	int counter = 0;
	for(int i=0; i<maxrow; i++){
		if(UserID[i] == check){
			counter++;
			cout<<"Which one of the wish you want to update: ";
			getline(cin, wish);
			if(within[i] == wish){
			cout<<"New Wish: ";
			getline(cin, wish);
			within[i] = wish;
			
			system("CLS");
			cout << endl << "		Update Successful! " << endl;
			} else if(UserWish[i] == wish){
				cout<<"New Wish: ";
				getline(cin, wish);
				UserWish[i] = wish;
			
			system("CLS");
			cout << endl << "		Update Successful! " << endl;
			} else if(within1[i] == wish){
				cout<<"New Wish: ";
				getline(cin, wish);
				within1[i] = wish;
			
			system("CLS");
			cout << endl << "		Update Successful! " << endl;
			}
			else {
				cout<<" No wish found/Not Entered Correctly ";
			}
		}
	}
	if (counter==0){
		system("CLS");
		cout << endl << "		No ID found!" << endl;
	}
	cout<< endl << "................................................." << endl << endl;
}

int main(){
	int option;
	int index;
	string userid;
	string updoption;
	
	do{
	cout<<"	Merry Christmas and Happy New Year " << endl;
	cout<<"	    What is your wish for 2023? " << endl;
	cout<<"_________________________________________________" << endl;
	cout<<"[1] Add List	[2] View List	 [3] Delete List" << endl;
	cout<<"[4] Update List [5] Check List	 [6] Insert List" << endl;
	cout<<"		[7] Exit Now" << endl;
	cout<<"_________________WITH IN THE LIST________________" << endl;
	cout<<"[8] Add List	[9] Delete List	 [10] Update List" << endl;
	cout<<"................................................." << endl;
	cout<<"Option >> "; cin>>option;
	
	switch(option){
		case 1: {//add
			addList();
			system("CLS");
			break;
		}
		case 2: {//viewlist
			listRecord();
			break;
		}
		case 3: {//delete
			cin.ignore();
			
			cout<<"Enter the ID that you want to delete: ";
			getline(cin, userid);
			cout<<"Which one you want to delete: (Enter: 'id' or 'name' or 'wish' or 'all' = type anything considered all'): ";
			getline(cin, updoption);
			deleteList(userid, updoption);
			break;
		}
		case 4: {//update
			cin.ignore();
			
			cout<<"Enter the ID that you want to update: ";
			getline(cin, userid);
			cout<<"Which one you want to update: (Enter: 'id' or 'name' or 'wish' or 'both' = type anything considered both'): ";
			getline(cin, updoption);
			updateList(userid, updoption);
			break;
		}
		case 5: {//check
			cin.ignore();
			
			cout<< "Enter the ID to check the specific identity/list: ";
			getline(cin, userid);
			checkList(userid);
			break;
		}
		case 6: {//insert
			cin.ignore();
			
			cout<< "Which index you want to add a list: ";
			cin>>index;
			insertList(index);
			break;
		}
		case 8: {//add within the list
			cin.ignore();
			
			cout<<"Enter the ID that you want to add another within the wish list: ";
			getline(cin, userid);
			addwithin(userid);
			break;
		}
		case 9: {//delete within the list
			cin.ignore();
			
			cout<<"Enter the ID that you want to delete within the wish list: ";
			getline(cin, userid);
			deletewithin(userid);
			break;
		}
		case 10: {
			cin.ignore();
			
			cout<<"Enter the ID that you want to update within the wish list: ";
			getline(cin, userid);
			updatewithin(userid);
			break;
		}
	}
	
	} while (option != 7);
	
}
