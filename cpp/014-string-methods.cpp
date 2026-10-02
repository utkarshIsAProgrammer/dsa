#include <iostream>
using namespace std;

int main() {
  string name = "";
  cout << "Enter your name: ";

  // getline read the entire line
  getline(cin, name);

  // length of string
  cout << "Your name has " << name.length() << " characters" << endl;

  // check for empty string
  if (name.empty()) {
    cout << "You have to provide your name there!" << endl;
  }

  // get char from a string
  cout << name.at(0) << endl;

  // insert chars to a string
  cout << name.insert(0, "@") << endl;

  // find a char from string
  cout << name.find("e") << endl;

  // erase chars from a string
  cout << name.erase(0, 3) << endl;

  return 0;
}
