#include <iostream>

using namespace std;

int powerOf(int base, int power) {
  int result{1};
  
  for(int i{0}; i < power; i++) {
    result = {result * base};
  }

  return result;
}

int main() {
  int base;
  int power;

  cout << "Enter a Base: ";
  cin >> base; 
  cout << "Enter a Power: ";
  cin >> power; 

  cout << powerOf(base, power) << "\n";

  return 0;
}
