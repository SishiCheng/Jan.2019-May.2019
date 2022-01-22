//
// Created by Cici on 4/1/2019.
//

#include "DynIntStack.h"
#include <iostream>

using namespace std;

DynIntStack::DynIntStack() {
    top = nullptr;
}

//**************************************************
// Destructor                                      *
// This function deletes every node in the list.   *
//**************************************************

DynIntStack::~DynIntStack() {
    StackNode *nodePtr = nullptr, *nextNode = nullptr;

    // Position nodePtr at the top of the stack.
    nodePtr = top;

    // Traverse the list deleting each node.
    while (nodePtr!= nullptr) {
        nextNode=nextNode->next;
        delete nodePtr;
        nodePtr = nextNode;
    }
}

//*************************************************
// Member function push pushes the argument onto  *
// the stack.                                     *
//*************************************************

void DynIntStack::push(int num) {
    StackNode *newNode= nullptr;// Pointer to a new node

    // Allocate a new node and store num there.
    newNode=new StackNode;
    newNode->value=num;

    // If there are no nodes in the list
    // make newNode the first node.
    if(isEmpty()) {
        top=newNode;
        newNode->next=nullptr;
    }
    else // Otherwise, insert NewNode before top.
    {
        newNode->next=top;
        top=newNode;
    }
}

//*****************************************************
// Member function pop pops the value at the top      *
// of the stack off, and copies it into the variable  *
// passed as an argument.                             *
//*****************************************************

void DynIntStack::pop(int & num) {
    StackNode *temp = nullptr;// Temporary pointer

    // First make sure the stack isn't empty.
    if( isEmpty()) {
       cout << "The stack is empty.\n";
    }
    else //pop value off top of stack
    {
        num=top->value;
        temp=top->next;
        delete top;
        top=temp;
    }
}

//*****************************************************
// Member function isEmpty returns true if the stack  *
// is empty, or false otherwise.                      *
//*****************************************************

bool DynIntStack::isEmpty() {
    bool status;

    if(!top) {
        status = true;
    }
    else
        status = false;
    return status;
}

int DynIntStack::Size() {
    StackNode *nodePtr;
    int count=0;

    nodePtr=top;
    while(nodePtr) {
        nodePtr=nodePtr->next;
        count++;
    }
    return count;
}

void DynIntStack::Print() {
    StackNode *nodePtr;

    if(isEmpty()) cout << "The stack is empty.";
    else {
        nodePtr=top;
        while(nodePtr) {
            cout << nodePtr->value << endl;
            nodePtr=nodePtr->next;
        }
    }
}

bool DynIntStack::operator ==(DynIntStack &s) const {
    StackNode *nodePtr;
    StackNode *snodePtr;

    nodePtr=top;
    snodePtr=s.top;
    while (nodePtr && snodePtr) {
        if(nodePtr->value==snodePtr->value) {
            nodePtr=nodePtr->next;
            snodePtr=snodePtr->next;
            continue;
        }
        else {
            return false;
        }
    }

    return true;
}