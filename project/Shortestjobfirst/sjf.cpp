//BSIT-2

#include <iostream>

using namespace std;

struct Process {
    int id;
    int arrivalTime;
    int burstTime;
    int waitingTime;
    int remainingTime;
};

int main() {
    int n;
    cout << "Welcome to my SJF-P CPU Scheduling Algorithm\n";
    cout << "Enter Number of Process in the ready queue: ";
    cin >> n;

    Process processes[n];
    cout << "Enter Burst Time and Arrival Time for each process:\n";
    for (int i = 0; i < n; ++i) {
        cout << "P-" << i + 1 << " Burst Time? ";
        cin >> processes[i].burstTime;
        cout << "P-" << i + 1 << " Arrival Time? ";
        cin >> processes[i].arrivalTime;
        processes[i].id = i + 1;
        processes[i].waitingTime = 0;
        processes[i].remainingTime = processes[i].burstTime;
    }

    cout << "Processes Information:\n";
    cout << "Arrival time\tBurst time\n";
    for (int i = 0; i < n; ++i) {
        cout << "P-" << processes[i].id << "\t\t" << processes[i].arrivalTime << "\t\t" << processes[i].burstTime << endl;
    }

    int currentTime = 0;
    int ganttChart[100]; // Assuming max 100 time units
    int ganttIndex = 0;
    int remainingProcesses = n;

    while (remainingProcesses > 0) {
        int shortestIndex = -1;
        int shortestBurst = INT_MAX;

        // Find the shortest job that has arrived
        for (int i = 0; i < n; ++i) {
            if (processes[i].arrivalTime <= currentTime && processes[i].remainingTime > 0 && processes[i].remainingTime < shortestBurst) {
                shortestBurst = processes[i].remainingTime;
                shortestIndex = i;
            }
        }

        // If no process is ready, move to the next arrival time
        if (shortestIndex == -1) {
            int nextArrivalTime = INT_MAX;
            for (int i = 0; i < n; ++i) {
                if (processes[i].arrivalTime > currentTime && processes[i].arrivalTime < nextArrivalTime) {
                    nextArrivalTime = processes[i].arrivalTime;
                }
            }
            currentTime = nextArrivalTime;
            continue;
        }

        // Execute the shortest job
        ganttChart[ganttIndex++] = processes[shortestIndex].id;
        processes[shortestIndex].remainingTime--;

        // Update waiting time for other processes
        for (int i = 0; i < n; ++i) {
            if (i != shortestIndex && processes[i].arrivalTime <= currentTime && processes[i].remainingTime > 0) {
                processes[i].waitingTime++;
            }
        }

        // If the job is completed, calculate waiting time and remove it from the ready queue
        if (processes[shortestIndex].remainingTime == 0) {
            processes[shortestIndex].waitingTime = currentTime + 1 - processes[shortestIndex].arrivalTime - processes[shortestIndex].burstTime;
            remainingProcesses--;
        }

        // Move to the next time unit
        ++currentTime;
    }

    cout << "Gantt Chart\n";
    for (int i = 0; i < ganttIndex; ++i) {
        cout << "| " << ganttChart[i] << " ";
        if (i < ganttIndex - 1 && ganttChart[i] != ganttChart[i + 1]) {
            cout << ". ";
        }
    }
    cout << "|\n";

    cout << "Process Waiting time:\n";
    for (int i = 0; i < n; ++i) {
        cout << "P-" << processes[i].id << " = " << processes[i].waitingTime << endl;
    }

    int totalWaitingTime = 0;
    for (int i = 0; i < n; ++i) {
        totalWaitingTime += processes[i].waitingTime;
    }
    double averageWaitingTime = (double)totalWaitingTime / n;
    cout << "Average waiting time is " << averageWaitingTime << endl;

    return 0;
}
