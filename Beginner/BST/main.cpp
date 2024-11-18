#include "BST.h"
#include "Node.h"

#include<iostream>
using namespace std;

int main() {
    BST tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(8);
    tree.inOrder();
    return 0;
}