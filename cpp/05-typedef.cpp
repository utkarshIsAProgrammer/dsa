#include <iostream>
using namespace std;

// this is traditions method to give existing datatype a new name
// typedef string text_t;
// typedef int integer_t;

// but this works better with the templates
using text_t = string;
using integer_t = int;

int main() {
  text_t firstName = "IndieDev";
  cout << firstName << endl;

  integer_t age = 29;
  cout << age << endl;

  return 0;
}
