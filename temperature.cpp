#include <iostream>

using namespace std;

int main()
{
	int temperature;
	cout << "Enter the temperature in degree:";
	cin >> temperature;
	
	if(temperature <32) {
		cout << "Bring a heavy jacket";
	} 
	else if(temperature && 32 and 50) {
		cout << "Bring a light jacket";
	}
	else {
		cout << "Not bring any jacket";
	}
	return 0;
	
}