#include "Baseball.h"
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

void Baseball()
{
	// 정답 숫자
	array<int, 3> AnswerNumbers{};

	// 게임 선택
	int Select;

	// 게임 실행
	bool bOnLoop = true;
	while (bOnLoop)
	{
		cout << "= 숫자 야구 =\n";
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
			CreateNumbers(AnswerNumbers);
			CompareNumbers(AnswerNumbers);
			system("pause");
			system("cls");
			break;
		default:
			system("cls");
			break;
		}
	}
}

void CreateNumbers(array<int, 3>& AnswerNumbers)
{
	// 난수 생성
	srand((unsigned int)time(NULL));

	// 전체 숫자 저장
	array<int, 9> AllNumbers{};
	for (int i = 0; i < AllNumbers.size(); i++)
	{
		AllNumbers[i] = i + 1;
	}

	// 전체 숫자 섞기
	int Index1, Index2;
	for (int i = 0; i < 100; i++)
	{
		Index1 = rand() % 9;
		Index2 = rand() % 9;
		swap(AllNumbers[Index1], AllNumbers[Index2]);
	}

	// 정답 숫자 뽑기
	for (int i = 0; i < AnswerNumbers.size(); i++)
	{
		AnswerNumbers[i] = AllNumbers[i];
	}

	// 정답 숫자 출력
	/*cout << "정답: ";
	for (int i = 0; i < AnswerNumbers.size(); i++)
	{
		cout << AnswerNumbers[i] << " ";

	}
	cout << "\n";*/
}

void CompareNumbers(const array<int, 3>& AnswerNumbers)
{
	// 플레이어 숫자
	array<int, 3> PlayerNumbers{};

	// 스트라이크, 볼 개수
	int Strike = 0, Ball = 0;

	while (true)
	{
		cout << "선택: ";

		while (true)
		{
			cin >> PlayerNumbers[0] >> PlayerNumbers[1] >> PlayerNumbers[2];
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}

			const bool bCheckedDuplicate = ((PlayerNumbers[0] == PlayerNumbers[1]) ||
											(PlayerNumbers[0] == PlayerNumbers[2]) ||
											(PlayerNumbers[1] == PlayerNumbers[2]));
			const bool bCheckedLimit = ((PlayerNumbers[0] > 0) && (PlayerNumbers[0] <= 9) &&
										(PlayerNumbers[1] > 0) && (PlayerNumbers[1] <= 9) &&
										(PlayerNumbers[2] > 0) && (PlayerNumbers[2] <= 9));
			if (bCheckedDuplicate)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}
			else if (bCheckedLimit)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				break;
			}
		}

		Strike = 0, Ball = 0;

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (PlayerNumbers[i] == AnswerNumbers[j])
				{
					(i == j) ? Strike++ : Ball++;
					break;
				}
			}
		}

		if (Strike == 3)
		{
			cout << "결과: Home Run!\n";
			break;
		}
		else if (Strike == 0 && Ball == 0)
		{
			cout << "결과: Out...\n";
			break;
		}
		else
		{
			cout << "결과: " << Strike << "s " << Ball << "b\n";
		}
	}
}