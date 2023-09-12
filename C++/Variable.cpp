#include "Variable.h"
#include <iostream>

// 매크로
#define PLUS ((2) + (3))

using std::cin;
using std::cout;
using std::endl;
using std::boolalpha;
using std::noboolalpha;

void HelloWorld()
{
    // 출력
    cout << "Hello World!\n";
}

void DefineMacro()
{
    // 매크로 출력
    cout << "매크로 PLUS: " << PLUS << endl; // endl: end line
}

void InputOutput()
{
    // 외부 입력
    cout << "입력값: ";
    int Number;
    cin >> Number;
    cout << "출력값: " << Number << endl;
}

void VariableType()
{
    // 정수형 데이터 종류
    short Num1 = 10;
    int Num2 = 20;
    long Num3 = 30;
    cout << "정수형 데이터: " << Num1 << " " << Num2 << " " << Num3 << endl;

    // 실수형 데이터 종류
    float Num4 = 1.0f;
    double Num5 = 2.0;
    cout.setf(std::ios::fixed);
    cout << "실수형 데이터: " << Num4 << " " << Num5 << endl;

    // 문자형 데이터
    // 문자 1개: '', 문자 여러개: ""
    // char 타입은 문자 1개만 저장
    char Text1;
    const char* Text2;
    Text1 = 'A';
    Text2 = "AB";
    cout << "문자형 데이터: " << Text1 << " " << Text2 << endl;

    // 불리언 데이터
    // 0 == false
    // 0 이외의 값은 true
    bool Condition;
    Condition = true;
    cout << "불리언형 데이터: " << Condition << " " << boolalpha << Condition << noboolalpha << endl;
    Condition = false;
    cout << "불리언형 데이터: " << Condition << " " << boolalpha << Condition << noboolalpha << endl;
}