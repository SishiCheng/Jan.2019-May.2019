#include <iostream>
#include <iomanip>
#include "FinalExam.h"

using namespace std;

int main() {
    int questions;//number of questions on the exam
    int missed;//number of questions missed by the student

    //get the number of questions on the final exam
    cout << "Please enter the number of questions on the final exam: ";
    cin >> questions;

    //get the number of questions the student missed
    cout << "Please enter the number of questions the student missed: ";
    cin >> missed;

    //Define a FinalExam object and initialize it with the value entered
    FinalExam f(questions, missed);


    //Display the test results
    cout << setprecision(2) <<fixed;
    cout << "Each question counts " <<  f.getPoints() << " points.\n";
    f.adjustScore();
    cout << "The adjusted exam score is " << f.getScore() <<endl
         << "The exam grade is " << f.getLettergrade();
    return 0;
}