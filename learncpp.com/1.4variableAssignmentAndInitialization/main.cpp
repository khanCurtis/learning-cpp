#include <iostream>
using namespace std;

int main() {
    int width;              // initialize width
    width = 5;              // give width the value 5
    cout << width << endl;  // prints 5 then ends line
    width = 7;              // shadows width with 7
    cout << width << endl;  // prints 7 then ends line

    int height { 5 };       // declares the variable height and initializes it with the value of 5
    cout << height << endl; // prints 5 and ends line

    // Initialization Forms
    // Traditional Initialization
    [[maybe_unused]] int a;          // default-initialization (no initializer)
    // Copy-initialization is used whenever values are implicitly copied
    [[maybe_unused]] int b = 5;      // copy-initialization (inital value after equals sign)
    // Direct-initialization is used when values are explicitly cast to another type
    [[maybe_unused]] int c ( 6 );    // direct-initialization (initial value in parenthesis)

    // Modern Initialization
    // List-initialization disallows narrowing conversions, it also provides a way to initialize objects with a list of values
    [[maybe_unused]] int d { 7 };    // direct-list-initializtion (initial value in braces)
    [[maybe_unused]] int e = { 7 };  //copy-list-initialization (initial value in braces)

    // Zero-initialization will implicitly initialize the variable to 0 or whatever value is closest to 0
    [[maybe_unused]] int f {};       // value-initialization (empty braces)

    return 0;
}