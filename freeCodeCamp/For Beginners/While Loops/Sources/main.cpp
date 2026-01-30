#include <iostream>

using namespace std;

int main() {
  int i{1};
  while (i <= 10) {
    cout << i << "\n";
    i++;
  }

  int j{1};
  do {
    cout << j << "\n";
    j++;
  } while(j <= 5);

  return 0;
}
