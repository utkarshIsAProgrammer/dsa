#include <iostream>
using namespace std;

int main() {
  int age = 19;
  bool isVIP = false;

  if (age > 18 && age < 60) {
    if (!isVIP) {
      cout << "You've to pay $12 for tickets!" << endl;
    } else {
      cout << "VIPs get 50% off!" << endl;
    }
  } else if (age >= 60 || age <= 10) {
    cout << "Tickets are free for you!" << endl;
  } else if (!(age > 18) && !(age <= 10)) {
    cout << "Teenagers pay $6!" << endl;
  }

  return 0;
}
