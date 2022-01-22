//
// Created by Cici on 3/25/2019.
//
// Specification file for the NumberList class

#ifndef LINKEDLIST_NODE_NUMBERLIST_H
#define LINKEDLIST_NODE_NUMBERLIST_H


class NumberList {
private:
    // Declare a structure for the list
    struct ListNode {
        double value;// The value in this node
        ListNode *next;// To point to the next node
    };

    ListNode *head;// List head pointer

    // Private member functions
    int countNodes(ListNode*) const;
    void showReverse(ListNode*) const;

public:
    // Constructor
    NumberList();

    // Destructor
    ~NumberList();

    // Linked list operations
    void appendNode(double);
    void insertNode(double);
    void deleteNode(double);
    void displayNode() const;
    int numNodes() const {
        return countNodes(head);
    };
    void displayBackwards() const {
        return showReverse(head);
    };

};


#endif //LINKEDLIST_NODE_NUMBERLIST_H
