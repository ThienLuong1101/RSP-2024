#include"BST.h"

#include<iostream>
using namespace std;

void BST::inOrder(Node * node) {
    if (!node) return;
    inOrder(node->left);
    cout << node->data << " ";
    inOrder(node->right);

}

void BST::preOrder(Node * node) {
    if (!node) return;
    cout << node->data << " ";
    preOrder(node->left);
    preOrder(node->right);

}

void BST::postOrder(Node * node) {
    if (!node) return;
    postOrder(node->left);

    postOrder(node->right);
    cout << node->data << " ";
}

Node * BST::insert(Node * node, int val) {
    if (node == nullptr) return new Node(val);

    if (val < node->data) node->left = insert(node->left,val);
    else node->right = insert(node->right, val);

    return node;
}

bool BST::search(Node * node, int target) {
    if (!node) return false;
    if (node->data == target) return true;
    if (node-> data > target) return search (node->left,target);
    return search(node->right, target);
   
}
