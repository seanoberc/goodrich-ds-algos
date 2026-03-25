//
// Created by Sean Oberc on 3/25/26.
//

#include <string>
#include "StringNode.cpp"

using std::string;

class StringLinkedList {
public:
    StringLinkedList();
    ~StringLinkedList();
    bool empty() const;
    const string& front() const;
    void addFront(const string& e);
    void removeFront();
private:
    StringNode* head;
};