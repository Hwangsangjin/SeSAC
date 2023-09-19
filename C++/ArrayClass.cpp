#include "ArrayClass.h"
#include <iostream>
#include <array>

using std::cout;
using std::array;

void ArrayClass()
{
	array<int, 3> Array{ 10, 20, 30 };

	cout << Array.size() << "\n";
	cout << Array.front() << "\n";
	cout << Array.back() << "\n";
	cout << Array.empty() << "\n";
	cout << Array.at(0) << "\n";
}
