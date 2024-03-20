//JVMF
//BSIT-2

#include <iostream>

using namespace std;

struct Process {
    int id;
    int arrivalTime;
    int burstTime;
};

void calculateWaitingTime(Process processes[], int waitingTime[], int numProcesses) {
    int currentTime = 0;
    for (int i = 0; i < numProcesses; ++i) {
        if (currentTime < processes[i].arrivalTime)
            currentTime = processes[i].arrivalTime;
        waitingTime[i] = currentTime - processes[i].arrivalTime;
        currentTime += processes[i].burstTime;
    }
}

int main(){
    cout<<"Welcome to my FCFS CPU Scheduling Algorithm\n\n";

    int num = 0;
    cout<<"Enter Number of Process in the ready queue: "; cin>> num ;
	
	Process processes[num];
	int waitingTime[num];

    for(int i = 0; i < num; i++){
    	cout<<endl;
    	cout << "P-" << i+1 << " Burst Time? ";
        cin >> processes[i].burstTime;
        cout << "P-" << i+1 << " Arrival Time? ";
        cin >> processes[i].arrivalTime;
        processes[i].id = i + 1;
	}
	
	cout << "\nProcesses Information:\n";
    cout << "\tArrival time\tBurst time\n";
    for (int i = 0; i < num; ++i) {
        cout << "P-" << processes[i].id << "\t\t" << processes[i].arrivalTime << "\t\t" << processes[i].burstTime << endl;
    }
    
    calculateWaitingTime(processes, waitingTime, num);
    
     cout << "\nProcess Waiting time:\n";
    for (int i = 0; i < num; ++i) {
        cout << "P-" << processes[i].id << " = " << waitingTime[i] << endl;
    }
    
     int totalWaitingTime = 0;
    for (int i = 0; i < num; ++i) {
        totalWaitingTime += waitingTime[i];
    }
    
    double averageWaitingTime = totalWaitingTime / num;
    cout << "\nAverage waiting time is " << averageWaitingTime;
}