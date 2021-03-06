/*
 *  ____       _____       _____
 * /\  _`\    /|  _ \     /\___ \
 * \ \ \/\ \  |/\   |     \/__/\ \
 *  \ \ \ \ \  \// __`\/\    _\ \ \
 *   \ \ \_\ \ /|  \L>  <_  /\ \_\ \
 *    \ \____/ | \_____/\/  \ \____/
 *     \/___/   \/____/\/    \/___/
 *
 * Team Member:
 *  David Chew En-Lai   -   S10173143G
 *  Joe Kawai           -   S10166858B
 *
 * Features:
 *  Adelson-Velsky and Landis(AVL) Binary Tree
 *  Template
 *  Printing of full tree
 *
 */


#ifndef DSA_ASSIGNMENT_BST_H
#define DSA_ASSIGNMENT_BST_H

#include <iostream>
#include <string>
#include <set>
#include <vector>

using namespace std;

#include "BinaryNode.h"

template <class T>
class BST {
private:
    // root of the BST
    BinaryNode<T> *root;

    // balance() helper
    int getHeightDiff(BinaryNode<T> *temp);
    BinaryNode<T> *rr_rotation(BinaryNode<T> *parent);
    BinaryNode<T> *ll_rotation(BinaryNode<T> *parent);
    BinaryNode<T> *lr_rotation(BinaryNode<T> *parent);
    BinaryNode<T> *rl_rotation(BinaryNode<T> *parent);

public:
    // Constructor
    BST();

    // Destructor
    ~BST();

    // search an item in the binary search tree
    BinaryNode<T> *search(T target);
    BinaryNode<T> *search(BinaryNode<T> *t, T target);

    // add an item to the binary search tree
    void insert(T item);
    void insert(BinaryNode<T> *&t, T item);

    // delete an item from the binary search tree
    void remove(T item);
    BinaryNode<T> *remove(BinaryNode<T> *&t, T item);

    // traverse the binary search tree in inOrder(smallest to biggest)
    void inorder();
    void inorder(BinaryNode<T> *t);

    // compute the height of the binary search tree
    int getHeight();
    int getHeight(BinaryNode<T> *t);

    // check if the binary search tree is empty
    bool isEmpty();

    // Check if the binary search tree is balanced
    bool isBalanced();
    bool isBalanced(BinaryNode<T> *t);

    // Balance tree
    BinaryNode<T> *balance(BinaryNode<T> *temp);

    // Display level-by-level traversal
    void printLevelOrder();
    void printLevelOrder(BinaryNode<T> *root);

    // Print tree in human readable form
    void printTree(int space);
    void printTree(BinaryNode<T> *root, int space);

};

// Template workaround (Removed BST.cpp from CMakeLists.txt's add_executable())
#include "BST.cpp"

#endif //DSA_ASSIGNMENT_BST_H
