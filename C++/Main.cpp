﻿#include <iostream>
#include "Main.h"

using std::cin;
using std::cout;
using std::boolalpha;

int main()
{
	void (*VoidFPtr)() = nullptr;
	int (*IntFPtr)() = nullptr;
	bool (*BoolFPtr)() = nullptr;

	bool bOnLoop = true;
	while (bOnLoop)
	{
		cout << "1. 다이어트\n";
		cout << "2. 카운트 업\n";
		cout << "3. 홀짝에 따라 다른 값 반환하기\n";
		cout << "4. 7게임\n";
		cout << "5. 간단한 논리 연산\n";
		cout << "6. 주사위 게임 3\n";
		cout << "0. 프로그램 종료\n";
		cout << ">> ";

		int SelectedNumber;
		cin >> SelectedNumber;
		if (!cin)
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			system("cls");
			continue;
		}

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
			cout << "\n";
			system("pause");
			system("cls");
			break;
		case 2:
			VoidFPtr = Problem2;
			VoidFPtr();
			cout << "\n";
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
		}
	}

	return 0;
}