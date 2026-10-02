#include <iostream>
using namespace std;

int main() {
  int day = 6;

  switch (day) {
  case 1:
    cout << "It's Monday!" << endl;
    break;
  case 2:
    cout << "It's Tuesday!" << endl;
    break;
  case 3:
    cout << "It's Wednesday!" << endl;
    break;
  case 4:
    cout << "It's Thursday!" << endl;
    break;
  case 5:
    cout << "It's Friday!" << endl;
    break;
  case 6:
    cout << "It's Saturday!" << endl;
    break;
  case 7:
    cout << "It's Sunday!" << endl;
    break;
  default:
    cout << "Invalid type of day!" << endl;
  }

  return 0;
}
