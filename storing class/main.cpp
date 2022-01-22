#include <iostream>
#include <vector>
#include "Profuct.h"

using namespace std;

int main() {
    // Create a vector of Product objects.

    Profuct prod1("T-Shirt", 20);
    Profuct prod3("Coffee Mug", 30);

    vector<Profuct> products;

    products.emplace_back(prod1);
    products.emplace_back(prod3);

    auto it=products.begin()+1;
    products.emplace(it, "calendar", 25);
    // Display the vector elements.
    for(auto it=products.begin(); it!= products.end(); it++) {
        cout << "Product: " << it->getName() << "\nUnits: " << it->getUnits() << endl;
    }

    return 0;
}