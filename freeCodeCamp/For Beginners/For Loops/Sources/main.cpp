#include <iostream>

using namespace std;

int main() {
  int nums[5]{1, 2, 5, 7, 3};

  for (int i{1}; i <= 5; i++) {
    cout << i << "\n";
  }

  cout << "\n";

  for (int j{0}; j < 5; j++) {
    cout << nums[j] << "\n";
  }

  return 0;
}
