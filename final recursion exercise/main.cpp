#include <iostream>

using namespace std;

int numofWay(int);
int factorial(int);

int main() {
    cout << factorial(3);
    return 0;
}

int numofWay(int n) {
    if(n==1) return 1;
    if(n==2) return 2;
    else return numofWay(n-1)+numofWay(n-2);
}

int factorial(int n) {
    if(n==0) return 0;
    if(n==1) return 1;
    else return n*factorial(n-1);
}