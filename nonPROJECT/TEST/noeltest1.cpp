//noel
//updated
#include <iostream>
using namespace std;

int main(){
    char opt;//picker
    int size = 1;//array size
    int array[size] = {0,0};//array value
    cout<<"Welcome to my stack application"<<endl;//design
do{
    cout<<"What would you like to do? "<<endl;//design
    cout<<"a. Push"<<endl;//choices
    cout<<"b. Pop"<<endl;//choices
    cout<<"c. Display items"<<endl;//choices
    cout<<"d. Exit"<<endl;//choices
    cout<<"Choose an operation: ";
    cin>>opt;//choice input
    //stack limit reminder
    if(size == 10){
        cout<<"Stack Overflow"<<endl;
        opt = 'd';
    }else{
    switch(opt){
        //Push
        case 'a': {
            for(int i=0; i<size; i++){
            if(array[i] == 0 ){
                    cout<<"Enter integer: ";
                    cin>>array[i];
                    array[i+1] = 0;
                    break;
                }
            }
            size++;
            break;
        }
        //Pop
        case 'b':{
            for(int i=0; i<size; i++){
                if(array[i] == 0){
                    array[i-1] = 0;
                    size -= 1;
                }
            }
            break;
        }
        //Display Item
        case 'c':{
            int counter = 1;
            cout<<"Stack Item/s: "<<endl;
                for(int i=size-counter; i>=0; i--){
                    if(array[i] != 0){
                        cout<<array[i]<<" "<<endl;
                    }
                }
            break;
        }
    }
}
    //stack limit reminder when reaching 0 value
    if(size == 0){
        cout<<"Stack Underflow"<<endl;
        opt = 'd';
        }
    cout<<"\n\n";//space

}while(opt != 'd');//exit

}