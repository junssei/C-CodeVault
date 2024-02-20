#include <iostream>

using namespace std;

int main(){
	
	int size = 10, person[size];
	
	cout<<"Welcome to the Sales Data Analyzer\n"<<endl;
	cout<<"Enter the sales figures for "<<size<<" salespeople: \n";
	
	for(int i = 0; i < size; i++){
		cout<<"Salesperson #"<<i+1<<": $";
		cin>>person[i]; 
	}
	
	cout<<"............................................................";
	int highest = person[0], lowest = person[0], total;
	
	for(int i = 0; i < size; i++){
		total += person[i];
		
		if(person[i] > highest){
			highest = person[i];
		}
		if(person[i] < lowest){
			lowest = person[i];
		}
	}
	
	cout<<"\n\nTotal Sales: $"<<total;
	cout<<"\nHighest Sales: $"<<highest;
	cout<<"\nLowest Sales: $"<<lowest;
	
	cout<<"\n\nSales who exceed $10,000 in sales: \n";
	for(int i = 0; i < size; i++){
		if(person[i] >= 10000){
			cout<<"Salesperson: #"<<i+1<<endl;
		}
	}
	
	int average = total/size;
	cout<<"\n\nAverage Sales per Salesperson: $"<<average;
	if(average >= 10000)
	cout<<"\nOverall Sales Performance: The sales team performed well.";
	else
	cout<<"\nOverall Sales Performance: Some salespeople need to improve their performance.";
	
	cout<<"\n............................................................";
	cout<<"\nThank you for using the Sales Data Analyzer!\n\n\n\n\n\n\n\n";
	
}