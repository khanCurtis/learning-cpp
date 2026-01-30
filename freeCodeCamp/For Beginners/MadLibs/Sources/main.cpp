#include <iostream>

using namespace std;

int main() {
  string color, pluralNoun, celebrity;

  cout << "enter a color: ";
  getline(cin, color);
  cout << "enter a plural noun: ";
  getline(cin, pluralNoun);
  cout << "enter a celebrity: ";
  getline(cin, celebrity);

  cout << "roses are " << color << "\n";
  cout << pluralNoun << " are blue" << "\n";
  cout << "I love " << celebrity << "\n";
  
  return 0;
}
