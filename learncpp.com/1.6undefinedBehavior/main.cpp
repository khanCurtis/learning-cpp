#include <iostream>
using namespace std;

void doNothing(int&) {}

int main() {
    int x;
    doNothing(x);
    cout << x << '\n';

    cout << sizeof(int) << '\n'; // print how many bytes of memory an int value uses

    return 0;
}