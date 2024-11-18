#include "LinkedList.h"
#include "Node.h"
#include<iostream>
using namespace std;


LinkedList::LinkedList() : head(nullptr) {}
LinkedList::~LinkedList() {
    Node * curr = head;
    while (curr) {
        Node * temp = curr;
        curr = curr->next;
        delete temp;
    }
}

Node * LinkedList::find(int pos) {
   
    Node * curr = head;
    int j = 0;
    while (curr && j < pos) {
        
        curr = curr->next;
        j++;
    }

    return curr;
}

void LinkedList::insertBack(int item) {
    Node * newNode = new Node(item);
    if (!head) head = newNode;
    else {
        Node * curr = head;
        while (curr->next) {
            curr = curr->next;
        }

        curr->next = newNode;
    }

    return;
}

void LinkedList::insertFront(int item) {
    Node * newNode = new Node(item);
    if (!head) head = newNode;
    else {
        newNode->next = head;
        head = newNode;
    }

    return;
}

void LinkedList::printList() {
    Node * curr = head;
    while (curr) {
        cout << curr->data << "->";
        curr = curr->next;
    }

    cout << "null" <<endl;
}


void LinkedList::deleteFront() {
    if (!head) return;
    else {
        Node * temp = head;
        head = head->next;
        delete temp;
    }
    return;
    
}

bool LinkedList::findDelete(int target) {
    if(!head) return false;
    else {
        Node * curr = head;
        Node * prev = nullptr;
        while (curr->next && curr->data != target) {
            prev = curr;
            curr = curr->next;
        }

        if (curr->data != target ) return false;
        if (prev) {
        // Target is not the head node
            prev->next = curr->next;
        } else {
            // Target is the head node
            head = curr->next;
        }

        return true;
    }
}

bool LinkedList::swapNode(int pos1, int pos2) {
    if (pos1 == pos2) return true;
    if (pos1 > pos2) swap(pos1, pos2);

    Node * prev1 = nullptr;
    Node * prev2 = nullptr;

    Node * curr = head;

    for (int i = 0; i < pos1 && curr; i++) {
        prev1 = curr;
        curr = curr->next;
    }

    Node * node1 = curr;

    for (int i = pos1; i < pos2 - pos1 && curr; i++) {
        prev2 = curr;
        curr = curr->next;
    }

    Node * node2 = curr;

    if (!node1 || !node2) return false;
    if (prev1) prev1->next = node2;
    else head = node2;

    if (prev2) prev2->next = node1;
    else head = node1;

    Node * temp = node1->next;
    node1->next = node2->next;
    node2->next = temp;
    

    return true;
}
