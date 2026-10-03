#include <iostream>
using namespace std;

int findElement(int array[], int size, int element) {
  for (int i = 0; i < size; i++) {
    if (array[i] == element) {
      return i;
    }
  }

  return -1;
}

int main() {
  int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(nums) / sizeof(nums[0]);
  int myNum;

  cout << "Enter element to search for: ";
  cin >> myNum;

  int index = findElement(nums, size, myNum);

  if (index != -1) {
    cout << "Yeah! your element is at position " << index << endl;
  } else {
    cout << "OOPS! your element is not in the array!" << endl;
  }

  return 0;
}
