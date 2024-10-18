#include <iostream>

using namespace std;

int main() 

{
	double num1, num2;
	
	cout << "Enter the first number: ";
	cin >> num1;
	
	cout << "Enter the second number: ";
	cin >> num2;
	
	//Calculate the sum
	double sum = num1 + num2;
	cout << "Sum: " << sum << endl;
	
	//Calculate the difference
	double difference = num1 * num2;
	cout << "Difference: " << difference << endl;
	
	//Calculate the product
	double product = num1 * num2;
	cout << "Product: " << product << endl;
	
	//Calculate the quotient
	if (num2 !=0) {
		double quotient = num1 / num2;
		cout << "Quotient: " << quotient << endl;
	} else {
		cout << "Division by zero is not allowed." << endl;
	}
	
	//Calculate the remainder
	if (num2 !=0) {
		int remainder = static_cast<int>(num1) % static_cast<int>(num2) ;
		cout << "Remainder: " << remainder << endl;
	} else {
		cout << "Division by zero is not allowed." << endl;
	}
	
	return 0;
}	
