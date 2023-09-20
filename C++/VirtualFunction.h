#pragma once

class CBase
{
public:
	CBase() = default;
	virtual ~CBase() = default;

	virtual void PrintClass();
};

class CDerived : public CBase
{
public:
	CDerived() = default;
	virtual ~CDerived() = default;

	virtual void PrintClass();
};

void VirtualFunction();

