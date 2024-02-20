#include <iostream>

using namespace std;

int main(){
    int a,b,c,d;
    
    cout<<"Input four Values of a,b,c, and d:"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    
    //highest to lowest
    //A
    if(a>b && a>c && a>d){
        cout<<" "<<a;
        if(b>c && b>d){
            cout<<" "<<b;
          if(c>d){
              cout<<" "<<c;
          }else if (d>c){
              cout<<" "<<d;
          }else{
              cout<<"invalid";
          }
        }else if(c>b && c>d){
            cout<<" "<<c;
            if(b>d){
              cout<<" "<<b;
          }else if (d>b){
              cout<<" "<<d;
          }else{
              cout<<"invalid";
          }
        }else if(d>b && d>c){
            cout<<" "<<d;
            if(b>c){
              cout<<" "<<b;
          }else if (c>b){
              cout<<" "<<c;
          }else{
              cout<<"invalid";
          }
        }else{
            cout<<"invalid";
        }
        //B
    }else if(b>a && b>c && b>d){
        cout<<" "<<b;
       if(a>c && a>d){
            cout<<" "<<a;
          if(c>d){
              cout<<" "<<c;
          }else if (d>c){
              cout<<" "<<d;
          }else{
              cout<<"invalid";
          }
       }else if(c>a && c>d){
            cout<<" "<<c;
            if(a>d){
              cout<<" "<<a;
          }else if (d>a){
              cout<<" "<<d;
          }else{
              cout<<"invalid";
          }
        }else if(d>a && d>c){
            cout<<" "<<d;
            if(a>c){
              cout<<" "<<a;
          }else if (c>a){
              cout<<" "<<c;
          }else{
              cout<<"invalid";
          }
        }else{
            cout<<"invalid";
        }
        
    //C
    }else if(c>a && c>b && c>d){
        cout<<" "<<c;
        if(a>b && a>d){
            cout<<" "<<a;
          if(b>d){
              cout<<" "<<b;
          }else if (d>b){
              cout<<" "<<d;
          }else{
              cout<<"invalid";
          }
        }else if(b>a && b>d){
            cout<<" "<<b;
            if(a>d){
              cout<<" "<<a;
          }else if (d>a){
              cout<<" "<<d;
          }else{
              cout<<"invalid";
          }
        }else if(d>a && d>b){
            cout<<" "<<d;
            if(a>b){
              cout<<" "<<a;
          }else if (b>a){
              cout<<" "<<b;
          }else{
              cout<<"invalid";
          }
        }else{
        cout<<"invalid";
        }
        
    //D
    }else if(d>a && d>b && d>c){
        cout<<" "<<d;
        if(a>b && a>c){
            cout<<" "<<a;
          if(b>c){
              cout<<" "<<b;
          }else if (c>b){
              cout<<" "<<c;
          }else{
              cout<<"invalid";
          }
        }else if(b>a && b>c){
            cout<<" "<<b;
            if(a>c){
              cout<<" "<<a;
          }else if (c>a){
              cout<<" "<<c;
          }else{
              cout<<"invalid";
          }
        }else if(c>a && c>b){
            cout<<" "<<c;
            if(a>b){
            cout<<" "<<a;
          }else if (b>a){
              cout<<" "<<b;
          }else{
              cout<<"invalid";
          }
        }else{
              cout<<"invalid";
          }
    }else{
              cout<<"invalid";
          } 
          
    //less than
    if(a<b && a<c && a<d){
        cout<<" "<<a;
    }else if(b<a && b<c && b<d){
        cout<<" "<<b;
    }else if(c<a && c<b && c<d){
        cout<<" "<<c;
    }else if(d<a && d<b && d<c){
        cout<<" "<<d;    
    }else{
        cout<<"invalid";
    }
}