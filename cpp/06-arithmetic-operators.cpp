#include <iostream>
using namespace std;

int main() {
  int students = 25;
  cout << "Students before increment: " << students << endl;

  students++;
  cout << "Students after 1 increment is: " << students << endl;

  students -= 2;
  cout << "Students after decrement by 2 is: " << students << endl;

  students *= 5;
  cout << "Students after multiplication by 5 is: " << students << endl;

  students /= 5;
  cout << "Students after division with 5 is: " << students << endl;

  students %= 9;
  cout << "Students after modulo with 9 is: " << students << endl;

  return 0;
}

// NOTE: Operator Precedence Rule -> PMDAS
