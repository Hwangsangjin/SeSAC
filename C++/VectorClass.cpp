#include "VectorClass.h"
#include <iostream>
#include <vector>

using std::cout;
using std::vector;

void VectorClass()
{
	// ���� ����
	vector<int> Vector1; // ���� ����, ���� ��� �������� ����
	vector<int> Vector2(3); // ���� ����
	vector<int> Vector3(3, 2); // ���� ������ ���� ���� ��� ������

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