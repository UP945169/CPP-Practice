#include <iostream>
#include "GradeBook.h"
using namespace std;

int main(){
    GradeBook gb1("Computer science");
    GradeBook gb2("Biology");

    cout << "gradeBook1 created for course: " << gb1.getCourseName() 
    << "\ngradeBook2 created for course: " << gb2.getCourseName() << endl;
}