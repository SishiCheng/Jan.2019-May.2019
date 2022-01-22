#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int searchval;// Value to search for

    vector<int> unsortval = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5}; // Create a vector of unsorted integers

    sort(unsortval.begin(), unsortval.end());// Sort the vector.

    // Display the vector.
    cout << "Here are the sorted values: ";
    for (auto element:unsortval) {
        cout << element << " ";
    }
    cout << endl;

    // Get the value to search for.
    cout << "Enter a value to search for: ";
    cin >> searchval;

    // Search for the value
    if (binary_search(unsortval.begin(), unsortval.end(), searchval))
        cout <<  "That value is in the vector.\n";
    else cout <<  "That value is not in the vector.\n";
    return 0;
}