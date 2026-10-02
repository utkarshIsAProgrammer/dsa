#include <iostream>
using namespace std;

int main() {
  int age = 0;

  cout << "Enter your age: ";
  cin >> age;

  if (age < 0 || age > 120) {
    cout << "You don't even exist!" << endl;
  } else if (age > 18) {
    cout << "You can drive!" << endl;
  } else if (age < 18) {
    cout << "You cannot drive!" << endl;
  } else {
    cout << "You've to give a driving test!" << endl;
  }

  return 0;
}
