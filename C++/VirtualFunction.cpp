#include "VirtualFunction.h"
#include <iostream>

using std::cout;

void VirtualFunction()
{
	CBase* Base = new CBase;
	Base->PrintClass();

	CDerived* Derived = new CDerived;
	Derived->PrintClass();

	Base = Derived;
	Base->PrintClass();
}

void CBase::PrintClass()
{
	cout << "Base\n";
}

void CDerived::PrintClass()
{
	cout << "Derived\n";
}
