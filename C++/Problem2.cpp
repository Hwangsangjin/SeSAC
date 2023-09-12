#include <iostream>
#include <limits>
#include <cassert>

using std::cin;
using std::cout;
using std::numeric_limits;
using std::streamsize;

void Problem2()
{
	int* IntPtr = nullptr;
	int StartNumber, EndNumber;

	bool bOnLoop = true;
	while (bOnLoop)
	{
		cout << "시작 숫자와 마지막 숫자: ";
		cin >> StartNumber >> EndNumber;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			system("cls");
			continue;
		}

		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		const bool bCheckedStartNumber = (StartNumber >= 0) && (StartNumber <= EndNumber);
		const bool bCheckedEndNumber = (EndNumber >= StartNumber) && (EndNumber <= 50);
		if (bCheckedStartNumber && bCheckedEndNumber)
		{
			bOnLoop = false;
		}
		else
		{
			system("cls");
		}
	}

	// 시작 숫자부터 마지막 숫자까지의 크기
	const int Size = EndNumber - StartNumber + 1;
	assert(Size > 0);

	try
	{
		IntPtr = new int[Size];

		cout << "결과: [";

		for (int i = 0; i < Size; i++)
		{
			IntPtr[i] = StartNumber++;
			(i == Size - 1) ? (cout << IntPtr[i] << "]") : (cout << IntPtr[i] << " ");
		}

		delete[] IntPtr;
		IntPtr = nullptr;
	}
	catch (std::bad_alloc e)
	{
		cout << e.what();
	}
}