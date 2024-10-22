/*
	Done by:
	Student: Yakymenko Artur
	Group: 123
	Practical 1.2
*/
//task2
#include <iostream>
using namespace std;
int main() {
	float a, b;
	cout << "1 number: ";
	cin >> a;
	cout << "2 number: ";
	cin >> b;
	if (a >= 0 and b >= 0) {
		cout << a * b;
	}
	else {
		cout << a + b;
	}
}