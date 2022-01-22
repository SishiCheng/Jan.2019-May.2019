//
// Created by Cici on 3/25/2019.
//

#include "NumberList.h"
#include <iostream>

using namespace std;

// Constructor
NumberList::NumberList() {
    head= nullptr;
}

// Destructor
NumberList::~NumberList() {
    ListNode *nodePtr;// To traverse the list
    ListNode *nextNode;// To point to the next node

    nodePtr=head;// Position nodePtr at the head of the list.


   while(nodePtr){ // While nodePtr is not at the end of the list...
        nextNode=nodePtr->next;// Save a pointer to the next node.

        delete nodePtr;// Delete the current node.

        nodePtr=nextNode;// Position nodePtr at the next node.
   }

}
// Linked list operations

void NumberList::appendNode(double num) {
    ListNode *newNode = nullptr;// To point to a new node
    ListNode *nodePtr;// To move through the list

    // Allocate a new node and store num there.
    newNode=new ListNode;
    newNode->value=num;
    newNode->next = nullptr;

    if(!head) {
        head = newNode;// If there are no nodes in the list
    }
    // make newNode the first node.
    else {
        nodePtr=head;
        while(nodePtr->next) {
            nodePtr=nodePtr->next;
        }
        nodePtr->next=newNode;
    }
        // Initialize nodePtr to head of list.


        // Find the last node in the list.


        // Insert newNode as the last node.

}

void NumberList::insertNode(double num) {
    ListNode *newNode = nullptr;

    newNode=new ListNode;
    newNode->value=num;
    newNode->next = nullptr;

    // Initialize previousNode to nullptr.
    ListNode *previousNode = nullptr;
    // Position nodePtr at the head of list
    ListNode *nodePtr;

    // If there are no nodes in the list
    // make newNode the first node
    if(!head) {
        head=newNode;
        newNode->next= nullptr;
    }
    else {
        nodePtr=head;
        // Skip all nodes whose value is less than num.
        while(nodePtr && nodePtr->value<num) {
            previousNode=nodePtr;
            nodePtr=nodePtr->next;
        }

        // If the new node is to be the 1st in the list,
        // insert it before all other nodes.
        if(!previousNode) {
            head=newNode;
            newNode->next=nodePtr;
        }
        else {
            previousNode->next=newNode;
            newNode->next=nodePtr;
        }
    }


}

void NumberList::deleteNode(double num) {
    ListNode *nodePtr;// To traverse the list
    ListNode *previoudNode = nullptr;// To point to the previous node

    if(!head) return ;// If the list is empty, do nothing.

    nodePtr=head;
    if(nodePtr->value==num) {
        nodePtr=nodePtr->next;
        delete head;
        head=nodePtr;
    }// Determine if the first node is the one.
    while(nodePtr && nodePtr->value!=num) {
        previoudNode=nodePtr;
        nodePtr=nodePtr->next;
    }

        // Skip all nodes whose value member is
        // not equal to num.
    if(nodePtr) {
        previoudNode->next=nodePtr->next;
        delete nodePtr;
    }

        // If nodePtr is not at the end of the list,
        // link the previous node to the node after
        // nodePtr, then delete nodePtr.
}

void NumberList::displayNode() const {
    ListNode *nodePtr=head;// To move through the list

    // Position nodePtr at the head of the list.

    while(nodePtr) {
        cout << nodePtr->value << " ";
        nodePtr=nodePtr->next;
    }// While nodePtr points to a node, traverse
        // Display the value in this node.

        // Move to the next node.
}

int NumberList::countNodes(ListNode *node) const {
  if(!node) return 0;
  else return 1+countNodes(node->next);
}

void NumberList::showReverse( ListNode *node) const {
    if(!node) return;
    else {
        showReverse(node->next);
        cout << node->value << " ";
    }

}