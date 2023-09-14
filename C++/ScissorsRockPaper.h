#pragma once

enum EHand
{
	End,
	Scissors,
	Rock,
	Paper
};

enum EResult
{
	Win,
	Lose,
	Draw
};

void ScissorsRockPaper();
void PrintAIHand(EHand AI);
void PrintPlayerHand(EHand Player);
void PrintResult(EResult Result);
EResult Judgement(EHand Player, EHand AI);