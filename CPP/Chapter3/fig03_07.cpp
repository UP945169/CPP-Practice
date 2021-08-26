#include <iostream>
#include <string>
using namespace std;

//gradeBook class definition
class gradeBook{
    private: 
        string courseName;
    public:
        //constructor initalizes courseName with supplied as argument
        gradeBook(string name){
            setCourseName(name); //call set function to initialize 
        }
        void setCourseName(string name){
            courseName = name;
        }
        string getCourseName(){
            return courseName;
        }

        void displayMessage(){
            cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
        }
};

int main(){
    //create two grade book objects using the contructors
    gradeBook gb1("Computer Science");
    gradeBook gb2( "Medicine" );

    cout << "GradeBook1 created for course: " << gb1.getCourseName() 
    << "\nGradeBook2 created for course: " << gb2.getCourseName() << endl;
}