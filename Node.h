#ifndef NODE_H
#define NODE_H
#include <iostream>
#include "Student.h"
using namespace std;
class Node {
private:
  Node* next;
  Student* student;


public:
  Node(Student* newstudent);//constructor
  ~Node();//deconstructor
  Student *getStudent();//returns student value
   Node* getNext();//goes to next node    
  void setNext(Node* newnext);//next node setter
    
};
  #endif
