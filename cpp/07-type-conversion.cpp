#include <iostream>
using namespace std;

int main() {
  // implicit conversion
  int pi = 3.14;
  cout << pi << endl;

  // explicit conversion
  double piTwo = static_cast<int>(3.14);
  cout << piTwo << endl;

  int correct = 8;
  int questions = 10;
  double score = correct / double(questions) * 100;
  cout << score << "%" << endl;

  return 0;
}
