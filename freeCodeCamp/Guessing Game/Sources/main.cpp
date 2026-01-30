#include <iostream>

using namespace std;

int main() {
  int secret{7};
  int guess;
  int count{0};
  int limit{5};
  bool outOfGuesses{false};

  do {
    if (count < limit) {
      cout << "Enter a Number: ";
      cin >> guess;
      count++;
    } else {
      outOfGuesses = {true};
    }
  } while (secret != guess && !outOfGuesses);

  if (!outOfGuesses) {
    cout << "You Win!" << "\n";
  } else {
    cout << "You ran out of guesses!" << "\n";
  }

  return 0;
}
