// This program counts the nodes in a list.
#include <iostream>
#include "NumberList.h"

using namespace std;

int main() {
    const int MAX_VALUE=10;// Maximum number of values

    NumberList list;// Define a NumberList object.

    for (double i=0; i<MAX_VALUE; i++) {
        list.appendNode(i);
    }// Build the list with a series of numbers.

    cout << "Here are the values in the list ";
    list.displayNode() ;// Display the number of nodes in the list.

    list.deleteNode(6);
    cout << "done\n";

    list.displayNode();




    return 0;
}