#include <iostream>
#include <iomanip>
#include "CurvedActivity.h"

using namespace std;

// This program demonstrates a class that redefines a base class function.
int main() {
    double numericScore;// To hold the numeric score
    double percentage;// To hold curve percentage

    CurvedActivity c;// Define a CurvedActivity object.

    // Get the unadjusted score.
    cout << "Enter the student's raw numeric score: ";
    cin >> numericScore;

    // Get the curve percentage.
    cout << "Enter the curve percentage for this student: ";
    cin >> percentage;

    // Send the values to the exam object.
    c.setPercentage(percentage);
    c.setScore(numericScore);

    // Display the grade data.
    cout << setprecision(2) << fixed;
    cout << "The raw score is  " << numericScore << "\nThe curved score is "
         << c.getScore() << "\nThe curved grade is " << c.getLettergrade();
    return 0;
}