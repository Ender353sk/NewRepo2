/*
	Done by:
	Student: Yakymenko Artur
	Group: 123
	Lab 2.1
*/
//Task 2
int main() {
	int set1[10];
	int set2[10];
	int set3[10];
	for (int i = 0; i < 10; i++)
	{
		set1[i] = 43 - i;
	}
	for (int i = 0; i < 10; i++)

	{
		set2[i] = 37 + i;
	}
	int b = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int a = 0; a < 10; a++)
		{
			if (set1[i] == set2[a])
			{
				set3[b] = set1[i];
				b++;
				break;
			}

		}

	}
	int multipl = 1;
	for (int i = 0; i < b; i++)
	{
		if (set3[i] > 40)
		{
			multipl = multipl * set3[i];
		}

	}
}