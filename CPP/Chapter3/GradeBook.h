#include <iostream>
#include <string>
using namespace std;

class GradeBook{
    private:
        string courseName;
    public:
        GradeBook(string name){
            setCourseName(name);
        }
    void setCourseName(string name){
        courseName = name;
    }
    string getCourseName(){
        return courseName;
    }
    //we are using the void function because we are not returing values
    //instead we are returing a string
    void displayMessage(){
        cout << "Welcome to the grade book for:\n" << getCourseName() << "!" << endl;
    }
};