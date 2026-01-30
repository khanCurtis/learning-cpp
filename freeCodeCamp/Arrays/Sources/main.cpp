#include <iostream>

using namespace std;

int main() {
  int nums[6] {4, 8, 15, 16, 23, 42};

  cout << nums[4] << "\n";

  nums[4] = {15};

  cout << nums[4] << "\n";

  return 0;
}
