#include <iostream>
using namespace std;

int main() {
  for (int i = 1; i < 11; i++) {
    if (i == 5) {
      continue;
    } else if (i == 9) {
      break;
    }
    cout << i << endl;
  }

  return 0;
}
