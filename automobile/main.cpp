#include <iostream>
#include <iomanip>
#include <string>
#include "Car.h"
#include "Truck.h"
#include "SUV.h"

using namespace std;
// This program demonstrates the Car, Truck, and SUV
// classes that are derived from the Automobile class.
int main() {
    // Create a Car object for a used 2007 BMW with 50,000 miles, priced at $15,000, with 4 doors.
    Car c ( "BMW", 2007, 50000, 15000, 4);

    // Create a Truck object for a used 2006 Toyota
    Truck t("Toyota", 2006, 40000, 12000, "4WD");
    // pickup with 40,000 miles, priced at $12,000, with 4–wheel drive.

    // Create an SUV object for a used 2005 Volvo
    // with 30,000 miles, priced at $18,000, with
    // 5 passenger capacity.
    SUV s("Volvo", 2005, 30000, 18000, 5);

    // Display the automobiles we have in inventory.
    cout << setprecision (2) << fixed;
    cout << " We have the following car in inventory: \n"
         << c.getModel() << " " << c.getMake() << " with " << c.getDoors() << " doors and "
         << c.getMileage() << " miles\n" << "Price: $" << c.getPrice();

    cout << " We have the following truck in inventory: \n"
         << t.getModel() << " " << t.getMake() << " with " << t.getType() << " drive type and "
         << t.getMileage() << " miles\n" << "Price: $" << t.getPrice();

    cout << " We have the following SUV in inventory: \n"
         << s.getModel() << " " << s.getMake() << " with "
         << s.getMileage() << " miles and " << s.getPassengers() << "passengers capacity\n" << "Price: $" << s.getPrice();
    return 0;
}