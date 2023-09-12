#include <iostream>
#include <limits>

using std::cin;
using std::cout;
using std::numeric_limits;
using std::streamsize;

void Problem1()
{
	int Weight, Day, Calorie, Step;

	bool bOnLoop = true;
	while (bOnLoop)
	{
		cout << "몸무게와 다이어트 기간: ";
		cin >> Weight >> Day;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}

		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		const bool bCheckedWeight = (Weight >= 10) && (Weight <= 80);
		const bool bCheckedDay = (Day >= 1) && (Day <= 10000);
		if (bCheckedWeight && bCheckedDay)
		{
			bOnLoop = false;
		}
	}

	for (int i = 0; i < Day; i++)
	{
		cout << "칼로리와 걸음수: ";
		cin >> Calorie >> Step;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			i--;
			continue;
		}

		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		const bool bCheckedCalorie = (Calorie >= 1) && (Calorie <= 10000);
		const bool bCheckedStep = (Step >= 1) && (Step <= 10000);
		if (!(bCheckedCalorie && bCheckedStep))
		{
			i--;
			continue;
		}

		// 몸무게 계산
		if (Calorie == Step)
		{
			continue;
		}

		(Calorie > Step) ? (Weight += 1) : (Weight -= 1);
	}

	cout << "다이어트 후 몸무게: " << Weight;
}