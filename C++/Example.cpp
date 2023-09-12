#include "Example.h"
#include <iostream>

using std::cin;
using std::cout;

void SizeComparison()
{
    // 두 수 비교하기
    int A, B;
    cin >> A >> B;

    if (A > B)
    {
        std::cout << '>';
    }
    else if (A < B)
    {
        std::cout << '<';
    }
    else
    {
        std::cout << "==";
    }
}

void LeapYear()
{
    // 윤년
    int N;
    cin >> N;

    if ((N % 4 == 0) && (N % 100 != 0) || N % 400 == 0)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
}

void Quadrant()
{
    // X, Y 좌표
    int X, Y;
    cin >> X >> Y;

    // 제N 사분면 분기
    if (X > 0 && Y > 0)
    {
        cout << 1;
    }
    else if (X < 0 && Y > 0)
    {
        cout << 2;
    }
    else if (X < 0 && Y < 0)
    {
        cout << 3;
    }
    else
    {
        cout << 4;
    }
}

void OvenTime()
{
    // A(시), B(분), C(요리 시간 분 단위)
    int A, B, C;
    cin >> A >> B >> C;

    // 시간 계산
    B += C;
    A += B / 60;
    B %= 60;

    // 자정을 지난 경우
    if (A > 23)
    {
        A %= 24;
    }

    cout << A << " " << B;
}

void MultipleCalculate()
{
    int N, A, B;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> A >> B;
        cout << A + B << "\n";
    }
}

void Receipt()
{
    int X, N, A, B, S = 0;
    cin >> X >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> A >> B;
        S += A * B;
    }

    cout << ((X == S) ? "Yes" : "No");
}

void AlarmClock()
{
    int H, M;
    cin >> H >> M;

    M -= 45;
    if (M < 0)
    {
        M += 60;
        H -= 1;
        if (H < 0)
        {
            H += 24;
        }
    }

    cout << H << " " << M;
}