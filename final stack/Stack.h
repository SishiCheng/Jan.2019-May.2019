//
// Created by Cici on 4/23/2019.
//
// Specification file for the Stack class

#ifndef FINAL_STACK_STACK_H
#define FINAL_STACK_STACK_H

#include <iostream>

using namespace std;

// Stack template
template <class T>
class Stack {
private:
    T *stackarray;// Pointer to the stack array
    int size;// The stack size
    int top;// Indicates the top of the stack

public:
    Stack(int);// Constructor

    Stack(const Stack&);// Copy constructor

    ~Stack();// Destructor

    // Stack operations
    void push(T);
    void pop(T&);
    bool isFull() const;
    bool isEmpty() const;
};

template <class T>
Stack<T>::Stack(int s) {
    size = s;
    stackarray = new T[size];
    top = -1;
}

template <class T>
Stack<T>::Stack(const Stack& obj) {
    // Create the stack array.
    if (obj.size>0) {
        stackarray=new T[obj.size];
    }
    else stackarray=nullptr;
    // Copy the stackSize attribute.
    size=obj.size;
    // Copy the stack contents.
    for(int i=0; i<size; i++) {
        stackarray[i]=obj.stackarray[i];
    }
    // Set the top of the stack.
    top=obj.top;
}

template <class T>
Stack<T>::~Stack() {
    delete [] stackarray;
}

template <class T>
void Stack<T>::push(T var) {
    if(isFull()) {
        cout << "The stack is full.\n";
    }
    else {
        top++;
        stackarray[top]=var;
    }
}

template <class T>
void Stack<T>::pop(T &var) {
    if(isEmpty()) {
        cout << "The stack is empty.\n";
    }
    else {
        var=stackarray[top];
        top--;
    }
}

template <class T>
bool Stack<T>::isFull() const {
    if(top==size-1) {
        return true;
    }
    else return false;
}

template <class T>
bool Stack<T>::isEmpty() const {
    if(top==-1) {
        return true;
    }
    else return false;
}



#endif //FINAL_STACK_STACK_H
