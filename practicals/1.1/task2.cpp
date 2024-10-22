/*
	Done by:
	Student: Yakymenko Artur
	Group: 123
	Practical 1
*/
// task 2
#include <iostream>
using namespace std;
int main() {
	double a1, b1;
	cout << "1 number: ";
	cin >> a1;
	cout << "2 number: ";
	cin >> b1;
	double q = a1;
	a1 = b1;
	b1 = q;
	cout << a1 << endl;
	cout << b1 << endl;
}