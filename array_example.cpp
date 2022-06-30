#include <iostream>
using namespace std;

int main() {
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  for (int i = 0; i < 4; i++) {
    cout << cars[i] << endl;
  }
  cout << endl;
  cars[0] = "Opel";
  for (int i = 0; i < 4; i++) {
    cout << cars[i] << endl;
  }
  cout << endl;
  
  //Why did the result show 20 instead of 5, when the array contains 5 elements?
  //It is because the sizeof() operator returns the size of a type in bytes.
  int myNumbers[5] = {10, 20, 30, 40, 50};
  cout << sizeof(myNumbers) << endl;
  int getArrayLength = sizeof(myNumbers) / sizeof(int);
  cout << getArrayLength << endl;
  cout << endl;

  //2D
  string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
  };
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 4; j++) {
      cout << letters[i][j] ;
    }
    cout << "\n";
  }
  cout << endl;

  //3D
  string letters1[2][2][2] = {
    {
      { "A", "B" },
      { "C", "D" }
    },
    {
      { "E", "F" },
      { "G", "H" }
    }
  };
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      for(int k = 0; k < 2; k++) {
        cout << letters1[i][j][k] ;
      }
      cout << "\n";
    }
    cout << "\n";
  }

}