#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
using namespace std;

#include<iostream>

class LinkedList {
private: 
    Node * head;
    Node * find(int target);
public:
    LinkedList();
    ~LinkedList();
    void insertFront(int item);
    void insertBack(int item);
    void deleteFront();
    void printList();
    bool swapNode(int pos1, int pos2);
    bool findDelete(int target);
};

#endif