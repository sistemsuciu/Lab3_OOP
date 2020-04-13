#include "Node.h"

Node::Node() {      //constructor
    this->value = 0;
    this->left = nullptr;
    this->right = nullptr;
}

Node::Node(int v) {     //constructor
    this->value = v;
    this->left = nullptr;
    this->right = nullptr;
}

Node::~Node() {     //destructor
    delete left;
    delete right;
}
