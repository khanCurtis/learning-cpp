#include <iostream>
#include <cmath>

using namespace std;

double cube(double num) {
  double result{pow(num, 3)};

  return result;
}

int main() {
  double num;

  cout << "Enter a number: ";
  cin >> num;

  cout << cube(num) << "\n";

  return 0;
}
