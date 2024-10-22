/*
	Done by:
	Student: Yakymenko Artur
	Group: 123
	Practical 1.2
*/
//task1
#include <iostream>
using namespace std;
int main() {
	int a;
	cout << "1 number: ";
	cin >> a;
	if (a % 2 == 0) {
		a += 1;
	}
	else {
		a -= 1;
	}
	cout << a;
}