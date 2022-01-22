#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    const int SIZE=5;
    // Define two vectors
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {100, 200, 300, 400, 500};

    auto it1 = v1.begin()+1;
    auto it2 = v2.begin();
    auto it3 = v2.begin()+3;

    // Insert a range of elements into v1.
    v1.insert(it1, it2, it3);

    /// Display the elements of v1.
    // Display the vector elements.
    for(auto element:v1) {
        cout << element << " ";
    }
    return 0;
}