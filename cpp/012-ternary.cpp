#include <iostream>
using namespace std;

int main() {
  int age = 15;
  age < 0 || age > 120 ? cout << "You don't even exist!" << endl
  : age > 18           ? cout << "You can drive!" << endl
  : age < 18           ? cout << "You cannot drive!" << endl
                       : cout << "You've to give a driving test!" << endl;

  return 0;
}
