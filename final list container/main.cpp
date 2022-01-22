// This program demonstrates the STL list container.
#include <iostream>
#include <list>

using namespace std;

int computeSum(list<int>&);

int main() {
    // Define an empty list.
    list<int> myList;

    // Add some values to the list.
    for(int i=0; i<100; i+=10) {
        myList.push_back(i);
    }

    // Use an iterator to display the values.
    for(auto element:myList) {
        cout << element << " ";
    }

    cout << endl;
    //Now reverse the order of the elements
    myList.reverse();

    //display the value again, with a range based for loop;
    for(auto element:myList) {
        cout << element << " ";
    }
    cout << endl;
    cout << computeSum(myList) << endl;
    return 0;


}

int computeSum(list<int> &l) {
    auto it=l.begin();
    int sum;

    while (it!=l.end()) {
        sum+=*it;
        it++;
    }

    return sum;
}