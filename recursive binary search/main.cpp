// This program demonstrates the recursive binarySearch function.
#include <iostream>

using namespace std;

// Function prototype
int binarySearch(int[] , int , int, int );

const int SIZE = 20;// Array size

int main() {
    // Define an array of employee ID numbers
    int tests[SIZE] = {101, 142, 147, 189, 199, 207, 222,
                       234, 289, 296, 310, 319, 388, 394,
                       417, 429, 447, 521, 536, 600};

    int empId;// To hold an ID number

    int results;// To hold the search results

    cout << "Pease enter the employee ID number which to search: ";
    cin >> empId;// Get an employee ID number to search for.

    cout << binarySearch(tests, 0, SIZE-1, empId);// Search for the ID number in the array.

    // Display the results of the search.
    return 0;
}

//****************************************************************
// The binarySearch function performs a recursive binary search *
// on a range of elements of an integer array passed into the *
// parameter array. The parameter first holds the subscript of *
// the range's starting element, and last holds the subscript *
// of the range's last element. The parameter value holds the *
// search value. If the search value is found, its array *
// subscript is returned. Otherwise, −1 is returned indicating *
// the value was not in the array. *
//****************************************************************

int binarySearch(int array[], int start, int end, int search) {
    // Midpoint of search
    if(start>end) {
        return -1;
    }
    else {
        int midpoint=(end+start)/2;
        if(array[midpoint]==search){
            return midpoint;
        }
        else if(array[midpoint]<search) binarySearch(array,midpoint+1,end,search);
        else if(array[midpoint]>search) binarySearch(array,start,midpoint-1,search);
    }

}
