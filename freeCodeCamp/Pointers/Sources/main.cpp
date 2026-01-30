#include <iostream>

using namespace std;

int main() {
  int age{19};
  double gpa{2.7};
  string name{"Khanon"};
  int *pAge{&age};
  double *pGpa{&gpa};
  string *pName{&name};

  cout << "Age's Memory Address: " << &age << "\n";
  cout << "GPA's Memory Address: " << &gpa << "\n";
  cout << "Name's Memory Address: " << &name << "\n";

  cout << "\nAge's Memory Address: " << pAge << "\n";
  cout << "GPA's Memory Address: " << pGpa << "\n";
  cout << "Name's Memory Address: " << pName << "\n";

  cout << "\nAge's Value: " << *pAge << "\n";
  cout << "GPA's Value: " << *pGpa << "\n";
  cout << "Name's Value: " << *pName << "\n";

  cout << "\nAge's Value: " << *&age << "\n";
  cout << "GPA's Value: " << *&gpa << "\n";
  cout << "Name's Value: " << *&name << "\n";

  return 0;
}
