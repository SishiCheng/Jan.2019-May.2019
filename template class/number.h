/**
 * Number.h:
 * Template class for a number
 * 
 * @author Leran Ma
 */
#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;

template <class T>
class Number
{
private:
  T num;//The number to hold

public:
  /**
   * No argument constructor for class
   */
  Number();
  
  /**
   * Gets a number from the command line between 0 and 9
   * 
   * @return A valid value from the user
   */
  T getNumber();
  
  /**
   * Returns the number stored in the object
   * 
   * @return The number currently stored in the object
   */
  T returnNum()const;

  /**
   * Determines if the number stored in the object is prime
   * 
   * @return A boolean value that indicates whether the number is prime
   */
  bool calculate() const;
};

template <class T>
Number<T>::Number()
{
  num = getNumber();
}

/*
 * Note: This implementation will not work with values like "-a",
 * don't worry about this when testing
 */
template <class T>
T Number<T>::getNumber()
{
  string i; 
  
  char x;
  int a;
  bool flag = true;
  cout << "Enter a value" << endl;
  cin >> i;

  while(flag)
  {
    try
    {
      if (!isdigit(i[0]) && i[0]!='-') throw x;
      else if (i[0]=='0' || i[0]=='-') throw a;
      flag = false;
    }
    catch(char x) 
    {
      cout << "Not a number, try again" << endl;
      cin >> i;
    }
    catch (int a)
    {
      cout << "The number must be greater than zero" << endl;
      cin >> i;
    }
  }
  
  T n = stoi(i);
  return n;
}

template <class T>
T Number<T>::returnNum() const
{
  return num;
}

template <class T>
bool Number<T>::calculate() const
{
  for (int i=2; i<num; i++)
  {
    if (num%i==0) return false;
  }
  return true;
}

#endif