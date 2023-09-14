#include "MiniProject.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using std::cin;
using std::cout;

// 난수 : 불규칙(Random)하게 생성되는 수
// C++에서 cstdlib 라이브러리를 포함한 후 rand() 사용
// srand() : 난수를 생성할 때 기준값을 정해주는 함수

// 시간 값 사용 : 컴퓨터 시계 값을 사용
// ctime 라이브러리 사용
// time() : time()이 실행될 때 현재 시간 표시

void Random()
{
	srand((unsigned int)time(NULL));

	int Random1 = rand();
	cout << Random1 << "\n";

	int Random2 = rand();
	cout << Random2 % 10 << "\n";
}

void UpAndDown()
{
	srand((unsigned int)time(NULL));
	int RandomValue = rand() % 50 + 1;
	int GuessValue;
	int Count = 0;

	clock_t StartTime = clock();

	while (true)
	{
		Count++;

		cout << "예상 값: ";
		cin >> GuessValue;

		if (RandomValue > GuessValue)
		{
			cout << "Up\n";
		}
		else if (RandomValue < GuessValue)
		{
			cout << "Down\n";
		}
		else
		{
			break;
		}
	}

	clock_t EndTime = clock();

	cout << "정답!\n";
	cout << "시도 횟수: " << Count << "\n";

	double Duration = (double)(EndTime - StartTime) / 1000;
	cout << "걸린 시간: " << Duration;
}

// 권총의 장전 가능 총알 수는 6개, 장전된 총알 1개
// 인원 수를 입력받아 번갈아 방아쇠를 당겨 몇번째 사람이 총알을 맞았는지 표시
// 차례가 돌아가면 탄창을 무작위로 회전, 방아쇠를 당김, 총알 맞았는지 판단
void Roulette()
{
	cout << "게임에 참가할 인원: ";
	int PlayerCount;
	cin >> PlayerCount;

	// 랜덤 값 발생 기준 값
	srand((unsigned int)time(NULL));

	// 참가자 시작 순서 정하기 => 랜덤 값 발생
	int StartOrder = rand() % PlayerCount + 1;
	int PlayerNumber = StartOrder;
	cout << PlayerNumber << "번 참가자부터 시작\n";

	// 탄창 회전 => 랜덤 값 발생
	int RouletteRotation = rand() % 6 + 1;
	cout << "탄창 회전(" << RouletteRotation << "번 총알 장전)\n\n";

	while (true)
	{
		// 입력 대기 => 게임 흐름 제어
		cout << PlayerNumber << "번 참가자";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";
		Sleep(500);

		// 총알 맞았는 판단 => 랜덤 값과 순서 값이 같은 지 판단
		if (RouletteRotation == PlayerNumber)
		{
			cout << " 총알 맞음";
			break;
		}
		else
		{
			cout << " 살았음";
			PlayerNumber++;

			// 참가자 수의 범위를 넘어서면 처음 값으로 되돌려 줌
			if (PlayerNumber > PlayerCount)
			{
				PlayerNumber = 1;
			}
		}

		cout << "\n";
	}
}

void BallInsert()
{
	cout << "바구니의 개수와 횟수: ";
	int BasketCount, InsertCount;
	cin >> BasketCount >> InsertCount;

	int* pBasket = new int[BasketCount];
	for (int i = 0; i < BasketCount; i++)
	{
		pBasket[i] = 0;
	}

	int StartNumber, EndNumber, BallNumber;

	for (int i = 0; i < InsertCount; i++)
	{
		cout << "시작과 끝 번호, 공 숫자: ";
		cin >> StartNumber >> EndNumber >> BallNumber;

		for (int j = StartNumber; j <= EndNumber; j++)
		{
			pBasket[j - 1] = BallNumber;
		}
	}

	for (int i = 0; i < BasketCount; i++)
	{
		cout << pBasket[i] << " ";
	}

	delete[] pBasket;
	pBasket = nullptr;
}