#include <iostream>
#include "Main.h"

int main()
{
	void (*VoidFPtr)() = nullptr;
	int (*IntFPtr)() = nullptr;

	bool bOnLoop = true;
	while (bOnLoop)
	{
		std::cout << "1. 다이어트\n";
		std::cout << "2. 카운트 업\n";
		std::cout << "3. 홀짝에 따라 다른 값 반환하기\n";
		std::cout << "4. 7게임\n";
		std::cout << "0. 프로그램 종료\n";
		std::cout << ">> ";

		int SelectedNumber;
		std::cin >> SelectedNumber;
		if (!std::cin)
		{
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			::system("cls");
			continue;
		}

		::system("cls");

		switch (SelectedNumber)
		{
		case 0:
			if (VoidFPtr)
				VoidFPtr = nullptr;
			if (IntFPtr)
				IntFPtr = nullptr;
			bOnLoop = false;
			break;
		case 1:
			VoidFPtr = Problem1;
			VoidFPtr();
			std::cout << "\n";
			::system("pause");
			::system("cls");
			break;
		case 2:
			VoidFPtr = Problem2;
			VoidFPtr();
			std::cout << "\n";
			::system("pause");
			::system("cls");
			break;
		case 3:
			IntFPtr = Problem3;
			int Answer;
			Answer = IntFPtr();
			std::cout << "정답: " << Answer << "\n\n";
			::system("pause");
			::system("cls");
			break;
		case 4:
			VoidFPtr = Problem4;
			VoidFPtr();
			std::cout << "\n";
			::system("pause");
			::system("cls");
			break;
		}
	}

	return 0;
}