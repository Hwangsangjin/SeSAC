#include <iostream>
#include <limits>
#include <cmath>

using std::cin;
using std::cout;
using std::numeric_limits;
using std::streamsize;
using std::pow;
using std::abs;
using std::min;

int Problem6()
{
	cout << "네 개의 주사위 숫자: ";

	int DiceA, DiceB, DiceC, DiceD;
	int DiceNumber;

	for (int i = 0; i < 4; i++)
	{
		cin >> DiceNumber;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			i--;
			continue;
		}

		const bool bCheckedDiceNumber = (DiceNumber >= 1) && (DiceNumber <= 6);
		if (!bCheckedDiceNumber)
		{
			i--;
			continue;
		}

		switch (i)
		{
		case 0:
			DiceA = DiceNumber;
			break;
		case 1:
			DiceB = DiceNumber;
			break;
		case 2:
			DiceC = DiceNumber;
			break;
		case 3:
			DiceD = DiceNumber;
			break;
		}
	}

	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// 주사위의 숫자가 모두 같은 경우
	if ((DiceA == DiceB) && (DiceB == DiceC) && (DiceC == DiceD))
	{
		return 1111 * DiceA;
	}
	// A, B, C만 같은 경우
	else if ((DiceA == DiceB) && (DiceB == DiceC))
	{
		return static_cast<int>(pow(10 * DiceA + DiceD, 2));
	}
	// A, B, D만 같은 경우
	else if ((DiceA == DiceB) && (DiceB == DiceD))
	{
		return static_cast<int>(pow(10 * DiceA + DiceC, 2));
	}
	// A, C, D만 같은 경우
	else if ((DiceA == DiceC) && (DiceC == DiceD))
	{
		return static_cast<int>(pow(10 * DiceA + DiceB, 2));
	}
	// B, C, D만 같은 경우
	else if ((DiceB == DiceC) && (DiceC == DiceD))
	{
		return static_cast<int>(pow(10 * DiceB + DiceA, 2));
	}
	// A, B가 같고
	else if (DiceA == DiceB)
	{
		// C, D가 같은 경우
		if (DiceC == DiceD)
		{
			return (DiceA + DiceC) * abs(DiceA - DiceC);
		}
		// C, D가 다른 경우
		else
		{
			return DiceC * DiceD;
		}
	}
	// A, C가 같고
	else if (DiceA == DiceC)
	{
		// B, D가 같은 경우
		if (DiceB == DiceD)
		{
			return (DiceA + DiceB) * abs(DiceA - DiceB);
		}
		// B, D가 다른 경우
		else
		{
			return DiceB * DiceD;
		}
	}
	// A, D가 같고
	else if (DiceA == DiceD)
	{
		// B, C가 같은 경우
		if (DiceB == DiceC)
		{
			return (DiceA + DiceB) * abs(DiceA - DiceB);
		}
		// B, C가 다른 경우
		else
		{
			return DiceB * DiceC;
		}
	}
	// B, C가 같고
	else if (DiceB == DiceC)
	{
		// A, D가 같은 경우
		if (DiceA == DiceD)
		{
			return (DiceA + DiceB) * abs(DiceA - DiceB);
		}
		// A, D가 다른 경우
		else
		{
			return DiceA * DiceD;
		}
	}
	// B, D가 같고
	else if (DiceB == DiceD)
	{
		// A, C가 같은 경우
		if (DiceA == DiceC)
		{
			return (DiceA + DiceB) * abs(DiceA - DiceB);
		}
		// A, C가 다른 경우
		else
		{
			return DiceA * DiceC;
		}
	}
	// C, D가 같고
	else if (DiceC == DiceD)
	{
		// A, B가 같은 경우
		if (DiceA == DiceB)
		{
			return (DiceA + DiceC) * abs(DiceA - DiceC);
		}
		// A, B가 다른 경우
		else
		{
			return DiceA * DiceB;
		}
	}
	// 주사위의 숫자가 모두 다른 경우
	else
	{
		return min(min(DiceA, DiceB), min(DiceC, DiceD));
	}
}