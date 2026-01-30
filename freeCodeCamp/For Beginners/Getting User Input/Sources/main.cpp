#include <iostream>

using namespace std;

int main() {
  int age;
  string name;

  cout << "\nEnter your name: ";
  getline(cin, name); 
  
  cout << "Enter your age: ";
  cin >> age;

  cout << "\nHello, " << name << " You are " << age << " years old" << "\n";

  return 0;
}
