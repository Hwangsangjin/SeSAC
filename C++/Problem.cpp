#include <cassert>
#include <cmath>
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

void Problem2()
{
	int* IntPtr = nullptr;
	int StartNumber, EndNumber;

	bool bOnLoop = true;
	while (bOnLoop)
	{
		std::cout << "시작 숫자와 마지막 숫자: ";
		std::cin >> StartNumber >> EndNumber;
		if (!std::cin)
		{
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			::system("cls");
		}

		const bool bCheckedStartNumber = (StartNumber >= 0) && (StartNumber <= EndNumber);
		const bool bCheckedEndNumber = (EndNumber >= StartNumber) && (EndNumber <= 50);
		if (bCheckedStartNumber && bCheckedEndNumber)
		{
			bOnLoop = false;
		}
		else
		{
			::system("cls");
		}
	}

	// 시작 숫자부터 마지막 숫자까지의 크기
	const int Size = EndNumber - StartNumber + 1;
	assert(Size > 0);
	IntPtr = new int[Size];

	std::cout << "결과: [";

	for (int i = 0; i < Size; i++)
	{
		IntPtr[i] = StartNumber++;
		(i == Size - 1) ? (std::cout << IntPtr[i] << "]") : (std::cout << IntPtr[i] << " ");
	}

	std::cout << "\n";

	IntPtr = nullptr;
	delete[] IntPtr;
}

int Problem3()
{
	int PositiveInteger, Answer = 0;

	bool bOnLoop = true;
	while (bOnLoop)
	{
		std::cout << "양의 정수: ";
		std::cin >> PositiveInteger;
		if (!std::cin)
		{
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			::system("cls");
		}

		const bool bCheckedPositiveInteger = (PositiveInteger >= 1) && (PositiveInteger <= 100);
		if (bCheckedPositiveInteger)
		{
			bOnLoop = false;
		}
		else
		{
			::system("cls");
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

void Problem4()
{
	int SevenDigit, Answer;

	for (int i = 0; i < 5; i++)
	{
		std::cout << "일곱 자리 정수: ";
		std::cin >> SevenDigit;
		if (!std::cin)
		{
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			::system("cls");
		}

		const bool bCheckedSevenDigit = (SevenDigit >= 1000000) && (SevenDigit <= 9999999);
		if (!bCheckedSevenDigit)
		{
			i--;
			continue;
		}

		// 정답 초기화
		Answer = 0;

		// 홀수 번째 자리의 숫자들을 모두 합
		Answer += SevenDigit / 1000000;
		Answer += (SevenDigit % 100000) / 10000;
		Answer += (SevenDigit % 1000) / 100;
		Answer += (SevenDigit % 10) / 1;

		// 0이 아닌 짝수 번째 자리의 숫자를 모두 곱
		if (((SevenDigit % 1000000) / 100000) != 0)
		{
			Answer *= (SevenDigit % 1000000) / 100000;
		}

		if (((SevenDigit % 10000) / 1000) != 0)
		{
			Answer *= (SevenDigit % 10000) / 1000;
		}

		if (((SevenDigit % 100) / 10) != 0)
		{
			Answer *= (SevenDigit % 100) / 10;
		}

		// 10으로 나눈 나머지값
		Answer %= 10;
		std::cout << "정답: " << Answer << "\n";
	}
}

bool Problem5()
{
	std::cout << "true/false 4개: ";

	bool X1, X2, X3, X4;
	std::cin >> std::boolalpha >> X1 >> X2 >> X3 >> X4;

	// 조건의 참, 거짓에 따라서 true 또는 false 반환
	return (X1 || X2) && (X3 || X4);
}

int Problem6()
{
	std::cout << "네 개의 주사위 숫자: ";

	int DiceA, DiceB, DiceC, DiceD;
	
	for (int i = 0; i < 4; i++)
	{
		int DiceNumber;
		std::cin >> DiceNumber;
		if (!std::cin)
		{
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
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

	// 주사위의 숫자가 모두 같은 경우
	if ((DiceA == DiceB) && (DiceB == DiceC) && (DiceC == DiceD))
	{
		return 1111 * DiceA;
	}
	// A, B, C만 같은 경우
	else if ((DiceA == DiceB) && (DiceB == DiceC))
	{
		return static_cast<int>(std::pow(10 * DiceA + DiceD, 2));
	}
	// A, B, D만 같은 경우
	else if ((DiceA == DiceB) && (DiceB == DiceD))
	{
		return static_cast<int>(std::pow(10 * DiceA + DiceC, 2));
	}
	// A, C, D만 같은 경우
	else if ((DiceA == DiceC) && (DiceC == DiceD))
	{
		return static_cast<int>(std::pow(10 * DiceA + DiceB, 2));
	}
	// B, C, D만 같은 경우
	else if ((DiceB == DiceC) && (DiceC == DiceD))
	{
		return static_cast<int>(std::pow(10 * DiceB + DiceA, 2));
	}
	// A, B가 같고
	else if (DiceA == DiceB)
	{
		// C, D가 같은 경우
		if (DiceC == DiceD)
		{
			return (DiceA + DiceC) * std::abs(DiceA - DiceC);
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
			return (DiceA + DiceB) * std::abs(DiceA - DiceB);
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
			return (DiceA + DiceB) * std::abs(DiceA - DiceB);
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
			return (DiceA + DiceB) * std::abs(DiceA - DiceB);
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
			return (DiceA + DiceB) * std::abs(DiceA - DiceB);
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
			return (DiceA + DiceC) * std::abs(DiceA - DiceC);
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
		return std::min(std::min(DiceA, DiceB), std::min(DiceC, DiceD));
	}
}