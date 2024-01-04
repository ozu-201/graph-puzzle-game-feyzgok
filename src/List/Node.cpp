//
// Created by Olcay Taner YILDIZ on 6.03.2023.
//

#include "Node.h"


Node::Node(int data,Node* parent) {
    this->data = data;
    this->next = nullptr;
    this->parent=parent;
}

void Node::setNext(Node *_next) {
    this->next = _next;
}
void Node::setParent(Node *_parent) {
    this->parent = _parent;
}

Node *Node::getNext() {
    return next;
}

int Node::getData() {
    return data;
}

string Node::to_string() {
    return ::to_string(data);
}
