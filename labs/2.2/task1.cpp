/*
	Done by:
	Student: Yakymenko Artur
	Group: 123
	Lab 2.2
*/
int main() {
	enum Names { Thonny, Stepan, Jany, Alex, Kate, Viola };
	struct Students
	{
		Names n;
		int c;
		bool s;
	};
	Students myStudents[7];

	myStudents[0] = { Stepan, 2, true };
	myStudents[1] = { Thonny, 1, true };
	myStudents[2] = { Alex, 2, false };
	myStudents[3] = { Jany, 3, false };
	myStudents[4] = { Viola, 1, true };
	myStudents[5] = { Kate, 1, true };
	myStudents[6].n = Jany;
	myStudents[6].c = 2;
	myStudents[6].s = true;
	int a = 0;
	for (int i = 0; i < 7; i++)
	{
		if (myStudents[i].c == 1 && myStudents[i].s == true)
		{
			a++;
		}
	}
	float p = (float)a * 100 / 7;
}