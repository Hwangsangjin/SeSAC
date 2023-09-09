#include <iostream>
#include "Main.h"

int main()
{
	void (*VoidFPtr)() = nullptr;

	bool bOnLoop = true;
	while (bOnLoop)
	{
		std::cout << "1. 다이어트\n";
		std::cout << "2. 카운트 업\n";
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
		}
	}

	return 0;
}