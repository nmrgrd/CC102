#include <iostream>

using namespace std;

int main()
{
	int age;
	cout << "Enter age:";
	cin >> age;
	if(age<16) {
		cout << "To young to drive";
	} else if (age ==16) {
		cout << "Better clear the road";
	} else if (age>16) {
		cout << "You are getting pretty old";
	}
	return 0;
}