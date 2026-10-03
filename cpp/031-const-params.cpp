#include <iostream>
using namespace std;

// can't change value as it's constant and set to 7
void printNum(const int x) { cout << x << endl; }

int main() {
  int x = 7;
  printNum(x);

  return 0;
}
