#include <iostream>
using namespace std;

void greetUser(string name) { cout << "Hello " + name << endl; }

int sum(double a, double b) { return a + b; }

int main() {
  greetUser("indiedev");

  int result = sum(9, 5);
  cout << result << endl;

  return 0;
}
