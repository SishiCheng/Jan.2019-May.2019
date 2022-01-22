#include <iostream>
#include "CsStudent.h"

using namespace std;

int main() {
    CsStudent student("Jennifer Haynes", "167W98337", 2006);// Create a CsStudent object for a student.

    // Store values for Math, Computer Science, and General

    // Ed hours.

    student.setmathHours(12);// Student has taken 12 Math hours

    student.setcsHours(20);// Student has taken 20 CS hours

    student.setgenHours(40);// Student has taken 40 Gen Ed hours

    cout << "The student " << student.getName() << "  needs to take "
         << student.getRemaindinghour() << " more hours to graduate.";// Display the number of remaining hours.
    return 0;
}