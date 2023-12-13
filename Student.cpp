#include "Student.h"
#include <cstring>
#include <cctype>


Student::Student() {
  //initialize chars
}

Student::~Student() {
  //deconstructor 
}



void Student::setFirstName(char* newFirst) {//set first name func
  First = new char[100];
  strcpy(First, newFirst);
}
void Student::getFullName() {//functon to read in first name
    cout << "Name: " << Last << ", " << First << endl;
}
void Student::setLastName(char* newLast) {//function to read last name
  Last = new char[100];
  strcpy(Last, newLast);
}

void Student::getStudentNumber() {//get student number 
    cout << "ID: " << ID << endl;
}
void Student::setStudentNumber(int newStudentID) {//set student id
  ID = newStudentID;
}





