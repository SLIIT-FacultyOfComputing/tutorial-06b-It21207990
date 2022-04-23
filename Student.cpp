#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;
// Assign studentId and name
void Student::assignDetails(int i,char n[]) {
  studentId=i;
  strcpy(name,n);
  
}

// Display StudentId and Name
void Student::display() {
 cout<<"id="<<studentId<<"name="<<name<<endl;
  
}
