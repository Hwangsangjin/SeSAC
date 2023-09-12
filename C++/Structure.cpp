#include "Structure.h"
#include <iostream>

using std::cout;

void Structure()
{
	struct Inflatable
	{
		char Name[20];
		float Volume;
		double Price;
	};

	Inflatable MyInflatable1{};


	Inflatable MyInflatable2
	{
		"Hello",
		1.88f,
		29.99
	};

	MyInflatable2.Volume = 3.09f;
}

void Enumeration()
{
	enum Days
	{
		Sun,
		Mon,
		Tue,
		Wed,
		Thu,
		Fri,
		Sat
	};

	Days Day;
	Day = Tue;

	cout << Day;
}

void ChangeValue1(int value)
{
	value = 0;
}

int ChangeValue2()
{
	return 0;
}

int A = 10;

void CallByValue()
{
	ChangeValue1(A);
	cout << A << "\n";
	
	A = ChangeValue2();
	cout << A;
}