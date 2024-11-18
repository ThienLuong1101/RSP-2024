#ifndef BST_H
#define BST_H

#include "Node.h"
#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class BST {
    Node * root;
    void inOrder(Node * node);
    void preOrder(Node * node);
    void postOrder(Node * node);
    Node * insert(Node * node, int val);
    bool search(Node * node, int target);
    public:

    BST() : root(nullptr) {}

    void inOrder() {
        return inOrder(root);
    }

    void preOrder() {
        return preOrder(root);
    }

    void postOrder() {
        return postOrder(root);
    }

    void insert(int val) {
        root = insert(root, val);
    }

    bool search(int val) {
        return search(root, val);
    }
};
#endif