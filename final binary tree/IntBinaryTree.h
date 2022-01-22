//
// Created by Cici on 4/28/2019.
//
// Specification file for the IntBinaryTree class

#ifndef FINAL_BINARY_TREE_INTBINARYTREE_H
#define FINAL_BINARY_TREE_INTBINARYTREE_H

// BinaryTree template

class IntBinaryTree {
private:
    struct TreeNode{
        int value;// The value in the node
        TreeNode *left;// Pointer to left child node
        TreeNode *right;// Pointer to right child node
    };

    TreeNode *root;// Pointer to the root node

    // Private member functions
    void insert(TreeNode *&, TreeNode *&);
    //void destroySubTree(TreeNode *);
    void deleteNode(int, TreeNode *&);
    void makeDeletion(TreeNode *&);
    void displayInOrder(TreeNode *) const;
    void displayPreOrder(TreeNode *) const;
    void displayPostOrder(TreeNode *) const;
    int minValue(TreeNode *);
    int findSum(TreeNode *);

public:
    IntBinaryTree() {
        root = nullptr;
    }// Constructor

    ~IntBinaryTree();// Destructor

    // Binary tree operations
    void insertNode(int);
    bool searchNode(int);
    void remove(int);
    void displayInOrder() const;
    void displayPreOrder() const;
    void displayPostOrder() const;
    int findMinimum();
    int calSum();
};

#endif //FINAL_BINARY_TREE_INTBINARYTREE_H
