#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }

int add(int a, int b, int c) { return a + b + c; }

double add(double a, double b) { return a + b; }

int main() {
  cout << add(4, 7) << endl;
  cout << add(5, 7, 2) << endl;
  cout << add(9, 3) << endl;

  return 0;
}

// NOTE: parameters must differ when using function overloading
