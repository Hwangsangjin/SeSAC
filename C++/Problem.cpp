#include "Problem.h"
#include <iostream>
#include <limits>
#include <functional>

using std::cin;
using std::cout;
using std::boolalpha;
using std::numeric_limits;
using std::streamsize;
using std::function;

void Problem()
{
	function<void()> VoidFPtr;
	function<int()> IntFPtr;
	function<bool()> BoolFPtr;

	bool bOnLoop = true;
	while (bOnLoop)
	{
		cout << "1. 다이어트\n";
		cout << "2. 카운트 업\n";
		cout << "3. 홀짝에 따라 다른 값 반환하기\n";
		cout << "4. 7게임\n";
		cout << "5. 간단한 논리 연산\n";
		cout << "6. 주사위 게임 3\n";
		cout << "7. 에라토스테네스의 체\n";
		cout << "8. 너의 평점은\n";
		cout << "0. 프로그램 종료\n";
		cout << ">> ";

		int SelectedNumber;
		cin >> SelectedNumber;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			system("cls");
			continue;
		}

		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		system("cls");

		switch (SelectedNumber)
		{
		case 0:
			if (VoidFPtr)
				VoidFPtr = nullptr;
			if (IntFPtr)
				IntFPtr = nullptr;
			if (BoolFPtr)
				BoolFPtr = nullptr;
			bOnLoop = false;
			break;
		case 1:
			VoidFPtr = Problem1;
			VoidFPtr();
			cout << "\n\n";
			system("pause");
			system("cls");
			break;
		case 2:
			VoidFPtr = Problem2;
			VoidFPtr();
			cout << "\n\n";
			system("pause");
			system("cls");
			break;
		case 3:
			IntFPtr = Problem3;
			int Answer;
			Answer = IntFPtr();
			cout << "정답: " << Answer << "\n\n";
			system("pause");
			system("cls");
			break;
		case 4:
			VoidFPtr = Problem4;
			VoidFPtr();
			cout << "\n";
			system("pause");
			system("cls");
			break;
		case 5:
			BoolFPtr = Problem5;
			bool Result;
			Result = BoolFPtr();
			cout << "결과: " << boolalpha << Result << "\n\n";
			system("pause");
			system("cls");
			break;
		case 6:
			IntFPtr = Problem6;
			int Score;
			Score = IntFPtr();
			cout << "점수: " << Score << "\n\n";
			system("pause");
			system("cls");
			break;
		case 7:
			VoidFPtr = Problem7;
			VoidFPtr();
			cout << "\n\n";
			system("pause");
			system("cls");
			break;
		case 8:
			VoidFPtr = Problem8;
			VoidFPtr();
			cout << "\n\n";
			system("pause");
			system("cls");
			break;
		}
	}
}