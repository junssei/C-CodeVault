#include <iostream>

using namespace std;

int main(){
	char r;
	int size;
	float grade;
	
	do{
	cout<<"How many subject that you want to input: "; cin>>size;
	float subj[size];
	
	for(int i=1; i<=size; i++){
		if(i==1){
			cout<<"Enter your "<<i<<"st subject: ";
			cin>>grade;
			subj[i] = grade;
		} else if (i==2){
			cout<<"Enter your "<<i<<"nd subject: ";
			cin>>grade;
			subj[i] = grade;
		} else if (i==3){
			cout<<"Enter your "<<i<<"rd subject: ";
			cin>>grade;
			subj[i] = grade;
		} else {
			cout<<"Enter your "<<i<<"th subject: ";
			cin>>grade;
			subj[i] = grade;
		}
	}
	
	float average;
	for(int i=1; i<=size; i++){
		average+=subj[i];
	}
	
	float result = average/size;
	
	cout<<"Average: "<<result<<" : ";
	if(result > 98){
		cout<<"With Highest Honor";
	} else if (result < 98 && result >= 95){
		cout<<"With High Honor";
	} else if (result < 95 && result >= 90){
		cout<<"With Honor";
	} else if (result < 90 && result >= 75){
		cout<<"Passed!";
	} else {
		cout<<"Failed!";
	}
	
	average = 0;
	cout<<endl<<"Do you want to enter again? Y/N"; cin>>r;
	}while(r == 'Y' || r == 'y');
}
