/*
	Done by:
	Student: Yakymenko Artur
	Group: 123
	Practical 1.2
*/
//task3
#include <iostream>
using namespace std;
int main() {
	float a, b;
	cout << "1 number: ";
	cin >> a;
	cout << "2 number: ";
	cin >> b;
	if (a > b) {
		cout << a;
	}
	else if (a < b) {
		cout << b;
	}
	else {
		cout << "Error";
	}
}