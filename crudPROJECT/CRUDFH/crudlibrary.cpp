/*
JUNE VINCENT FERNANDEZ, MOHAMMAD ABDULMANAN, FRANCIS MALIAO
BSIT-1 2ND SEM
05/7/2023
*/

#include <iostream>
#include <cstring>
#include <fstream>
#include <cctype>
#include <ctime>

using namespace std;

const int maxrow = 100;

//global array
string studID[maxrow] 	= {};
string studName[maxrow] = {};
string studPurp[maxrow] = {};
string studDate[maxrow] = {};
string studTime[maxrow] = {};

void openFile(){
	string line;
	ifstream myfile("student.txt");
 	if (myfile.is_open()){
    int i = 0;
    while (getline(myfile, line)) {
        int l = line.length();
        studDate[i] = line.substr(0, 27);
        studTime[i] = line.substr(28, 8);
        studID	[i] = line.substr(37, 7);
        studPurp[i] = line.substr(45, 8);
        studName[i] = line.substr(54, 20);
        i++;
    	}
	} else {
	cout<<"===============================ENABLE TO OPEN THE FILE!===============================\n";
	}
	}

void create(){//create
	char id[8], name[50];
	string purpose, time, date = __DATE__;
	int textLength = date.length();
	
	cin.ignore();
	cout<<"======================================================================================\n";
	cout<<"==========================NOTE: DONT USE '-' INPUTTING AN ID==========================\n";
	cout<<"=======================PURPOSE: STUDY, RESEARCH, BORROW, RETURN=======================\n";
	cout<<"======================================================================================\n\n";
	cout<<"======================================================================================\n";
	cout<<"========================================CREATE========================================\n";
	cout<<"======================================================================================\n";
	cout<<"  ID\n";
	cout<<"  >";cin.getline(id, 8);
	for (char& c : id) {
        c = toupper(c);}
    cout<<"  NAME\n";
	cout<<"  >";cin.getline(name, 50);
	for (char& c : name) {
        c = toupper(c);}
    cout<<"  PURPOSE\n";
	cout<<"  >"; getline(cin, purpose);
	for (char& c : purpose) {
        c = toupper(c);}
	
	//DATE
	if(textLength = 12){
	date = date + "                ";
	} else if (textLength = 13){
	date = date + "               ";	
	} else if (textLength = 14){
	date = date + "              ";	
	} else if (textLength = 15){
	date = date + "             ";	
	} else if (textLength = 16){
	date = date + "            ";	
	} else if (textLength = 17){
	date = date + "           ";	
	} else if (textLength = 18){
	date = date + "          ";
	}
	
	//TIME
	time = __TIME__;
	
	system("CLS");
	cout<<"======================================================================================\n";
	cout<<"                                 CREATED SUCCESSFULLY                                 \n";
	cout<<"======================================================================================\n";
	
	for(int i=0; i<maxrow; i++){
		if(studID[i] == "\0"){
			studID[i] 	= id;
			studName[i] = name;
		if(purpose == "STUDY"){
			studPurp[i] = purpose + "   ";
		} else if (purpose == "BORROW"){
			studPurp[i] = purpose + "  ";
		} else if (purpose == "RETURN"){
			studPurp[i] = purpose + "  ";
		} else {
			studPurp[i] = purpose;
		}
			studDate[i] = date;
			studTime[i] = time;
			break;
		}
	}
}

void dsp(){//read
	system("CLS");
	string purpose;
	cout<<"======================================================================================\n";
	cout<<"=======================================DISPLAYY=======================================\n";
	cout<<"======================================================================================\n";
	
	int counter = 0;
	cout<<"   DATE                        | TIME     | ID      | PURPOSE	| NAME               \n";
	cout<<"======================================================================================\n";
	for (int i=0; i<maxrow; i++){
		if(studID[i] != "\0"){
			counter++;
			cout<< "   " << studDate[i] << "   " << studTime[i] << "   " << studID[i] << "   " << studPurp[i] << "	  " << studName[i] << endl; 
		}
	}
	
	if(counter == 0){
	cout<<"\n                                   NO RECORD FOUND                                    \n";
	}
	cout<<"\n                           "<<system("pause");
	system("CLS");
}

void upd(){//update
	char id[8], name[50];
	string purpose, time, date = __DATE__;
	int textLength = date.length();
	int counter = 0, index;
	
	cin.ignore();
	cout<<"======================================================================================\n";
	cout<<"======================================EXISTED ID======================================\n";
	cout<<"======================================================================================\n";
	for(int i=0; i<maxrow; i++){
		if(studID[i] != "\0"){
		counter++;
		cout<<"  ["<<i<<"] "<<studID[i];
		}
	}
	cout<<endl;
	if (counter == 0){
	cout<<"                                   NO RECORD FOUND                                    \n\n";
	}
	cout<<"======================================================================================\n";
	cout<<"========================================UPDATE========================================\n";
	cout<<"======================================================================================\n";
	if (counter == 0){ cout<<"\n                           "<<system("pause"); system("CLS"); return;}
	
	counter = 0;
	cout<<"  Index\n";
	cout<<"  >";
	cin>>index;
	cin.ignore();
	system("CLS");
	
	cout<<"======================================================================================\n";
	cout<<"==========================NOTE: DONT USE '-' INPUTTING AN ID==========================\n";
	cout<<"=======================PURPOSE: STUDY, RESEARCH, BORROW, RETURN=======================\n";
	cout<<"======================================================================================\n";
	cout<<"======================================================================================\n";
	cout<<"                                UPDATING INDEX #"<<index<<" "<<studID[index]<<endl;
	cout<<"======================================================================================\n";
	
	for(int i=0; i<maxrow; i++){
		if(i == index){ //stud[i] = stud[index] (before)
			counter++;
			cout<<"  ID\n";
			cout<<"  >";cin.getline(id, 8);
			for (char& c : id) {
        		c = toupper(c);}
    		cout<<"  NAME\n";
			cout<<"  >";cin.getline(name, 50);
			for (char& c : name) {
        		c = toupper(c);	 }
    		cout<<"  PURPOSE\n";
			cout<<"  >"; getline(cin, purpose);
			for (char& c : purpose) {
        		c = toupper(c);}
			
			//DATE
			if(textLength = 12){
			date = date + "                ";
			} else if (textLength = 13){
			date = date + "               ";	
			} else if (textLength = 14){
			date = date + "              ";	
			} else if (textLength = 15){
			date = date + "             ";	
			} else if (textLength = 16){
			date = date + "            ";	
			} else if (textLength = 17){
			date = date + "           ";	
			} else if (textLength = 18){
			date = date + "          ";
			}
			//TIME
			time = __TIME__;
			//UPDATE
			studID[i] 	= id;
			studName[i] = name;
			if(purpose == "STUDY"){
			studPurp[i] = purpose + "   ";
			} else if (purpose == "BORROW"){
			studPurp[i] = purpose + "  ";
			} else if (purpose == "RETURN"){
			studPurp[i] = purpose + "  ";
			} else {
			studPurp[i] = purpose;
			}
			studDate[i] = date;
			studTime[i] = time;
		}
	}
	if(counter == 0){
	system("CLS");
	cout<<"======================================================================================\n";
	cout<<"                               YOU ENTERED WRONG INDEX                                \n";
	cout<<"======================================================================================\n";
	} else {
	system("CLS");
	cout<<"======================================================================================\n";
	cout<<"                                 UPDATED SUCCESSFULLY                                 \n";
	cout<<"======================================================================================\n";
	}
}

void del(){//delete
	char id[8];
	int counter = 0, index;
	
	cin.ignore();
	cout<<"======================================================================================\n";
	cout<<"======================================EXISTED ID======================================\n";
	cout<<"======================================================================================\n";
	for(int i=0; i<maxrow; i++){
		if(studID[i] != "\0"){
		counter++;
		cout<<" ["<<i<<"] "<<studID[i]<<" ";
		}
	}
	cout<<endl;
	if (counter == 0){
	cout<<"                                   NO RECORD FOUND                                    \n\n";	
	}
	cout<<"======================================================================================\n";
	cout<<"========================================DELETE========================================\n";
	cout<<"======================================================================================\n";
	if (counter == 0){ cout<<"\n                           "<<system("pause"); system("CLS"); return;}
	
	counter = 0;
	cout<<" Index\n";
	cout<<" >";
	cin>>index;
	
	cin.ignore();
	//TRY #1
	/*
	for(int i=0; i<maxrow; i++){
		if(i == index){
			counter++;
			studID[i] 	= "";
			studName[i] = "";
			studPurp[i] = "";
			studDate[i] = "";
			studTime[i] = "";
		}
	}
	*/
	//TRY #2
	if (index >= 0 && index < maxrow) { // if the index is valid
        for (int i = index; i < maxrow - 1; i++) {
    	studID[i] = studID[i+1];
    	studName[i] = studName[i+1];
    	studPurp[i] = studPurp[i+1];
    	studDate[i] = studDate[i+1];
    	studTime[i] = studTime[i+1];
		}
		counter++;
        studID[maxrow - 1] = "";
		studName[maxrow - 1] = "";
		studPurp[maxrow - 1] = "";
		studDate[maxrow - 1] = "";
		studTime[maxrow - 1] = "";
        cout << "The element at index " << index << " has been deleted from the array.\n";
    } else { // if the index is invalid
        cout << "Invalid index. Please enter an index between 0 and " << maxrow-1 << ".\n";
    }
	//DELETE
	/*
	for(int i=0; i<maxrow; i++){
		if(studID[i] == studID[index]){
			counter++;
			studID[i] 	= "";
			studName[i] = "";
			studPurp[i] = "";
			studDate[i] = "";
			studTime[i] = "";
		}
	}
	*/
	if(counter == 0){
	system("CLS");
	cout<<"======================================================================================\n";
	cout<<"                               YOU ENTERED WRONG INDEX                                \n";
	cout<<"======================================================================================\n";
	} else {
	system("CLS");
	cout<<"======================================================================================\n";
	cout<<"                                 DELETED SUCCESSFULLY                                 \n";
	cout<<"======================================================================================\n";
	}
}

void savetoFile(){
	ofstream myfile;
	myfile.open("student.txt");
	
	for(int i=0; i<maxrow; i++){
		if(studID[i] == "\0"){
			break;
		} else {
			myfile << studDate[i] + "," + studTime[i] + "," + studID[i] + "," + studPurp[i] + "," + studName[i] << endl;
		}
	}
}

int main(){
	int option, check = 0;
	string id;
	openFile();
	do{
	system("color F");
	cout<<"======================================================================================\n";
	cout<<"==================================WELCOME=TO=LIBRARY==================================\n";
	cout<<"======================================================================================\n";
	cout<<"               [1] CREATE [2] READ [3] UPDATE [4] DELETE [5] EXIT & SAVE              \n";
	cout<<"========================================OPTION========================================\n";
	cout<<"                                           "; cin>>option;
	
	switch(option){
	case 1: {//create
	system("CLS");
	system("color A");
	create();
	break;
	}
	case 2: {//display
	system("CLS");
	system("color B");
	dsp();
	break;
	}
	case 3: {//update
	system("CLS");
	system("color 9");
	upd();
	break;
	}
	case 4: {//delete
	system("CLS");
	system("color C");
	del();
	break;
	}
	}
	}while(option != 5);
	savetoFile();
	system("CLS");
	system("color D");
	cout<<"======================================================================================\n";
	cout<< "                               Exit.... Saving to File!                              \n";
	cout<<"======================================================================================\n";
	return 0;
}
