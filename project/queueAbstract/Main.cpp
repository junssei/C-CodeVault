//Fernandez BSIT-2
#include <iostream>
#include "MyQueue.cpp"	 //offcomment, if your abstract file same directory of your main file
//#include <MyQueue.cpp> //offcomment, if you have your abstract file to include folder
using namespace std;

int main(){
	myQueue queue; //structure name, identifier
	int operation, num;
	
	cout<<"\tWelcome to my Queue Applications";
	
	cout<<"\n\n\tChoose operation: ";
	cout<<"\n\n\t1.) Enqueue\n\t2.) Dequeue\n\t3.) Display Queue Items";
	cout<<"\n\t4.) Display Rear Item\n\t5.) Display Front Item\n\t6.) Display Queue Size";
	cout<<"\n\t7.) Exit";
	
	do{
	cout<<"\n\n\tOption: "; cin>>operation;
	switch(operation){
		case 1: { //Push, Enqueue
			cout<<"\tEnter Integer: "; cin>>num;
			queue.enQueue(num);
			break;
		}
		case 2: { //Pop, Dequeue
			queue.deQueue();
			break;
		}
		case 3: { //Display Queue Items
			queue.displayQueue();
			break;
		}
		case 4: { //Display Rear
			cout<<"\tRear: "<<queue.displayRear();
			break;
		}
		case 5: { //Display Front
			cout<<"\tFront: "<<queue.displayFront();
			break;
		}
		case 6: { //Display Queue Size
			cout<<"\tQueue Size: "<<queue.sizeOfQueue();
			break;
		}
	}
	
	}while(operation!=7);
}