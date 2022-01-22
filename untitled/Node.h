/**
 * Node.h:
 * Specification for a Node class
 *
 * @author Sishi Cheng
 */
#ifndef TEMPLATEDEMO_NODE_H
#define TEMPLATEDEMO_NODE_H

template <class T>
class Node
{
private:
    T data;
    Node* next;

public:
    Node( T d,  Node* ptr);

    T getData() const;

    void setData( T d );

    Node* getNext();

    void setNext( Node* );
};

//Implementation
template <class T>
Node<T>::Node(T d, Node *ptr)
{
    data = d;
    next = ptr;
}

template <class T>
T Node<T>::getData() const
{
    return data;
}

template <class T>
void Node<T>::setData(T d)
{
    data = d;
}

template <class T>
Node<T>* Node<T>::getNext()
{
    return next;
}

template <class T>
void Node<T>::setNext(Node* ptr)
{
    next = ptr;
}

#endif //TEMPLATEDEMO_NODE_H