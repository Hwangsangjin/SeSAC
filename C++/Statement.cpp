#define _CRT_SECURE_NO_WARNINGS

#include "Statement.h"
#include <iostream>
#include <array>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::array;
using std::string;

void BranchingStatement()
{
    // 과목 점수
    int Sum = 0;
    cout << "3과목 점수 입력: ";
    array<int, 3> Array{};

    for (auto& i : Array)
    {
        cin >> i;
        i = 60;
        Sum += i;
    }

    auto Average = Sum / Array.size();
    const bool bPass1 = Array[0] >= 60;
    const bool bPass2 = Array[1] >= 60;
    const bool bPass3 = Array[2] >= 60;
    const bool bAllPass = bPass1 && bPass2 && bPass3;

    if (Average >= 60 && bAllPass)
    {
        cout << "합격" << endl;
    }
    else
    {
        cout << "불합격" << endl;
    }

    // 과목 번호
    bool bOnLoop = true;
    while (bOnLoop)
    {
        cout << "과목 번호 입력: ";
        int SubjectNumber = 0;
        cin >> SubjectNumber;

        // 잘못된 입력을 받은 경우
        if (cin.fail())
        {
            cout << "선택 오류" << endl;
            cin.clear();    // 오류 스트림 초기화
            cin.ignore(256, '\n');  // 입력 버퍼 비우기
        }

        std::cout << "선택한 과목: ";

        switch (SubjectNumber)
        {
        case 1:
            cout << "C++" << endl;
            bOnLoop = false;
            break;
        case 2:
            cout << "언리얼 엔진" << endl;
            bOnLoop = false;
            break;
        case 3:
            cout << "프로젝트" << endl;
            bOnLoop = false;
            break;
        default:
            cout << "선택 오류" << endl;
            break;
        }
    }

    // 오늘의 요일
    time_t Timer = time(NULL);  // 유닉스 운영체제가 공식 출시한 1970년 1월 1일 0시 0분 0초를 기점으로 현재까지 흐른 시간을 초 단위로 반환
    struct tm* Now = localtime(&Timer); // time 함수가 리턴해주는 값은 시스템에 따라 32비트나 64비트 정수이기 때문에 사용하고자 하는 형태에 맞게끔 포맷팅
    string Day;
    switch (Now->tm_wday)
    {
    case 0:
        break;
    case 1:
        Day = "(월)";
        break;
    case 2:
        Day = "(화)";
        break;
    case 3:
        Day = "(수)";
        break;
    case 4:
        Day = "(목)";
        break;
    case 5:
        Day = "(금)";
        break;
    case 6:
        Day = "(토)";
        break;
    }

    constexpr int StartYear = 1900; // tm_year는 1900년부터 시작하기 때문에 현재 년도를 출력하기 위해서 1900을 추가
    constexpr int StartMonth = 1;   // tm_mon은 0부터 시작하기 때문에 1월부터 12월까지 출력하기 위해서 1을 추가
    constexpr int DivideHour = 12;  // tm_hour은 1부터 23까지 증가하기 때문에 12간제로 출력하기 위해서 12로 나눔
    std::cout << "현재: " << Now->tm_year + StartYear << "년 " << Now->tm_mon + StartMonth << "월" << Now->tm_mday << "일" << Day << " " << Now->tm_hour % DivideHour << "시" << Now->tm_min << "분" << Now->tm_sec << "초" << endl;
}

void RepetitionStatement()
{
    // 구구단
    for (int i = 2; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            std::cout << i << "x" << j << " = " << i * j << endl;
        }
    }

    std::cout << endl;

    for (int i = 2; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            cout << i << "x" << j << " = " << i * j;
            cout.width(5);

            if (i * j >= 10)
            {
                std::cout.width(4);
            }

            if (j % 3 == 0)
            {
                cout.width(0);
                cout << endl;
            }
        }
    }

    cout << endl;

    // 별찍기
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << '*';
        }

        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            cout << ' ';

        }

        for (int j = 0; j < i + 1; j++)
        {
            cout << '*';
        }

        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            cout << '*';
        }

        cout << endl;
    }

    cout << endl;

    // 피라미드
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3 - i; j++)
        {
            cout << ' ';
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << '*';
        }

        cout << std::endl;
    }

    cout << std::endl;

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 3 - i; j++)
        {
            cout << '-';
        }

        for (int j = 0; j < i * 2 + 1; j++)
        {
            cout << '*';
        }

        cout << std::endl;
    }
}