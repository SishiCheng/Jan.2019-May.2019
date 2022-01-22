// This program demonstrates the Stack template.
#include <iostream>
#include "Stack.h"

using namespace std;

// Constants for the menu choices
const int PUSH_CHOICE=1,
          POP_CHOICE=2,
          QUIT_CHOICE=3;

// Function prototypes
void menu(int &);
void getStackSize(int &);
void pushItem(Stack<string>&);
void popItem(Stack<string>&);

int main() {
    int stackSize;// The stack size
    int choice;// To hold a menu choice
    // Get the stack size.
    getStackSize(stackSize);

    // Create the stack.
    Stack<string> stack(stackSize);

    do{
        // Get the user's menu choice.
        menu(choice);
        // Perform the user's choice.
        if(choice!=QUIT_CHOICE) {
            switch (choice) {
                case PUSH_CHOICE:
                    pushItem(stack);
                    break;
                case POP_CHOICE:
                    popItem(stack);
            }
        }
    }while (choice!=QUIT_CHOICE);




    return 0;
}

//************************************************
// The getStackSize function gets the desired *
// stack size, which is assigned to the *
// reference parameter. *
//************************************************
void getStackSize(int &s) {
    // Get the desired stack size.
    cout << "How big should I make the stack? ";
    cin >> s;

    // Validate the size.
    while(s<1) {
        cout << "Invalid size, try again!";
        cout << "How big should I make the stack? ";
        cin >> s;
    }
}

//************************************************
// The menu function displays the menu and gets *
// the user's choice, which is assigned to the *
// reference parameter. *
//************************************************
void menu(int &c) {
    // Display the menu and get the user's choice.
    cout << "PUSH_CHOICE=1\n"
            "POP_CHOICE=2\n"
            "QUIT_CHOICE=3";
    cin >> c;
    // Validate the choice
    while (c!=1 && c!=2 && c!=3) {
        cout << "Invalid choice, try again: ";
        cin >> c;
    }
}

//************************************************
// The pushItem function gets an item from the *
// user and pushes it onto the stack. *
//************************************************

void pushItem(Stack<string>& obj) {
    string item;
    cin.ignore();
    cout << "what item you want to push? ";
    getline(cin,item);
    obj.push(item);
}

//****************************************************
// The popItem function pops an item from the stack *
//****************************************************
void popItem(Stack<string>& obj) {
    string catchvar="";
    // Pop the item.
    obj.pop(catchvar);
    // Display the item.
    if(catchvar!="") {
        cout << "Poping " << catchvar;
    }
}