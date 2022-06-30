#include <iostream>
using namespace std;
#include <cmath>

int main() {
  //if
  cout << "-if-" << endl;
  int time = 20;
  if (time < 10) {
    cout << "Good day." << endl;
  } else if (time < 20) {
    cout << "Good day." << endl;
  } else {
    cout << "Good evening." << endl;
  } 
  //if short hand
  cout << "-if short hand-" << endl;
  int time1 = 20;
  string result = (time1 < 18) ? "Good day." : "Good evening.";
  cout << result << endl;
  //switch
  cout << "-switch-" << endl;
  int day = 4;
  switch (day) {
    case 6:
      cout << "Today is Saturday" << endl;
      break;
    case 7:
      cout << "Today is Sunday" << endl;
      break;
    default:
      cout << "Looking forward to the Weekend" << endl;
  }
  //while
  cout << "-while-" << endl;
  int i = 0;
  while (i < 5) {
    cout << i << "\n";
    i++;
  }
  cout << endl;
  //do while - will always be executed at least once
  cout << "-do while-" << endl;
  int ii = 0;
  do {
    cout << ii << "\n";
    ii++;
  }
  while (ii < 5);
  cout << endl;
  //for
  cout << "-for-" << endl;
  for (int i = 0; i < 5; i++) {
    cout << i << "\n";
  }
  //break/continue
  cout << "-break and continue-" << endl;
  for (int i = 0; i < 10; i++) {
    if (i == 2) {
      continue;
    } 
    if (i == 4) {
      break;
    }
    cout << i << "\n";
  }

}