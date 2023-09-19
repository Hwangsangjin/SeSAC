#include "VectorClass.h"
#include <iostream>
#include <vector>

using std::cout;
using std::vector;

void VectorClass()
{
	// 동적 생성
	vector<int> Vector1; // 원소 개수, 내용 모두 지정되지 않음
	vector<int> Vector2(3); // 원소 개수
	vector<int> Vector3(3, 2); // 원소 개수와 원소 내용 모두 지정됨

	Vector1.push_back(33);

	cout << Vector1.front() << "\n";

	Vector1.push_back(55);

	cout << Vector1.at(1) << "\n";

	Vector1.push_back(77);

	cout << Vector1.size() << "\n";

	cout << Vector1.capacity() << "\n";

	Vector1.pop_back();

	cout << Vector1.size() << "\n";

	cout << Vector1.capacity() << "\n";
}