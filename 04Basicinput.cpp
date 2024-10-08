#include <iostream>

using namespace std;

int main()
{
	string nn, cyl, scl;
	cout <<"Nickname:"; 
	cin>> nn;
	cout <<"Course-Year Level:";
	cin >> cyl;
	cout <<"School:";
	cin >> scl;
	
	cout << "Wow Congrats " << nn << "! " << cyl << " is a nice course. And you are studying in " << scl << " which is one of the Center of Excellence in Tertiary Education" << endl;
	
	return 0;
}