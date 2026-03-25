//
// Created by Sean Oberc on 3/25/26.
//
#include <string>

using std::string;

class StringNode {
private:
    string elem;
    StringNode* next;

    friend class StringLinkedList;
};