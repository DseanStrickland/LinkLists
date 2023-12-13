/*
 Arjun Pai
 12/12/2023
 Linked List: Using nodes to create a linked list of students
 Note: Thanks to my dad, Jazveer, and Tejas for help with this code
 */

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

#include "Node.h"
#include "Student.h"

Node* test = NULL;

int main() {
    Student* Studentone = new Student();
    Student* Studenttwo = new Student();
    char firstNamefirst[15] = "Arjun";
    char lastNamefirst[15] = "Pai";
    char firstNamesec[15] = "Mr";
    char lastNamesec[15] = "Galbraith";//initialzing the names
    int ssID = 123456;//second student id
    int fsID = 461941;//first student id

  //first student
    Studentone -> setStudentNumber(fsID);
    Studentone -> setFirstName(firstNamefirst);
    Studentone -> setLastName(lastNamefirst);

  //second student
    Studenttwo -> setStudentNumber(ssID);
    Studenttwo -> setFirstName(firstNamesec);
    Studenttwo -> setLastName(lastNamesec);



  //running nodes to basically do node equivilant of array until reaching NULL return
    test = new Node(Studentone);
    test -> setNext(new Node(Studenttwo));
    test ->getStudent()->getFullName();
    test ->getStudent()->getStudentNumber();
    test->getNext()->getStudent()->getFullName();
    test->getNext()->getStudent()->getStudentNumber();

    return 0;
}

