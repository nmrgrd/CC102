#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> options = {"*", "^", "#", "$", "@"};
  vector<char> choices(3);

  for (int i = 0; i < 3; ++i) {
    cout << "Enter " << (i + 1) << (i == 0 ? "st" : (i == 1 ? "nd" : "rd"))
         << " symbol to use (";
    for (const string& opt : options) {
      cout << opt << ",";
    }
    cout << "): ";
    char choice;
    cin >> choice;
    bool found = false;
    for (const string& opt : options) {
      if (opt[0] == choice) {
        choices[i] = choice;
        found = true;
        break;
      }
    }
    if (!found) {
      cout << "Invalid choice. Please try again." << endl;
      --i; // Retry the current iteration
    }
  }

  cout << "You picked: ";
  for (char c : choices) {
    cout << c;
  }
  cout << endl;

  return 0;
}