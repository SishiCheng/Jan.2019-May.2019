// This program builds a binary tree with 5 nodes.
#include <iostream>
#include "IntBinaryTree.h"

using namespace std;

int main() {
    IntBinaryTree tree;

    cout << "Inserting nodes. ";
    tree.insertNode(5);
    tree.insertNode(8);
    tree.insertNode(3);
    tree.insertNode(12);
    tree.insertNode(9);

    cout << "Done.\n";

    //cout << "Here are the values in the tree:\n";
    //tree.displayInOrder();
//
    //cout << "\nDeleting 8. . .\n";
    //tree.remove(8);
//
    //cout << "Deleting 12. . .\n";
    //tree.remove(12);
//
    //cout << "Now, here are the nodes:\n";
    //tree.displayInOrder();
//

    cout << tree.calSum();
    return 0;
}