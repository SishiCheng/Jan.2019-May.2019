//
// Created by Cici on 4/23/2019.
//
// Specification file for the DynIntStack class

#ifndef FINAL_DYNAMIC_STACK_DYNINTSTACK_H
#define FINAL_DYNAMIC_STACK_DYNINTSTACK_H

#include <iostream>

using namespace std;

// Stack template
template <class T>
class DynIntStack {
private:
// Structure for stack nodes
    struct stackNode{
        T data;        // Value in the node
        stackNode *next;// Pointer to the next node
    };

    stackNode *top;// Pointer to the stack top

public:
// Constructor
    DynIntStack();
// Destructor
    ~DynIntStack();
// Stack operations
    void push(T);
    void pop(T&);
    bool isEmpty();
};

template <class T>
DynIntStack<T>::DynIntStack(){
    top = nullptr;
}

template <class T>
DynIntStack<T>::~DynIntStack() {
    stackNode *nodePtr=top;// Position nodePtr at the top of the stack.

    while (nodePtr) {
        nodePtr=nodePtr->next;
        delete top;
        top=nodePtr;
    }// Traverse the list deleting each node.
}

template <class T>
void DynIntStack<T>::push(T var) {
    // Pointer to a new node
    stackNode *newNode = nullptr;
    // Allocate a new node and store num there.
    newNode=new stackNode;
    newNode->data=var;
    // If there are no nodes in the list
    if(!top) {
        // make newNode the first node.
        top=newNode;
        newNode->next= nullptr;
    }
    else{
        newNode->next=top;
        top=newNode;
    }
    // Otherwise, insert NewNode before top.
}

template <class T>
void DynIntStack<T>::pop(T & v) {
    stackNode* temp = nullptr;// Temporary pointer

    if(isEmpty()) cout << "The stack is empty.";
    else{
        v=top->data;
        temp=top->next;
        delete top;
        top=temp;

    }// First make sure the stack isn't empty.

// pop value off top of stack
}

template <class T>
bool DynIntStack<T>::isEmpty() {
    if(!top) return true;
    else return false;
}

#endif //FINAL_DYNAMIC_STACK_DYNINTSTACK_H
