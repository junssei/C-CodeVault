#include <iostream>
using namespace std;

struct myQueue{
	private:
	int queue[100], rear = 0, front = 0, counter = 0, size;
	
	public:
		void enQueue(int num){
			if(counter>=5) {
				cout<<"\tQueue overflow!";
			} else {
				queue[rear] = num;
				cout<<"\tThe integer "<<queue[rear]<<" is push() successfully!";
				counter++;
				rear++;
			}
		}
		
		void deQueue(){
			if(counter == 0) {
				cout<<"\tQueue underflow!";
			} else {
				cout<<"\tThe integer "<<queue[front]<<" is pop() successfully!";
				counter--;
				front++;
			}
		}
		
		void displayQueue(){
			cout<<"\tQueue Item: ";
			if(counter<=0) {
				cout<<"\tQueue is empty!";
			} else {
				for(int i=front; i<rear; i++) {
					cout<<queue[i]<<" ";
				}
			}
		}
		
		int displayRear(){
			int drear;
			if(counter<=0){
				cout<<"\tQueue is empty!";
			} else {
				drear = queue[rear-1];
			}
			
			return drear;
		}
		
		int displayFront(){
			int dfront;
			if(counter<=0){
				cout<<"\tQueue is empty!";
			} else{
				dfront = queue[front];
			}
			
			return dfront;
		}
		
		int sizeOfQueue(){
			return counter;
		}
	
};