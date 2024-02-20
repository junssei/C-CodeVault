#include <iostream>

using namespace std;

int main() {
	
	//still making it
	//create a userinput with their given information
	
	int userInput;
    int age, day, year;
    string firstName, middleName, lastName;
    string prk, provnc, city;
    char reset;
	
    do {
	
	cout << endl;
    cout << "~~~~~~~~~~~~~~~~~Getting-User-Information~~~~~~~~~~~~~~~~~" << endl << endl;
    
    
    cout << "Enter your First Name: "; getline (cin, firstName); cout << endl;
    cout << "Enter your Middle Name: "; cin >> middleName; cout << endl;
    cout << "Enter your Last Name: "; cin >> lastName; cout << endl;
    
    //month array
    string month[13] = 
	{"_","January", "February", "March", "April", "May", "June", "July", 
		"August", "September", "October", "November", "December"
	};
	
	cout << "~~~~~~~~~~~~~~~~~Your-Birthday~~~~~~~~~~~~~~~~~" << endl << endl;
	
	cout << "How old are you: "; cin >> age; cout <<endl;
    cout << "Enter the Month in number: "; cin >> userInput; cout << endl;
    cout << "Enter the Day: "; cin >> day; cout << endl;
    cout << "Enter the Year: "; cin >> year; cout << endl; 
    
    cout << "~~~~~~~~~~~~~~~~~Your-Address~~~~~~~~~~~~~~~~~" << endl << endl;
    
    cout << "Purok/Street : "		; cin >> prk; 		cout << endl;
    cout << "Province/Barangay : "	; cin >> provnc; 	cout << endl;
    cout << "City/Municipality : "	; cin >> city; 		cout << endl;
    
    string fullName = firstName + " " + middleName + " " + lastName;
    string fullAddress = "Purok/Street " + prk + " Barangay/Province " + provnc + " " + city + " City";
    
    cout << "~~~~~~~~~~~~~~~~~User-Information~~~~~~~~~~~~~~~~~" << endl << endl;
    
    cout << "Full Name: " << fullName << endl;
    cout << "Age: " << age << " years old" << endl;
    cout << "Birthday: "<< month[userInput] << " " << day << " " << year << endl;
    cout << "Address: " << fullAddress << endl << endl;
    
    //for repeat
	cout << "Do you want re-submit? Y/y : ";
	cin >> reset;
    
    } while (reset == 'Y' || 'y');
    
    
    }
