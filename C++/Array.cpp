#include "Array.h"
#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::array;
using std::vector;
using std::fill;

void DefineArray()
{
	int Number{ 0 };
	int Numbers[3]{};

	constexpr int Size = sizeof(Numbers) / sizeof(Numbers[0]);
	for (int i = 0; i < Size; i++)
	{
		Numbers[i] += i;
		cout << Numbers[i] << " ";
	}
	cout << "\n";

	array<int, 3> Array{};
	for (auto i = 0; i < Array.size(); i++)
	{
		Array[i] += i;
		cout << Array[i] << " ";
	}
	cout << "\n";
}

void CountNumber()
{
	int Count;
	cout << "숫자 개수: ";
	cin >> Count;

	int Number;
	vector<int> Numbers;

	cout << "수 데이터: ";

	for (int i = 0; i < Count; i++)
	{
		cin >> Number;
		Numbers.push_back(Number);
	}

	int FindNumber;
	cout << "찾을 수: ";
	cin >> FindNumber;

	int FindCount = 0;

	for (const auto& i : Numbers)
	{
		if (i == FindNumber)
		{
			FindCount++;
		}
	}

	cout << "찾는 수의 개수는 " << FindCount;
}

void LessNumber()
{
	cout << "숫자 개수와 기준 수: ";

	int Count, StandardNumber;
	cin >> Count >> StandardNumber;

	int Number;
	vector<int> Numbers;

	cout << "수 데이터: ";

	for (int i = 0; i < Count; i++)
	{
		cin >> Number;
		Numbers.push_back(Number);
	}

	for (int i = 0; i < Count; i++)
	{
		if (StandardNumber > Numbers[i])
		{
			cout << Numbers[i] << " ";
		}
	}
}

void MissingNumber()
{
	cout << "전체 학생 수: ";
	int TotalCount = 0;
	cin >> TotalCount;

	// 전체 학생의 번호 데이터 셋팅
	vector<int> TotalMember;
	for (int i = 0; i < TotalCount; i++)
	{
		TotalMember.push_back(i + 1);
	}

	cout << "제출 안한 학생 수: ";
	int MissingCount;
	cin >> MissingCount;

	// 과제 제출한 학생 번호 셋팅
	int Temp;
	vector<int> WorkMember;
	for (int i = 0; i < (TotalCount - MissingCount); i++)
	{
		cout << "제출한 학생 번호: ";
		cin >> Temp;
		WorkMember.push_back(Temp);
	}

	// 제출 확인용 배열 셋팅
	vector<bool> CheckMember(TotalCount);

	// 제출한 학생, 미제출 학생 구분
	for (int i = 0; i < TotalCount; i++)
	{
		for (int j = 0; j < (TotalCount - MissingCount); j++)
		{
			if (WorkMember[j] == TotalMember[i])
			{
				CheckMember[j] = true;
			}
		}

		if (!CheckMember[i])
		{
			cout << i + 1 << "번 안냄" << "\n";
		}
	}
}

void BubbleSort()
{
	array<int, 10> Numbers{ 3, 9, 5, 8, 10, 1, 7, 4, 2, 6 };
	int Temp;

	for (int i = 0; i < Numbers.size() - 1; i++)
	{
		for (int j = 0; j < Numbers.size() - 1 - i; j++)
		{
			if (Numbers[j] > Numbers[j + 1])
			{
				Temp = Numbers[j];
				Numbers[j] = Numbers[j + 1];
				Numbers[j + 1] = Temp;
			}
		}
	}

	for (const auto& i : Numbers)
	{
		cout << i << " ";
	}
}

void TwoDimension()
{
	int Numbers[3][2] 
	{
		{ 1, 2 },
		{ 3, 4 },
		{ 5, 6 }
	};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << Numbers[i][j] << " ";
		}
		cout << "\n";
	}

	cout << "\n";

	vector<vector<int>> Matrix(5, vector<int>(5));
	fill(Matrix.begin(), Matrix.end(), vector<int>(5, 1));
	
	for (int i = 0; i < Matrix.size(); i++)
	{
		for (int j = 0; j < Matrix.size(); j++)
		{
			cout << Matrix[i][j] << " ";
		}
		cout << "\n";
	}
}