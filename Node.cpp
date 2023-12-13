#include "Node.h"
#include <iostream>

Node::Node(Student* newstudent) {

  student = newstudent;

    next = NULL;
}

Node* Node::getNext() {

  return next;
}

void Node::setNext(Node* newnext) {


 next = newnext;
}

Node::~Node() {

  delete student;

  next = NULL;
}

Student *Node::getStudent() {


  return student;
}




