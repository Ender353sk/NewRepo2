/*
	Done by:
	Student: Yakymenko Artur
	Group: 123
	Lab 2.1
*/
//Task 3
int main() {
	int set[5][4] = { {6,17,-8,5},
	{9,-3,7,9},
	{1,0,15,4},
	{3,-7,6,1},
	{0,7,-4,4} };
	int set1[4];
	for (int i = 0; i < 4; i++)
	{
		int min = set[0][i];
		for (int j = 0; j < 5; j++)
		{

			if (set[j][i] < min)
			{
				min = set[j][i];
			}
		}
		set1[i] = min;
	}
}