#include <iostream>

using namespace std;

int main(){
	int queue[100], front = 0, rear = 0, counter = 0, num;
	char option;

	for(int i = 0; i < 100; i++){
		queue[i] = 0;
	}

	cout<<"Welcome to Queue Application";
	
	do{
		cout<<"\n\nMenu: ";
		cout<<"\na. Push()\nb. Pop()\nc. Display Item\nd. Exit";
		cout<<"\n\nWhat do you want to do: ";
		cin>> option;


		switch(option){
			case 'a': { //Push()
				if(counter>=5){
					cout<<"Queue overflow!";
				} else {
					cout<<"Enter Integer: ";
					cin>>num;
					queue[rear] = num;
					cout<<"The integer "<<queue[rear]<<" is push() successfully!";
					counter++;
					rear++;
				}
				break;
			}
			case 'b': { //Pop()
				if(counter == 0){
					cout<<"Queue underflow!";
				} else {
					cout<<"The integer "<<queue[front]<<" is pop() successfully!";
					counter--;
					front++;
				}
				break;
			}
			case 'c': { //Display Item
				cout<<"Queue Item: ";
				if(counter<=0){
					cout<<"Queue is empty!";
				} else {
					for(int i=front; i<rear; i++){
						cout<<queue[i]<<" ";
					}
				}
				break;
			}
			case 'e':{ //Secret Display
				cout<<"All Queue Items: ";
				for(int i = 0; i < 100; i++){
					cout<< queue[i] << " ";
				}
			}
		}
	}while(option != 'd');
	
}