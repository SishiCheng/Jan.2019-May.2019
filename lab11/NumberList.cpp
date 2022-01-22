//
// Created by txr185 on 2019-03-18.
//

#include "NumberList.h"
#include <iostream>

using namespace std;

void NumberList::appendNode(double n)
{
    ListNode *newNode;
    ListNode *nodePtr;

    newNode = new ListNode;
    newNode->data = n;
    newNode->next = nullptr;

    if( !head )
    {
        head = newNode;
    }
    else
    {
        nodePtr = head;

        while( nodePtr->next )
        {
            nodePtr = nodePtr->next;
        }

        nodePtr->next = newNode;
    }
}

void NumberList::insertNode(double n)
{
    ListNode *newNode;
    ListNode *nodePtr;
    ListNode *previousNode = nullptr;

    newNode = new ListNode;
    newNode->data = n;

    //empty list case
    if( !head )
    {
        head = newNode;
        newNode -> next = nullptr;
    }
    else //non-empty
    {
        nodePtr = head;
        previousNode = nullptr;

        while( nodePtr != nullptr && nodePtr->data < n )
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        if( previousNode == nullptr )
        {
            head = newNode;
            newNode->next = nodePtr;
        }
        else
        {
            previousNode->next = newNode;
            newNode->next = nodePtr;
        }
    }
}

void NumberList::deleteNode(double n)
{
    ListNode *nodePtr;
    ListNode *prevNode;

    if( !head )
    {
        return;
    }

    if( head->data == n )
    {
        nodePtr = head->next;
        delete head;
        head = nodePtr;
    }
    else
    {
        nodePtr = head;

        while( nodePtr != nullptr && nodePtr->data != n )
        {
            prevNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        if( nodePtr )
        {
            prevNode->next = nodePtr->next;
            delete nodePtr;
        }
    }

    return;
}

NumberList::~NumberList()
{
    ListNode *nodePtr;
    ListNode *nextNode;

    nodePtr = head;

    while( nodePtr != nullptr )
    {
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
    }
}

void NumberList::displayList() const
{
    ListNode* node = head;

    while( node->next )
    {
        cout << node->data << "->";
        node = node->next;
    }

    cout << node->data << endl;
}

NumberList::ListNode* NumberList::getPointerAtPosition(int pos)
{
    ListNode *nodePtr=head;
    int count=1;
    if(!head)
    {
        return nullptr;
    }
    else{
        while(count<pos)
        {
            nodePtr=nodePtr->next;
            count++;
        }

        return nodePtr;
    }
}

void NumberList::deleteRange(NumberList::ListNode *first, NumberList::ListNode *last)
{
    ListNode *nodePtr = head;
    ListNode *nextNode = nodePtr->next;

    if(!head) {
        cout << "The list is empty";
    }

    else {
        while (nodePtr != nullptr && nodePtr!=first->next) {
            nodePtr=nodePtr->next;
        }

        while(nodePtr!=nullptr && nodePtr!=last) {
            nextNode = nodePtr->next;
            delete nodePtr;
            nodePtr = nextNode;
        }
        first->next=last->next;
        delete last;
    }
}
