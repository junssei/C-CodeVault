#include <iostream>
#include <thread>
#include <mutex>
#include <queue>
#include <chrono>
#include <random> // For std::random_device and std::mt19937

using namespace std;

mutex mtx; // Mutex for protecting shared resources
queue<int> q; // Shared queue between producer and consumer
const int BUFFER_SIZE = 5; // Size of the buffer
const int NUM_ITERATIONS = 20; // Number of iterations for producer and consumer

void producer() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100); // Generate random numbers between 1 and 100

    for (int i = 0; i < NUM_ITERATIONS; ++i) {
        this_thread::sleep_for(chrono::milliseconds(100)); // Simulate some work
        
        unique_lock<mutex> lock(mtx); // Lock mutex before modifying shared resource
        if (q.size() < BUFFER_SIZE && dis(gen) % 2 == 0) { // 50% chance to produce
            int value = dis(gen); // Generate random number
            q.push(value); // Produce data
            cout << "Produced: " << value << endl;
        }
        else {
            if (q.size() == BUFFER_SIZE)
                cout << "Buffer full, cannot produce." << endl;
        }
    }
}

void consumer() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100); // Generate random numbers between 1 and 100

    for (int i = 0; i < NUM_ITERATIONS; ++i) {
        this_thread::sleep_for(chrono::milliseconds(200)); // Simulate some work
        
        unique_lock<mutex> lock(mtx); // Lock mutex before modifying shared resource
        if (!q.empty() && dis(gen) % 2 == 1) { // 50% chance to consume
            int data = q.front(); // Consume data
            q.pop();
            cout << "Consumed: " << data << endl;
        }
        else {
            if (q.empty())
                cout << "Buffer empty, cannot consume." << endl;
        }
    }
}

int main() {
    thread producerThread(producer);
    thread consumerThread(consumer);

    producerThread.join();
    consumerThread.join();

    return 0;
}
