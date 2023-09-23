#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::array;

/*
2960번 에라토스테네스의 체

문제
에라토스테네스의 체는 N보다 작거나 같은 모든 소수를 찾는 유명한 알고리즘이다.
이 알고리즘은 다음과 같다.
	1. 2부터 N까지 모든 정수를 적는다.
	2. 아직 지우지 않은 수 중 가장 작은 수를 찾는다. 이것을 P라고 하고, 이 수는 소수이다.
	3. P를 지우고, 아직 지우지 않은 P의 배수를 크기 순서대로 지운다.
	4. 아직 모든 수를 지우지 않았다면, 다시 2번 단계로 간다.
N, K가 주어졌을 때, K번째 지우는 수를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 N과 K가 주어진다. (1 ≤ K < N, max(1, K) < N ≤ 1000)

출력
첫째 줄에 K번째 지워진 수를 출력한다.
*/

void Problem7()
{
	cout << "정수의 마지막 숫자와 지우고 싶은 개수: ";

	long long int N, K;
	cin >> N >> K;

	array<bool, 1001> Numbers{};
	int Count = 0;

	// 2부터 N까지 반복
	for (long long int i = 2; i <= N; i++)
	{
		// 이미 지워진 경우
		if (Numbers[i] == true)
		{
			continue;
		}

		// 배수 만큼 반복
		for (long long int j = i; j <= N; j += i)
		{
			// 지워진 숫자가 아닌 경우
			if (Numbers[j] == false)
			{
				Numbers[j] = true;

				// 지워진 개수 증가
				Count++;

				// 지워진 개수가 K와 같은 경우 출력
				if (Count == K)
				{
					cout << K <<"번째 지우는 수: " << j;
					return;
				}
			}
		}
	}
}
