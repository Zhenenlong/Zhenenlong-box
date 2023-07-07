#include"hard.h"
void jiegoutimaopaopaixu()
{
	struct charder
	{
		string name;
		int age;
		string xing;
	};
	charder hero[5] = { {"a",23,"y"},
						{"b",22,"y"},
						{"c",20,"y"},
						{"d",21,"y"},
						{"e",19,"x"} };
	int long1 = sizeof(hero) / sizeof(hero[0]);
	for (int c = 0; c < long1; c++)
	{
		cout << "name:" << hero[c].name << "  age:" << hero[c].age << "  xing:" << hero[c].xing << endl;
	}
	for (int a = 0; a < long1 - 1; a++)
	{
		for (int b = 0; b < long1 - 1 - a; b++)
		{
			if (hero[b].age > hero[b + 1].age)
			{
				charder temp = hero[b];
				hero[b] = hero[b + 1];
				hero[b + 1] = temp;
			}
		}
		cout << "µÚ" << a + 1 << "´Î" << endl;
		for (int c = 0; c < long1; c++)
		{
			cout << "name:" << hero[c].name << "  age:" << hero[c].age << "  xing:" << hero[c].xing << endl;
		}
		cout << endl << endl;
	}
	cout << long1 << endl;

}
