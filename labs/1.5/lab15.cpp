/*Лабораторна робота 1.5
Виконував Якименко Артур Віталійович
Варіант: 15
*/
#include <iostream>
using namespace std;
int main() {
	float fltA = 36.7, fltB = 56.2;
	int nC = 99, nD = 99;
	bool bRez1 = ((fltA || fltB) != (!(nC < nD)));

	int nA = 86, nB = 65;
	float fltC = 75.2, fltD = 43.6;
	bool bRez2 = ((nA || nB) != (!(fltC < fltD)));

	float A1 = 36.7, B1 = 56.2;
	int C1 = 99, D1 = 99;
	auto s = (A1 < B1) ^ (!(C1 != D1));
	cout << s << endl;

	int A2 = 86, B2 = 65;
	float C2 = 75.2, D2 = 43.6;
	auto x = (A2 < B2) ^ (!(C2 != D2));
	cout << x << endl;

	const int CONSTA = 85;
	int nB1, nE1;
	nB1 = 27;
	nE1 = 6;
	int nC1;
	int* pnC1;
	pnC1 = &nC1;
	*pnC1 = -16;
	bool bRez = ((CONSTA ^ ~nB1) + *pnC1) < (1 * (nE1 << sizeof(short)));
	cout << bRez << endl;
	return 0;
}