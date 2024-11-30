#include <iostream>

using namespace std;

int main() {
  int n;
	cout << "Enter rows: ";
	cin>> n;
	
  // Upper half of the pattern
  for (int i = n; i > 0; i--) {
    for (int j = 1; j < (n*2+1); j++) {
      cout << " ";
    }
    for (int k= n - i; k>= 1; k--) {
    	cout << "^";
   }
   cout << "*" << endl;
  }

  // Middle rows (with hashes)
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 10; ++j) {
      cout << "#";
    }
    cout << "*";
    cout << endl;
  }

  // Lower half of the pattern
  for (int i = n; i > 0; i--) {
    for (int j = 1; j < (n*2+1); j++) {
      cout << " ";
    }
    for (int k= n - i; k>= 1; k--){
    	cout << "^";
   }
   cout << "*" << endl;
  }
  return 0;
}