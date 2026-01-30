#include <iostream>

using namespace std;

class Book {
public:
  string title;
  string author;
  int pages;

  // Constructor
  Book() {
    title = "no title";
    author = "no author";
    pages = {0};
  }

  Book(string aTitle, string aAuthor, int aPages) {
    title = aTitle;
    author = aAuthor;
    pages = aPages;
  }
};

class Student {
public:
  string name;
  string major;
  double gpa;

  Student(string aName, string aMajor, double aGpa) {
    name = aName;
    major = aMajor;
    gpa = aGpa;
  }

  // object function
  bool hasHonors() {
    if (gpa >= 3.5) {
      return true;
    } else {
      return false;
    }
  }
};

int main() {
  // Object
  Book book1("Harry Potter", "JK Rowling", 500);
  Book book2("Lord of the Rings", "Tolkein", 700);
  Book book3;

  cout << book1.title << "\n";
  cout << book1.author << "\n";
  cout << book1.pages << "\n\n";

  cout << book2.title << "\n";
  cout << book2.author << "\n";
  cout << book2.pages << "\n\n";

  cout << book3.title << "\n";
  cout << book3.author << "\n";
  cout << book3.pages << "\n\n";

  Student student1("Khanon", "CS", 3.4);
  Student student2("Charlotte", "Psychology", 4.0);

  cout << student1.name << "\n";
  cout << student1.major << "\n";
  cout << student1.gpa << "\n";
  cout << student1.hasHonors() << "\n\n";

  cout << student2.name << "\n";
  cout << student2.major << "\n";
  cout << student2.gpa << "\n";
  cout << student2.hasHonors() << "\n";

  return 0;
}
