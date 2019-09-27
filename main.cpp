/******************************


******************************/

// Notes:
  // 1/2 b * h
  // A program is sequential is runs from top to bottom(synchronous)
  // Node.js is asynchronous because your program can do  many steps at the
  // same time.


#include <iostream>
using namespace std;

// Function prototype.
double findArea(double base, double height);

int main() {

  cout << endl;

  // Declares variables.
  double base;
  double height;
  double theR;

  // Prompt user.
  cout << "Enter base of triangle: ";
  // Store input.
  cin >> base;
  cout << endl;

  cout >> "Enter height of traingle: ";
  cin >> height;
  cout << endl;

  theR = findArea(base, height);

  cout << "The area of the triangle is " << thR;

  cout << endl;

  return 0;

}

// Builds function.
double findArea(double base, double height) {

  return 0.5 * base * height;

}
