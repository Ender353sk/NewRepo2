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
	int a;
	cout << "number: ";
	cin >> a;
	if (a > 0) {
		a += 1;
	}
	else if (a < 0) {
		a -= 2;
	}
	else {
		a = 10;
	}
	cout << a;
}