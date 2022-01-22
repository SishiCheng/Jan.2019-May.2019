#include <iostream>
#include "Dog.h"

int main() {

    // Create a Dog object, referenced by an Animal pointer.
    Animal *myAnimal=new Dog;
    // Delete the dog object
    delete myAnimal;
    // Animal is a base class


    return 0;
}