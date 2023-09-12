#include "Operation.h"
#include <iostream>
#include <bitset>

using std::cin;
using std::cout;
using std::endl;
using std::boolalpha;
using std::bitset;

void ArithmaticOperation(int Input1, int Input2)
{
    int Sum = Input1 + Input2;
    int Sub = Input1 - Input2;
    int Mul = Input1 * Input2;
    int Div = Input1 / Input2;
    int Rest = Input1 % Input2;

    cout << "산술 연산: " << Sum << " " << Sub << " " << Mul << " " << Div << " " << Rest << endl;
}

void IncreamentDecrementOperation()
{
    // 증감 연산
    int Increase = 0;   // 초기화
    int Decrease = 10;

    Increase = Increase + 1;    // 더해지는 값: 증감값(Step)
    Decrease = Decrease - 2;
    cout << "증감 연산(변수 = 변수 +, - 리터럴): " << Increase << " " << Decrease << endl;

    Increase += 1;
    Decrease -= 2;
    cout << "증감 연산(변수 +=, -= 리터럴): " << Increase << " " << Decrease << endl;

    // 전위 연산(값을 변경시킨 후에 연산자가 사용 되는 코드를 실행) 
    cout << "전위 연산(연산 이전): " << Increase << " " << Decrease << endl;
    cout << "전위 연산(++, --변수): " << ++Increase << " " << ++Decrease << endl;

    // 후위 연산(값을 사용해 코드를 실행한 후 값을 변경)
    cout << "후위 연산(변수++, --): " << Increase++ << " " << Decrease-- << endl;
    cout << "후위 연산(연산 이후 ): " << Increase << " " << Decrease << endl;
}

void ComparativeOperation()
{
    // 비교 연산(결과값: 참/거짓, true/false, 1/0)
    int Greater = 30;
    int Less = 10;
    cout << boolalpha;
    cout << "비교 연산(Greater > Less): " << (Greater > Less) << endl;
    cout << "비교 연산(Greater < Less): " << (Greater < Less) << endl;
    cout << "비교 연산(Greater >= Less): " << (Greater >= Less) << endl;
    cout << "비교 연산(Greater <= Less): " << (Greater <= Less) << endl;
    cout << "비교 연산(Greater == Less): " << (Greater == Less) << endl;
    cout << "비교 연산(Greater != Less): " << (Greater != Less) << endl;
}

void LogicalOperation()
{
    // 논리 연산
    cout << "논리 연산(true && true): " << (true && true) << endl;
    cout << "논리 연산(true && false): " << (true && false) << endl;
    cout << "논리 연산(true || true): " << (true || true) << endl;
    cout << "논리 연산(true || false): " << (true || false) << endl;
    cout << "논리 연산(!true): " << (!true) << endl;
    cout << "논리 연산(!false): " << (!false) << endl;
}

void BitOperation()
{
    // 비트 연산
    cout << "비트 연산(1 & 1): " << (1 & 1) << endl;
    cout << "비트 연산(1 & 0): " << (1 & 0) << endl;
    cout << "비트 연산(0 & 0): " << (0 & 0) << endl;
    cout << "비트 연산(1 | 1): " << (1 | 1) << endl;
    cout << "비트 연산(1 | 0): " << (1 | 0) << endl;
    cout << "비트 연산(0 | 0): " << (0 | 0) << endl;
    cout << "비트 연산(1 ^ 1): " << (1 ^ 1) << endl;
    cout << "비트 연산(1 ^ 0): " << (1 ^ 0) << endl;
    cout << "비트 연산(0 ^ 0): " << (0 ^ 0) << endl;
    cout << "비트 연산(~1): " << bitset<1>(~1) << endl;
    cout << "비트 연산(~0): " << bitset<1>(~0) << endl;
    cout << "비트 연산(초기값): " << bitset<8>(10) << endl;
    cout << "비트 연산(<< 1  ): " << bitset<8>(10 << 1) << endl;
    cout << "비트 연산(<< 2  ): " << bitset<8>(10 << 2) << endl;
    cout << "비트 연산(<< 3  ): " << bitset<8>(10 << 3) << endl;
    cout << "비트 연산(<< 4  ): " << bitset<8>(10 << 4) << endl;
    cout << "비트 연산(초기값): " << bitset<8>(10) << endl;
    cout << "비트 연산(>> 1  ): " << bitset<8>(10 >> 1) << endl;
    cout << "비트 연산(>> 2  ): " << bitset<8>(10 >> 2) << endl;
    cout << "비트 연산(>> 3  ): " << bitset<8>(10 >> 3) << endl;
    cout << "비트 연산(>> 4  ): " << bitset<8>(10 >> 4) << endl;
}

void TernaryOperation()
{
    // 삼항 연산
    cout << "삼항 연산(true ? true : false) : " << (true ? true : false) << endl;
    cout << "삼항 연산(false ? true : false): " << (false ? true : false) << endl;
}