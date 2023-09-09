#include <iostream>

void Problem1()
{
	int Weight, Day, Calorie, Step;

	bool bOnLoop = true;
	while (bOnLoop)
	{
		std::cout << "몸무게와 다이어트 기간: ";
		std::cin >> Weight >> Day;
		if (!std::cin)
		{
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
		}

		const bool bCheckedWeight = (Weight >= 10) && (Weight <= 80);
		const bool bCheckedDay = (Day >= 1) && (Day <= 10000);
		if (bCheckedWeight && bCheckedDay)
		{
			bOnLoop = false;
		}
	}

	for (int i = 0; i < Day; i++)
	{
		std::cout << "칼로리와 걸음수: ";
		std::cin >> Calorie >> Step;
		if (!std::cin)
		{
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			i--;
			continue;
		}

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

	std::cout << "다이어트 후 몸무게: " << Weight << "\n";
}