#include "PureVirtualFunction.h"
#include <iostream>

using std::cout;

void PureVirtualFunction()
{
	CVirtualDerived* Derived = new CVirtualDerived;
	Derived->PrintFunction();
}

void CVirtualDerived::PrintFunction()
{
	cout << "Function\n";
}
