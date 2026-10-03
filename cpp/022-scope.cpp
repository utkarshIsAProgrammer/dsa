#include <iostream>
using namespace std;

// global scope
int a = 29;

// local scope (function scope)
void funcOne() {
  int x = 5;
  cout << "Local Scope: " << x << endl;
}

// block scope (curly braces scope)
void funcTwo() {
  cout << "Block Scope:" << endl;
  for (int i = 1; i < 4; i++) {
    cout << i << endl;
  }
}

// variable shadowing
void funcThree() {
  int a = 9;
  cout << "Shadow Variable: " << a << endl;
}

int main() {
  cout << "Global Variable: " << a << endl;
  funcOne();
  funcTwo();
  funcThree();

  return 0;
}
