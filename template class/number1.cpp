#include <iostream>
#include "Number.h"

using namespace std;

int main() 
{
  //To be filled in by student
  Number<int> n;
  if (n.calculate()) cout << n.returnNum() << " is prime";
  else cout << n.returnNum() << " is not prime";
}

//SAMPLE EXECUTIONS
/*
 * Enter a value
 * -3
 * The number must be greater than zero
 * 5
 * 5 is prime
 */
 
/*
 * Enter a value
 * 7
 * 7 is prime
 *
 * Enter a value
 * 9
 * 9 is not prime
 */
 
/*
 * Enter a value
 * 7
 * 7 is prime
 *
 * Enter a value
 * 9
 * 9 is not prime
 */