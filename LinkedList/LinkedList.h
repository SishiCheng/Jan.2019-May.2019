//
// Created by smc6823 on 3/19/2019.
//

#ifndef DESKTOP_LINKEDLIST_H
#define DESKTOP_LINKEDLIST_H

#include "Node.h"
#include <iostream>

using namespace std;

template <class T>
class LinkedList {

private:
    Node<T> *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    Node<T>* getHeadNode();

    ~LinkedList()
    {}

    void append(T d);
    void print() const;
};

template <class T>
Node<T>* LinkedList<T>::getHeadNode() {
    return head;
}

template <class T>
void LinkedList<T>::append( T d ) {
    Node<T> *newNode;
    Node<T> *nodePtr;

    newNode = new Node<T>(d, nullptr);
    newNode->setData(d);
    newNode->setNext(nullptr);

    if( !head )
    {
        head = newNode;
    }
    else
    {
        nodePtr = head;

        while( nodePtr->getNext( ) )
        {
            nodePtr = nodePtr->getNext();
        }

        nodePtr->setNext(newNode);
    }
}

template <class T>
void LinkedList<T>::print() const {
    Node<T>* node = head;

    while( node->getNext() )
    {
        cout << node ->getData() << " -> ";
        node = node->getNext();
    }
    cout << node->getData();
}

#endif //DESKTOP_LINKEDLIST_H
