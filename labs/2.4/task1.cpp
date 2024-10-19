/*
	Done by:
	Student: Yakymenko Artur
	Group: 123
	Lab 2.1
	Task 1
*/
#include <iostream>
int main() {
	int set[11];
	for (int i = 0; i < 11; i++)
	{
		if (i % 2 == 0)
		{
			set[i] = 6 * i - 9;
		}
		else
		{
			set[i] = -9 + 2 * i;
		}

	}
	int x = 11;
	for (int i = 0; i < x - 1; i++)
	{
		for (int a = 0; a < x - i - 1; a++)
		{
			if (set[a] > set[a + 1])
			{
				int y = set[a];
				set[a] = set[a + 1];
				set[a + 1] = y;
			}

		}

	}
}