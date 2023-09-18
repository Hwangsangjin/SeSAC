#pragma once

#include <iostream>
#include <string>

using std::cout;
using std::string;

class CAnimal
{
public:
	CAnimal(string InName)
		: Name(InName)
	{}

	string GetName() { return Name; }

	virtual void Speak() const
	{
		cout << Name << " ???\n";
	}

protected:
	string Name;
};

class CDog : public CAnimal
{
public:
	CDog(string InName)
		: CAnimal(InName)
	{}

	virtual void Speak() const
	{
		cout << Name << " Woof\n";
	}
};

class CCat : public CAnimal
{
public:
	CCat(string name)
		: CAnimal(name)
	{}

	virtual void Speak() const
	{
		cout << Name << " Meow\n";
	}
};

void Class();