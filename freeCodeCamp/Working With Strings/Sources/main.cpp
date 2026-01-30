#include <iostream>

using namespace std;

int main() {
  string phrase = "Hello, World!"; 

  cout << phrase << "\n";
  cout << phrase.length() << "\n";
  cout << phrase[7] << "\n";

  phrase[0] = {'B'};
  cout << phrase << "\n";
  
  cout << phrase.find("World", 0) << "\n";
  
  string phrasesub {phrase.substr(4, 5)};
  cout << phrasesub << "\n";
 
  return 0;
}
