//
// Created by Cici on 4/28/2019.
//

#include "IntBinaryTree.h"
#include <iostream>

using namespace std;

IntBinaryTree::~IntBinaryTree() {
    //destroySubTree(root);
}

void IntBinaryTree::insertNode(int num) {
    TreeNode *newNode = nullptr;

    newNode=new TreeNode;
    newNode->value=num;
    newNode->left=newNode->right = nullptr;

    insert(root, newNode);
}

void IntBinaryTree::insert(IntBinaryTree::TreeNode *& r, IntBinaryTree::TreeNode *& n) {
    if(!r) {
        r=n;
    }
    else {
         if(n->value<r->value) insert(r->left,n);
         else insert(r->right, n);
    }
}

bool IntBinaryTree::searchNode(int num) {
    TreeNode *nodePtr = nullptr;
    nodePtr=root;
    while(nodePtr) {
        if(nodePtr->value==num) return true;
        else if(nodePtr->value<num) nodePtr=nodePtr->right;
        else nodePtr=nodePtr->left;
    }
    return false;
}

void IntBinaryTree::displayInOrder() const {
    displayInOrder(root);
}

void IntBinaryTree::displayPreOrder() const {
    displayPreOrder(root);
}

void IntBinaryTree::displayPostOrder() const {
    displayPostOrder(root);
}

void IntBinaryTree::displayInOrder(IntBinaryTree::TreeNode * r) const {
    if(r) {
        displayInOrder(r->left);
        cout << r->value << " ";
        displayInOrder(r->right);
    }

}

void IntBinaryTree::displayPreOrder(IntBinaryTree::TreeNode *r) const {
    if (r) {
        cout << r->value << " ";
        displayPreOrder(r->left);
        displayPreOrder(r->right);
    }

}

void IntBinaryTree::displayPostOrder(IntBinaryTree::TreeNode *r) const {
    if(r) {
        displayPostOrder(r->left);
        displayPostOrder(r->right);
        cout << r->value << " ";
    }
}

void IntBinaryTree::remove(int num) {
    deleteNode(num, root);
}

void IntBinaryTree::deleteNode(int num, IntBinaryTree::TreeNode *& r) {
    if(r->value<num) deleteNode(num, r->right);
    else if(r->value>num) deleteNode(num, r->left);
    else makeDeletion(r);
}

void IntBinaryTree::makeDeletion(IntBinaryTree::TreeNode *& r) {
    // Define a temporary pointer to use in reattaching
    // the left subtree.
    TreeNode * temp = nullptr;

    if(!r) {
        cout << "Can not delete an empty node\n";
        return;
    }

    // Reattach the left child.
    if(!r->right) {
        temp=r;
        r=r->left;
        delete temp;
    }
    else if(!r->left) {
        temp=r;
        r=r->right;
        delete temp; // Reattach the right child.
    }
    else {
        temp=r->right;
        while(temp->left) temp=temp->left;
        temp->left=r->left;
        temp=r;
        r=r->right;
        delete r;
    }
    // If the node has two children.

    // Move one node to the right.

    // Go to the end left node.

    // Reattach the left subtree.

    // Reattach the right subtree.
}

int IntBinaryTree::findMinimum() {
    return minValue(root);
}

int IntBinaryTree::minValue(IntBinaryTree::TreeNode *r) {
    if(r->left) minValue(r->left);
    else return r->value;
}

int IntBinaryTree::calSum() {
    return findSum(root);
}

int IntBinaryTree::findSum(IntBinaryTree::TreeNode *r) {
    int sum;
    if(!r) return 0;
    else return r->value+findSum(r->left)+findSum(r->right);
}