#include <iostream>
using namespace std;

int main() {
    int x { 5 };

    cout << "x is equal to: " << x << endl; // it is technically more efficient to use '\n' since it will not have to flush the buffer multiple times
    cout << "Yep!" << '\n';
    cout << "Awesome!" << '\n';

    cout << "Enter a Number: ";
    int y {};   // define value-initialized var x to hold user input
    cin >> y;   // get number from user input
    cout << "User input: " << y << '\n';

    cout << "Enter TWO Numbers seperated by a space: ";
    int a, b;
    cin >> a >> b;
    cout << "You Entered: " << a << " and " << b << '\n';

    cout << "Enter three values seperated by spaces: ";
    int c, d, e;
    cin >> c >> d >> e;
    printf("%d, %d, %d", c, d, e);

    return 0;
}