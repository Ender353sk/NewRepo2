/*
	Done by:
	Student: Yakymenko Artur
	Group: 123
	Practical 1.3
*/
//task1
#include <iostream>
using namespace std;
int main() {
	double a, b;
	cout << "1 number: ";
	cin >> a;
	cout << "2 number: ";
	cin >> b;
	if (a * b < 0) {
		cout << a * b * 2;
	}
	else {
		cout << a * b * 1.5;
	}
}