/*
	Done by:
	Student: Yakymenko Artur
	Group: 123
	Lab 2.1
*/
//Task 3.2
int main() {
	float set[4][5] = { {2.3, -7.0, -5.28, 6.3, 2.1},
{-1.3, 2.42, 1.13, -4.1, 3.2},
{-3.1, -1.4, 5.7, 6.1, -7.9},
{-1.4, -2.3, 2.7, 4.8, 7.4} };
	float set1[4];
	for (int a = 0; a < 4; a++)
	{
		for (int a = 0; a < 4; a++)
		{

			float s = 1;
			for (int b = 0; b < 5; b++)
			{
				if (set[a][b] < 0)
				{
					s = s * set[a][b];
				}
			}
			set1[a] = s;
		}
	}
}