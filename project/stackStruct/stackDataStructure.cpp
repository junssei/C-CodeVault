//Making Stack without using library
//Notify the user whether the stack is full or empty

#include <iostream>

using namespace std;
	
	int stack[10], top=-1;
	
	void push(int val) {
	   if(top >= 5-1)
	   cout<<"\tStack Overflow"<<endl;
	   else {
	      top++;
	      stack[top]=val;
   		}
	}

	void pop() {
	   if(top<=-1)
	   cout<<"\tStack is empty"<<endl;
	   else {
	      cout<<"\tThe popped element is "<< stack[top] <<endl;
	      top--;
	   }
	}
	
	void display() {
	   if(top>=0) {
	   		cout<<endl;
	      for(int i=top; i>=0; i--)
	      cout<<"\t"<<stack[i]<<endl;
	      cout<<endl;
	   } else
	   cout<<"\tStack is empty";
	}
	
int main(){
	char operation;
	cout<<"\n\tWelcome to my Stack Application";
	
	do{
	//All options display
	cout<<"\n\n\tWhat would you like to do: ";
	cout<<"\n\n\t\ta. Push\n\t\tb. Pop\n\t\tc. Display Items\n\t\td. Exit";
	
	cout<<"\n\n\tChoose operation: "; cin>>operation;
	
	int num;
	if(operation == 'a'){//Push
		cout<<"\n\tEnter integer: "; cin>>num;
		push(num);
		
	} else if (operation == 'b'){//Pop
		cout<<endl;
		pop();
		
	} else if (operation == 'c'){//Display Items
		cout<<"\n\tStack Items: ";
		display();
		
	} else {
		return 0;
	}
	
	}while(operation != 'd');
}