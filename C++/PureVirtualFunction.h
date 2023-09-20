#pragma once

class CPureBase
{
public:
	CPureBase() = default;
	virtual ~CPureBase() = default;

	virtual void PrintFunction() abstract;
};

class CVirtualDerived : public CPureBase
{
public:
	CVirtualDerived() = default;
	virtual ~CVirtualDerived() = default;

	virtual void PrintFunction() override;
};

void PureVirtualFunction();

