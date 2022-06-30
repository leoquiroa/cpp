#include <iostream>
using namespace std;

int main() {
  cout << "Hello World 1!" << endl;

  //All C++ variables must be identified with unique names.
  int myNum = 5;               // Integer (whole number without decimals)
  double myFloatNum = 5.99;    // Floating point number (with decimals)
  char myLetter = 'D';         // Character
  string myText = "Hello";     // String (text)
  bool myBoolean = true;       // Boolean (true or false)

  cout << "I am " << myNum << " years old." << endl;

  // Declare Many Variables
  int x = 5, y = 6, z = 50;
  cout << x + y + z << endl;

  //One Value to Multiple Variables
  int x1, y1, z1;
  x1 = y1 = z1 = 50;
  cout << x1 + y1 + z1 << endl;

  //const keyword will declare the variable as "constant" aka unchangeable and read-only
  const int myNum1 = 15;  // myNum will always be 15
  //myNum1 = 10;  // error: assignment of read-only variable 'myNum'
  
  return 0;
}