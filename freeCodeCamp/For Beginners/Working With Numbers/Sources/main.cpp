#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int wnum{5};
  double dnum{3.7};

  cout << 5 + 7 << "\n";
  cout << 7 - 5 << "\n";
  cout << 5 * 5 << "\n";
  cout << 10 / 3 << "\n";
  cout << 10.0 / 3.0 << "\n";
  cout << 10 % 3 << "\n";
  cout << 4 + 5 * 10 << "\n";   // Follows order of operations
  cout << (4 + 5) * 10 << "\n"; // Follows order of operations

  cout << wnum + wnum << "\n";
  cout << wnum + dnum << "\n";

  cout << wnum << "\n";
  wnum++;
  cout << wnum << "\n";
  wnum--;
  cout << wnum << "\n";
  wnum += 80;
  cout << wnum << "\n";
  wnum -= 80;
  cout << wnum << "\n";
  wnum *= 5;
  cout << wnum << "\n";
  wnum /= 5;

  cout << pow(2, 5) << "\n";
  cout << sqrt(36) << "\n";
  cout << round(3.6) << "\n"; // Will round up because over .5
  cout << round(3.2) << "\n"; // Will round down because under .5
  cout << ceil(3.2) << "\n";  // Will ALWAYS round up
  cout << floor(3.8) << "\n"; // Will ALWAYS round down
  cout << fmax(2, 5) << "\n"; // Returns biggest of the 2 numbers
  cout << fmin(2, 5) << "\n"; // Returns smallest of the 2 numbers

  return 0;
}
