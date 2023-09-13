#include "Pointer.h"
#include <iostream>

using std::cin;
using std::cout;

void PointerDefine()
{
	int A = 10; // 변수 선언
	cout << "A             : " << A << "\n";
	cout << "&A            : " << &A << "\n\n";

	int* pA = &A; // 포인터 변수에 주소값 대입
	cout << "pA            : " << pA << "\n";
	cout << "*pA           : " << *pA << "\n";
	cout << "&pA           : " << &pA << "\n\n";

	int** ppA = &pA; // 포인터 변수의 주소값을 저장하는 포인터 변수
	cout << "ppA           : " << ppA << "\n";
	cout << "*ppA          : " << *ppA << "\n";
	cout << "**ppA         : " << **ppA << "\n";
	cout << "&ppA          : " << &ppA << "\n";
}

void PointerOperation()
{
	int Array[3] = { 10, 20, 30 };
	int* pArray = Array;
	cout << "Array         : " << Array << "\n";
	cout << "pArray        : " << pArray << "\n";
	cout << "Array[0]      : " << Array[0] << "\n";
	cout << "pArray[0]     : " << pArray[0] << "\n";
	cout << "*Array        : " << *Array << "\n";
	cout << "*pArray       : " << *pArray << "\n";
	cout << "Array + 1     : " << Array + 1 << "\n";
	cout << "pArray + 1    : " << pArray + 1 << "\n";
	cout << "*Array + 1    : " << *Array + 1 << "\n";
	cout << "*pArray + 1   : " << *pArray + 1 << "\n";
	cout << "*(Array + 1)  : " << *(Array + 1) << "\n";
	cout << "*(pArray + 1) : " << *(pArray + 1) << "\n";
}