#include <iostream>
using namespace std;

// pass by value
void addTen(int n) {
  n += 10; // modify the copy
  cout << "Inside: " << n << endl;
}

// pass by reference
void addNine(int n) {
  n += 9; // modifies original
  cout << "Inside: " << n << endl;
}

int main() {
  int z = 19;
  cout << &z << endl; // shows memory address of the value stored in the ram

  addTen(z); // pass a copy
  cout << "Outside: " << z << endl;

  addNine(z); // pass original value
  cout << "Outside: " << z << endl;

  return 0;
}
