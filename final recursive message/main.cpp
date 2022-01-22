// This program demonstrates a simple recursive function.
#include <iostream>

using namespace std;

// Function prototype
void message(int);

int main() {
    message(5);
    return 0;
}

//************************************************************
// Definition of function message. If the value in times is *
// greater than 0, the message is displayed and the *
// function is recursively called with the argument *
// times − 1. *
//************************************************************

void message(int num) {
    cout << "message called with " << num << " in times.\n";
    if(num>0) {
        cout << "This is a recursive function\n";
        message(num-1);
    }
    cout << "message returning with " << num << " in times.\n";
}