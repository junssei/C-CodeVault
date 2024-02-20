//group members: fernandez, 

#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

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
