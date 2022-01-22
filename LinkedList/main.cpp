#include <iostream>
#include <vector>
#include "Node.h"
#include "LinkedList.h"

using namespace std;

int main() {
    Node<double> *n1 = new Node<double>( 1.1, nullptr );
    Node<double> *n2 = new Node<double>( 2.5, nullptr );

    n1 ->setNext( n2 );

    LinkedList<int> LinkedList;
    LinkedList.append( 1 );
    LinkedList.append( 2 );
    LinkedList.append( 3 );
    LinkedList.append( 4 );
    LinkedList.append( 5 );

    LinkedList.print();

    return 0;
}