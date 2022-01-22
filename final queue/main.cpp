// This program demonstrates the Queue template.
#include <iostream>
#include <string>
#include "Queue.h"

using namespace std;

int main() {
    const int MAX=5;// Max number of values
    string name;

    // Create a Queue.
    Queue<string> queue(MAX);

    // Enqueue some names.
    cout << "Enqueuing " << MAX << " items...\n";
    for (int i=0; i<5; i++) {
        cout << "Enter a name:";
        getline(cin,name);
        queue.enqueue(name);
    }

    cout << "\nHere are the names you entered:\n";
    for (int i=0; i<5; i++) {
        string catchVal;
        queue.dequeue(catchVal);
        cout << catchVal << endl;
    }// Dequeue and retrieve all items in the queue
    return 0;
}