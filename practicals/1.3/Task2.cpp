/*
	Done by:
	Student: Yakymenko Artur
	Group: 123
	Practical 1.3
*/
//task2
#include <iostream>
using namespace std;
int main() {
	double a, b, c;
	cout << "1 number: ";
	cin >> a;
	cout << "2 number: ";
	cin >> b;
	cout << "3 number: ";
	cin >> c;
	if (a < b + c and b < a + c and c < a + b) {
		cout << "Such a triangle exists";
	}
	else {
		cout << "Such a triangle doesn't exists";
	}
}