#include <iostream>
using namespace std;

int five() {
    return 5;
}

int main() {
    int a { 2 };                // initialize the variable 'a' with a literal value of 2
    int b { 2 + 3 };            // initialize the variable 'b' with a computed value of 5
    int c { (2 * 3) + 4 };      // initialize the variable 'c' with the computed value of 10
    int d { b };                // initialize the variable 'd' with the variable value of 5
    int e { five() };           // initialize the variable 'e' with the function return of 5

    return 0;
}