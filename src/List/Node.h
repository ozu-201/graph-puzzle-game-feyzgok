//
// Created by Olcay Taner YILDIZ on 6.03.2023.
//

#ifndef DATASTRUCTURES_CPP_NODE_H
#define DATASTRUCTURES_CPP_NODE_H
#include <string>

using namespace  std;

class Node {
private:

    int data;
    Node* next;
    Node* parent;
public:
    explicit Node(int data, Node* parent);
    void setNext(Node* _next);
    Node* getNext();
    int getData();
    string to_string();
    void setParent(Node *_parent);

    Node(int data);

    Node(int data, Node parent);
};


#endif //DATASTRUCTURES_CPP_NODE_H
