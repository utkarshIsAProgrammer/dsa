#include <iostream>
using namespace std;

int main() {
  string domains[] = {"backend", "frontend", "cloud", "database",
                      "machine learning"};

  for (int i = 0; i < sizeof(domains) / sizeof(domains[0]); i++) {
    cout << domains[i] << endl;
  }

  cout << "Element 1: " << domains[0] << endl;
  cout << "Element 2: " << domains[1] << endl;
  cout << "Element 3: " << domains[2] << endl;
  cout << "Element 4: " << domains[3] << endl;
  cout << "Element 5: " << domains[4] << endl;

  return 0;
}

// NOTE: sizeof() operator gives size of a data type in bytes
