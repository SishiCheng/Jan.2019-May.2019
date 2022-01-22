//
// Created by Cici on 4/1/2019.
//

// Specification file for the DynIntStack class
#ifndef DYNAMIC_STACKS_DYNINTSTACK_H
#define DYNAMIC_STACKS_DYNINTSTACK_H


class DynIntStack {
private:
    // Structure for stack nodes
    struct StackNode {
        int value;// Value in the node
        StackNode *next;// Pointer to the next node
    };

    StackNode *top;// Pointer to the stack top

public:
    // Constructor
    DynIntStack();

    // Destructor
    ~DynIntStack();

    // Stack operations
    void push(int);
    void pop(int &);
    bool isEmpty();
    int Size();
    void Print();
    bool operator ==(DynIntStack &) const;
};

#endif //DYNAMIC_STACKS_DYNINTSTACK_H
