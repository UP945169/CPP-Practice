#include <iostream>
#include "GradeBook2.h"
using namespace std;

GradeBook2::GradeBook2(string name){
    setCourseName(name);
}

void GradeBook2::setCourseName(string name){
    if (name.length()<=25)
    {
        courseName = name;
    }
    if (name.length() > 25)
    {
        //set courseName to first 25 parameter name
        courseName = name.substr(0,25);

        cout << "Name\n" << name << "\" exceeds maximum length (25).\n" << "Limiting courseName to first 25 characters.\n"
        << endl;
    }
}

string GradeBook2::getCourseName(){
    return courseName;
}

void GradeBook2::displayMessage(){
    cout << "Welcome to the grade book for \n" << getCourseName() << "!" << endl;
}