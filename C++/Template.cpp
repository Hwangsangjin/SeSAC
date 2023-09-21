#include "Template.h"
#include <iostream>

using std::cout;

void Template()
{
	cout << Sum<int>(1, 2) << "\n";
	cout << Sum<float>(1.0, 2.0) << "\n";
}
