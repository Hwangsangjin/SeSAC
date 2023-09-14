#include "Dynamic.h"
#include <iostream>

using std::cin;
using std::cout;

void DynamicVariable()
{
	int* pInt = new int;
	*pInt = 10;

	cout << pInt << "\n";
	cout << *pInt << "\n";
	
	delete pInt;
	pInt = nullptr;

	char* pChar = new char;
	*pChar = 'A';
	cout << pChar << "\n";
	cout << *pChar << "\n";

	delete pChar;
	pChar = nullptr;

	int Array[3] = { 1, 2, 3 };
	int* pArray = Array;
	pArray[0] = 10;
	cout << pArray[0] << "\n";
}