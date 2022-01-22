#include <iostream>
#include "DynIntStack.h"

using namespace std;

int main() {
    DynIntStack stack1;

    stack1.push(5);
    stack1.push(6);
    stack1.push(7);
    //cout << stack1.Size();
    //stack1.Print();

    DynIntStack stack2;

    stack2.push(5);
    stack2.push(6);
    stack2.push(7);
    if(stack2==stack1) {
        cout << "Two stack is same.";
    }
    else {
        cout << "Two stack is different.";
    }
    return 0;
}