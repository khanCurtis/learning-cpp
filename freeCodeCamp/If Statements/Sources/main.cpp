#include <iostream>

using namespace std;

int getMax(int num1, int num2, int num3) {
  int result;

  if (num1 >= num2 && num1 >= num3) {
    result = {num1};
  } else if (num2 >= num1 && num2 >= num3) {
    result = {num2};
  } else {
    result = {num3};
  }
  return result;
}

int main() {
  bool isMale{true};
  bool isTall{true};
  int num1, num2, num3;

  if (isMale && isTall) {
    cout << "You are a male" << "\n";
  } else if (isMale && !isTall) {
    cout << "You are a male, but you are not tall" << "\n";
  } else if (!isMale && isTall) {
    cout << "You are not a male, but you are tall" << "\n";
  } else {
    cout << "You are not a male, nor are you tall" << "\n";
  }

  cout << "Enter the first number: ";
  cin >> num1;
  cout << "Enter the second number: ";
  cin >> num2;
  cout << "Enter the third number: ";
  cin >> num3;

  cout << "The biggest number is: " << getMax(num1, num2, num3) << "\n";

  return 0;
}
