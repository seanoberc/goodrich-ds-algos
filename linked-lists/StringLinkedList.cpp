//
// Created by Sean Oberc on 3/25/26.
//
#include "StringLinkedList.h"

// constructor
StringLinkedList::StringLinkedList() : head(nullptr) {}

// destructor
StringLinkedList::~StringLinkedList() { while (!empty()) removeFront(); }

// check if list is empty
bool StringLinkedList::empty() const {
    return head == nullptr;
}

// get front element
const string &StringLinkedList::front() const {
    return head->elem;
}

// add a node to the front of the linked list
void StringLinkedList::addFront(const string &e) {
    StringNode* v = new StringNode;     // create a new node
    v->elem = e;                        // store the value of a new element to the node's data "field"
    v->next = head;                     // make the new node point to the current head
    head = v;                           // update the head to point to the new node
}

// remove the front node from the linked list
void StringLinkedList::removeFront() {
    StringNode* old = head;         // save a pointer to the current node head
    head = old->next;               // reassign the pointer to the head from `old` to the `next` pointer
    delete old;                     // delete the old node from memory
}
