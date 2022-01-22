#include <iostream>
#include "NumberList.h"

using namespace std;

int main() {
    NumberList list;
    list.appendNode( 3.0 );
    list.appendNode( 10.0 );
    list.appendNode( 12.0 );
    list.appendNode( 15.0 );
    list.appendNode( 20.0 );
    list.appendNode( 5.0 );
    list.appendNode( 16.0 );
    list.appendNode( 25.0 );
    list.appendNode( 8.0 );

    list.displayList();
    list.deleteRange(list.getPointerAtPosition(3), list.getPointerAtPosition(6));
    list.displayList();


    return 0;
}