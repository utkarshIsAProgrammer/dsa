#include <iostream>
using namespace std;

// namespaces
namespace firstX {
int x = 9;
}

namespace twoX {
int x = 5;
}

int main() {
  cout << firstX::x << endl;

  using namespace twoX;
  cout << x << endl;

  return 0;
}

// NOTE: :: is known as the scope resolution operator in CPP
