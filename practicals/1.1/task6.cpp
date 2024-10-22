/*
	Done by:
	Student: Yakymenko Artur
	Group: 123
	Practical 1
*/
//task6
#include <iostream>
using namespace std;
int main() {
	double a1, a2, a3, a4, a5, n;
	cout << "Перший член прогресії: ";
	cin >> a1;
	cout << "Різниця прогресії: ";
	cin >> n;
	a2 = a1 + (2 - 1) * n;
	a3 = a1 + (3 - 1) * n;
	a4 = a1 + (4 - 1) * n;
	a5 = a1 + (5 - 1) * n;
	double set[5] = { a1, a2, a3, a4, a5 };
	cout << "Перші 5 членів прогресії: ";
	for (int i = 0; i < 5; i++) {
		cout << set[i] << ", ";
	}
	cout << endl;
	cout << "Сума перших 5 членів прогресії: " << a1 + a2 + a3 + a4 + a5 << endl;
}