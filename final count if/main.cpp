#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Function prototype
bool outOfRange(int);

int main() {
    vector<int> vec1={0, 99, 120, -33, 10, 8, -1 , 101};//Create a vector of i nts.

    auto it1=vec1.begin();
    auto it2=vec1.end();
    int invalid=count_if(it1,it2,outOfRange);//Get the number of elements that are < 0 or > 100.
    cout << invalid;
    cout << true;
    //Display the results.
    return 0;
}

//*************••···············································
// The outOfRange function returns true if n is out of range. •
//*************••···············································
bool outOfRange(int n) {
    bool status;

    if(n<0 || n>100) status=true;
    else status=false;
    return status;
}//Constants for min and max values

//Flag to hold the status

//Determine whether n out of range.