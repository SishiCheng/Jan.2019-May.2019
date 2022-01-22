// This program demonstrates the Stack template.
#include <iostream>
#include "DynIntStack.h"

using namespace std;

// Constants for the menu choices
const int PUSH_CHOICE=1,
        POP_CHOICE=2,
        QUIT_CHOICE=3;

// Function prototypes
void menu(int &);
void pushItem(DynIntStack<string>&);
void popItem(DynIntStack<string>&);

int main() {
    int choice;// To hold a menu choice
    // Get the stack size.

    // Create the stack.
    DynIntStack<string> stack;

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

void pushItem(DynIntStack<string>& obj) {
    string item;
    cin.ignore();
    cout << "what item you want to push? ";
    getline(cin,item);
    obj.push(item);
}

//****************************************************
// The popItem function pops an item from the stack *
//****************************************************
void popItem(DynIntStack<string>& obj) {
    string catchvar="";
    // Pop the item.
    obj.pop(catchvar);
    // Display the item.
    if(catchvar!="") {
        cout << "Poping " << catchvar;
    }

}