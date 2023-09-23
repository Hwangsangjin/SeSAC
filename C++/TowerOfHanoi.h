#pragma once

#include <stack>

using std::pair;
using std::stack;

class CTower
{
public:
	CTower() = delete;
	CTower(char Label, long long int Count);
	CTower(const CTower& Other) = delete;
	CTower(CTower&& Other) = delete;
	~CTower() = default;

	void MoveDisk(long long int Count, CTower& From, CTower& By, CTower& To);
	void PrintDisk(CTower& From, CTower& To);

	CTower& operator=(const CTower& Other) = delete;
	CTower& operator=(CTower&& Other) = delete;

private:
	pair<char, stack<long long int>> Stick{};
};

void TowerOfHanoi();

