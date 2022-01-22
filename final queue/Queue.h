//
// Created by Cici on 4/25/2019.
//
// Specification file for the Queue class

#ifndef FINAL_QUEUE_QUEUE_H
#define FINAL_QUEUE_QUEUE_H

#include <iostream>

using namespace std;

// Stack template
template <class T>
class Queue {
private:
    T *queueArray;// Points to the queue array
    int queueSize;// The queue size
    int front;// Subscript of the queue front
    int rear;// Subscript of the queue rear
    int counter;// Number of items in the queue

public:
    Queue(int);// Constructor

    Queue(const Queue &);// Copy constructor

    ~Queue();// Destructor

    void enqueue(T);
    void dequeue(T &);
    bool isEmpty() const;
    bool isFull() const;// Queue operations
    void clear();
};

template <class T>
Queue<T>::Queue(int size) {
    queueArray=new T[size];
    queueSize=size;
    front=-1;
    rear=-1;
    counter=0;
}

template <class T>
Queue<T>::Queue(const Queue &obj) {
    queueArray=new T[obj.queueSize];// Allocate the queue array.

    queueSize=obj.queueSize;
    front=obj.front;
    rear=obj.rear;
    counter=obj.counter;
    for(int i=0; i<obj.queueSize; i++) {
        queueArray[i]=obj.queueArray[i];
    }// Copy the other object's attributes.

// Copy the other object's queue array.
}

template <class T>
Queue<T>::~Queue() {
    delete [] queueArray;
}

template <class T>
void Queue<T>::enqueue(T var) {
    if(isFull()) {
        cout << "The queue is full\n";
    }
    else{
        rear=(rear+1)%queueSize;// Calculate the new rear position

        queueArray[rear]=var;// Insert new item

        counter++;// Update item count
    }
}

template <class T>
void Queue<T>::dequeue(T &var) {
    if(isEmpty()) {
        cout << "The queue is empty\n";
    }// Move front
    else {
        front=(front+1)%queueSize;
        var=queueArray[front];
        counter--;
    }

// Retrieve the front item

// Update item count
}

template <class T>
bool Queue<T>::isEmpty() const {
    if(counter==0) return true;
    else return false;
}

template <class T>
bool Queue<T>::isFull() const {
    if(counter==queueSize) return true;
    else return false;
}

template <class T>
void Queue<T>::clear() {
    front=-1;
    rear=-1;
    counter=0;
}
#endif //FINAL_QUEUE_QUEUE_H
