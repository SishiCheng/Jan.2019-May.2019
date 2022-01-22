// This program demonstrates the DynamicQueue template.
#include <iostream>
#include "DynQueue.h"

using namespace std;

int main() {
    const int MAX_VALUES=5;
    string name;
    DynQueue<string> queue;// Create a Queue.

    // Enqueue a series of numbers.
    cout << "Enqueuing " << MAX_VALUES << " items...\n";
    for (int i=0; i<MAX_VALUES; i++) {
        cout << "Enter a name:";
        getline(cin,name);
        queue.enqueue(name);
    }

    // Dequeue and retrieve all numbers in the queue
    for (int i=0; i<MAX_VALUES; i++) {
        queue.dequeue(name);
        cout << name << endl;
    }
    return 0;
}