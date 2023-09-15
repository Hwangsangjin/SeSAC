#include "Lotto.h"
#include <iostream>
#include <limits>
#include <ctime>
#include <array>
#include <algorithm>

using std::cin;
using std::cout;
using std::numeric_limits;
using std::streamsize;
using std::array;
using std::swap;
using std::sort;

void Lotto()
{
	// 당첨 번호
	array<int, 6> PrizeNumbers{};

	// 플레이어의 번호
	array<int, 6> PlayerNumbers{};

	// 선택
	int Select;

	// 게임 실행
	bool bOnLoop = true;
	while (bOnLoop)
	{
		cout << "= 로또 6/45 =\n";
		cout << "1. 게임 시작\n";
		cout << "0. 게임 종료\n";
		cout << ">> ";

		cin >> Select;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			system("cls");
			continue;
		}

		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		switch (Select)
		{
		case 0:
			system("cls");
			bOnLoop = false;
			break;
		case 1:
			SelectNumbers(PlayerNumbers);
			CreateNumbers(PrizeNumbers);
			int SameCount;
			SameCount = CompareNumbers(PlayerNumbers, PrizeNumbers);
			PrintRanking(SameCount);
			system("pause");
			system("cls");
			break;
		default:
			system("cls");
			break;
		}
	}
}

void SelectNumbers(array<int, 6>& PlayerNumbers)
{
	cout << "선택 번호: ";

	for (int i = 0; i < PlayerNumbers.size(); i++)
	{
		cin >> PlayerNumbers[i];
	}
}

void CreateNumbers(array<int, 6>& PrizeNumbers)
{
	// 난수 생성
	srand((unsigned int)time(NULL));

	// 전체 번호 저장
	array<int, 45> AllNumbers{};
	for (int i = 0; i < AllNumbers.size(); i++)
	{
		AllNumbers[i] = i + 1;
	}

	// 전체 번호 섞기
	int Index1, Index2;
	for (int i = 0; i < 100; i++)
	{
		Index1 = rand() % 45;
		Index2 = rand() % 45;
		swap(AllNumbers[Index1], AllNumbers[Index2]);
	}

	// 당첨 번호 뽑기
	for (int i = 0; i < PrizeNumbers.size(); i++)
	{
		PrizeNumbers[i] = AllNumbers[i];
	}

	// 당첨 번호 정렬
	std::sort(PrizeNumbers.begin(), PrizeNumbers.end());

	// 당첨 번호 출력
	cout << "당첨 번호: ";
	for (int i = 0; i < PrizeNumbers.size(); i++)
	{
		cout << PrizeNumbers[i] << " ";

	}
	cout << "\n";
}

int CompareNumbers(array<int, 6>& PlayerNumbers, array<int, 6>& PrizeNumbers)
{
	int SameCount = 0;

	for (int i = 0; i < PlayerNumbers.size(); i++)
	{
		for (int j = 0; j < PlayerNumbers.size(); j++)
		{
			if (PlayerNumbers[j] == PrizeNumbers[i])
			{
				SameCount++;
				break;
			}
		}
	}

	return SameCount;
}

void PrintRanking(int SameCount)
{
	cout << "당첨 결과: ";

	switch (SameCount)
	{
	case 0:
	case 1:
		cout << "꽝...\n";
		break;
	case 2:
		cout << "5등!\n";
		break;
	case 3:
		cout << "4등!\n";
		break;
	case 4:
		cout << "3등!\n";
		break;
	case 5:
		cout << "2등!\n";
		break;
	case 6:
		cout << "1등!\n";
		break;
	}
}