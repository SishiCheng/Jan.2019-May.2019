//
// Created by Cici on 4/26/2019.
//

#ifndef FINAL_DYNAMIC_QUEUES_DYNQUEUE_H
#define FINAL_DYNAMIC_QUEUES_DYNQUEUE_H

#include <iostream>

using namespace std;

// DynamicQueue template
template <class T>
class DynQueue {
private:
    struct queueNode{
        T value;// Value in a node
        queueNode *next;// Pointer to the next node
    };// Structure for the queue nodes

    queueNode *front;// The front of the queue
    queueNode *rear;// The rear of the queue
    int itemNum;// Number of items in the queue

public:
    DynQueue();// Constructor

    ~DynQueue();// Destructor

    void enqueue(T);// Queue operations
    void dequeue(T &);
    bool isEmpty() const;
    void clear();
};

template <class T>
DynQueue<T>::DynQueue() {
    front = nullptr;
    rear = nullptr;
    itemNum=0;
}

template <class T>
DynQueue<T>::~DynQueue() {
    clear();
}

template <class T>
void DynQueue<T>::enqueue(T var) {
    queueNode* newNode=nullptr;
    newNode=new queueNode;
    newNode->value=var;// Create a new node and store var there.

    if(isEmpty()) {
        front=newNode;
        rear=newNode;
    }// Adjust front and rear as necessary.
    else{
        rear->next=newNode;
        rear=newNode;
    }
    itemNum++;
}

template <class T>
void DynQueue<T>::dequeue(T &var) {
    queueNode *temp;
    var=front->value;// Save the front node value in var.

    if(isEmpty()) {
        cout << "The queue is empty.\n";
    }
    else {
        temp=front;
        front=front->next;
        delete temp;// Remove the front node and delete it.
        itemNum--;
    }
// Update numItems.
}

template <class T>
bool DynQueue<T>::isEmpty() const{
    if(itemNum==0) return true;
    else return false;
}

template <class T>
void DynQueue<T>::clear() {
    T catchVal;
    if(!isEmpty()) {
        dequeue(catchVal);
    }
}


#endif //FINAL_DYNAMIC_QUEUES_DYNQUEUE_H
