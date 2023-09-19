#pragma once

#include <iostream>
#include <string>

using std::cout;
using std::string;

class CAnimal
{
public:
	CAnimal() = delete;
	CAnimal(string InName)
		: Name(InName)
	{}
	virtual ~CAnimal() = default;

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
	CDog() = delete;
	CDog(string InName)
		: CAnimal(InName)
	{}
	virtual ~CDog() = default;

	virtual void Speak() const override
	{
		cout << Name << " Woof\n";
	}
};

class CCat : public CAnimal
{
public:
	CCat() = delete;
	CCat(string name)
		: CAnimal(name)
	{}
	virtual ~CCat() = default;

	virtual void Speak() const override
	{
		cout << Name << " Meow\n";
	}
};

void Class();