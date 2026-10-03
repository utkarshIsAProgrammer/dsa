#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int arr[5];

  // filling in whole array
  fill(arr, arr + 5, 8);

  for (int num : arr) {
    cout << num << " ";
  }
  cout << endl;

  // filling in specific positions
  fill(arr + 1, arr + 4, 9);

  for (int num : arr) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}

// NOTE: fill(start index, end index, element_to_fill)
