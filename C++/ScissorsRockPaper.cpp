#include "ScissorsRockPaper.h"
#include <iostream>
#include <limits>
#include <ctime>

using std::cin;
using std::cout;
using std::numeric_limits;
using std::streamsize;

void ScissorsRockPaper()
{
	// 플레이어 선택
	int Select;
	EHand Player;

	// 난수 생성
	srand((unsigned int)time(NULL));

	// AI 랜덤 선택
	EHand AI = static_cast<EHand>(rand() % 3 + 1);

	// 결과
	EResult Result;

	// 실행
	bool bOnLoop = true;
	while (bOnLoop)
	{
		cout << "= 가위바위보 게임 =\n";
		cout << "1. 가위\n";
		cout << "2. 바위\n";
		cout << "3. 보\n";
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
			Player = Scissors;
			Result = Judgement(Player, AI);
			PrintPlayerHand(Player);
			PrintAIHand(AI);
			PrintResult(Result);
			system("pause");
			system("cls");
			break;
		case 2:
			Player = Rock;
			Result = Judgement(Player, AI);
			PrintPlayerHand(Player);
			PrintAIHand(AI);
			PrintResult(Result);
			system("pause");
			system("cls");
			break;
		case 3:
			Player = Paper;
			Result = Judgement(Player, AI);
			PrintPlayerHand(Player);
			PrintAIHand(AI);
			PrintResult(Result);
			system("pause");
			system("cls");
			break;
		default:
			system("cls");
			break;
		}
	}
}

void PrintResult(EResult Result)
{
	switch (Result)
	{
	case Win:
		cout << "결과    : 이겼다!\n";
		break;
	case Lose:
		cout << "결과    : 졌다...\n";
		break;
	case Draw:
		cout << "결과    : 무승부\n";
		break;
	}
}

void PrintPlayerHand(EHand Player)
{
	switch (Player)
	{
	case Scissors:
		cout << "플레이어: 가위\n";
		break;
	case Rock:
		cout << "플레이어: 바위\n";
		break;
	case Paper:
		cout << "플레이어: 보\n";
		break;
	}
}

void PrintAIHand(EHand AI)
{
	switch (AI)
	{
	case Scissors:
		cout << "AI      : 가위\n";
		break;
	case Rock:
		cout << "AI      : 바위\n";
		break;
	case Paper:
		cout << "AI      : 보\n";
		break;
	}
}

EResult Judgement(EHand Player, EHand AI)
{
	static const EResult Result[3][3]
	{
		// 가위 바위 보(AI)
		{ Draw, Lose, Win }, // 가위(플레이어)
		{ Win, Draw, Lose }, // 바위
		{ Lose, Win, Draw }	 // 보
	};

	return Result[Player][AI];
}