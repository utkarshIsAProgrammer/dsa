#include <iostream>
using namespace std;

double getTotal(double prices[], int size) {
  double total = 0;

  for (int i = 0; i < size; i++) {
    total += prices[i];
  }

  return total;
}

int main() {
  double prices[] = {25.6, 200.9, 52};

  int size = sizeof(prices) / sizeof(prices[0]);
  double total = getTotal(prices, size);
  cout << "$Total: " << total << endl;

  return 0;
}
