#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << unitbuf;
  cerr << unitbuf;

  string input;
  
  while (true) {
    cout << "Stroke: "

     if (!getline(cin,input))
     if (cin.eof()) {
      cout << "Exit by ctrl+d" << "\n";
      break;
     }
     cin.clear();
     continue;
  }

  if (input == "q") {
    cout << "Exit by q" << "\n";
    break;
  }

  if (input.empty()) continue; 

  cout << "You entered: " << input << "\n";

  return 0;`
}