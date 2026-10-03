#include <iostream>
using namespace std;

int main() {
  string domains[] = {"backend", "frontend", "cloud", "database",
                      "machine learning"};

  for (string domain : domains) {
    cout << domain << endl;
  }

  return 0;
}
