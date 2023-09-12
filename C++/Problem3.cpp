#include <iostream>
#include <limits>

using std::cin;
using std::cout;
using std::numeric_limits;
using std::streamsize;

int Problem3()
{
	int PositiveInteger, Answer = 0;

	bool bOnLoop = true;
	while (bOnLoop)
	{
		cout << "양의 정수: ";
		cin >> PositiveInteger;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			system("cls");
			continue;
		}

		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		const bool bCheckedPositiveInteger = (PositiveInteger >= 1) && (PositiveInteger <= 100);
		if (bCheckedPositiveInteger)
		{
			bOnLoop = false;
		}
		else
		{
			system("cls");
		}
	}

	// 홀수, 짝수 판단 후 합 또는 제곱합 계산
	if (PositiveInteger % 2 == 1)
	{
		for (int i = 1; i <= PositiveInteger; i += 2)
		{
			Answer += i;
		}
	}
	else
	{
		for (int i = 2; i <= PositiveInteger; i += 2)
		{
			Answer += i * i;
		}
	}

	return Answer;
}