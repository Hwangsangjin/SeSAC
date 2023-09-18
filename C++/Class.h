#pragma once

#include <string>

using std::string;

class CAnimal
{
public:
	CAnimal(string InName)
		: Name(InName)
	{}

	string GetName() { return Name; }

private:
	string Name;
};

void Class();