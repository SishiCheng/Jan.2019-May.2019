//
// Created by Cici on 4/23/2019.
//

#ifndef FINAL_STACK_MATHSTACK_H
#define FINAL_STACK_MATHSTACK_H

#include "Stack.h"

template <class T>
class MathStack : public Stack<T> {
public:
    // Constructor
    MathStack(int s);
    // MathStack operations
    void add();
    void sub();
};

template <class T>
MathStack<T>::MathStack(int s):Stack<T>(s) {}

template <class T>
void MathStack<T>::add() {
    T num1, num2;
    // Pop the first two values off the stack.
    pop(num1);
    pop(num2);
    // Add the two values, store in sum.
    num1+=num2;
    // Push sum back onto the stack.
    push(num1);
}


#endif //FINAL_STACK_MATHSTACK_H
