#include <iostream>
#include <limits>

using std::cin;
using std::cout;
using std::numeric_limits;
using std::streamsize;

void Problem4()
{
	int SevenDigit, Answer;

	for (int i = 0; i < 5; i++)
	{
		cout << "일곱 자리 정수: ";
		cin >> SevenDigit;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			system("cls");
			i--;
			continue;
		}

		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

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
		cout << "정답: " << Answer << "\n";
	}
}