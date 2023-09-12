#include <iostream>
#include <limits>

using std::cin;
using std::cout;
using std::boolalpha;
using std::numeric_limits;
using std::streamsize;

bool Problem5()
{
	cout << "true/false 4개: ";

	bool X1, X2, X3, X4;
	cin >> boolalpha >> X1 >> X2 >> X3 >> X4;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// 조건의 참, 거짓에 따라서 true 또는 false 반환
	return (X1 || X2) && (X3 || X4);
}