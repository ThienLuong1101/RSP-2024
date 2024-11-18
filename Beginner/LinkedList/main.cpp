#include "LinkedList.h"
#include "Node.h"


using namespace std;

#include<iostream>

int main() {
    LinkedList ll;
    ll.insertFront(1);
    ll.insertBack(3);
    ll.insertBack(4);
    ll.insertBack(5);
    ll.swapNode(0,1);

    ll.printList();
    return 0;
}