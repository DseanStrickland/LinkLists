#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student{
public:

  //constructor & deconstructor 

  Student();
  ~Student();
  
//get and set students ID
  void setStudentNumber(int newStudentID);

  void getStudentNumber();

  //Set and get all the names

  void setFirstName(char* newFirst);
  void setLastName(char* newLast);
  void getFullName();
   
    
private:
  //local variable initialization
  int ID;
  char* First;
  char* Last;
    
};

#endif
