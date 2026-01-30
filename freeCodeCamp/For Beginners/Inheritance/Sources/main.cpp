#include <iostream>

using namespace std;

// Super Class
class Chef {
public:
  void makeChicken() { cout << "The chef makes chicken" << "\n"; }

  void makeSalad() { cout << "The chef makes salad" << "\n"; }

  void makeSpecial() { cout << "The chef makes bbq ribs" << "\n"; }
};

// Sub Class
class ItalianChef : public Chef {
public:
  void makePasta() { cout << "The italian chef makes pasta" << "\n"; }

  void makeSpecial() { cout << "The chef makes pizza" << "\n"; }
};

int main() {
  Chef chef;
  chef.makeChicken();
  chef.makeSpecial();

  ItalianChef italianChef;
  italianChef.makeSalad();
  italianChef.makePasta();
  italianChef.makeSpecial();

  return 0;
}
