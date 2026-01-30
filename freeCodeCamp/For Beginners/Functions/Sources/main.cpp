#include <iostream>

using namespace std;

void hello(string name, int age) {
  cout << "Hello, " << name << "! You are " << age << " years old!" << "\n";
}

int main() {
  string name;
  int age;

  cout << "Enter your name: ";
  getline(cin, name);
  cout << "Enter your age: ";
  cin >> age;

  hello(name, age);
  hello("Charlotte", 18);
  hello("Rae", 16);

  return 0;
}
