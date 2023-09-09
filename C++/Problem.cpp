﻿#include <cassert>
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