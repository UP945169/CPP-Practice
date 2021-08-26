#include <iostream>
#include "GradeBook2.h"
using namespace std;

int main(){
    GradeBook gb1("CS101 Introduction to programming in C++");
    GradeBook gb2("CS102 C++ Data Structures");

    cout << "gb1 initial course name is: "
        << gb1.getCourseName()
        << "\ngb2 initial course name is: "
        << gb2.getCourseName() << endl;

    gb1.setCourseName("CS101 C++ Programming");

    cout << "\ngb1 course name is: "
        << gb1.getCourseName()
        << "\ngb2 course name is: "
        << gb2.getCourseName() << endl;
}