#pragma once

#include <array>
using std::array;

void Lotto();
void SelectNumbers(array<int, 6>& PlayerNumbers);
void CreateNumbers(array<int, 6>& PrizeNumbers);
int CompareNumbers(array<int, 6>& PlayerNumbers, array<int, 6>& PrizeNumbers);
void PrintRanking(int SameCount);