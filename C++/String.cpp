#include "String.h"
#include <iostream>

using  std::cin;
using  std::cout;

void String()
{
	char A = 'A';
	char Hello[5] = { 'H', 'E', 'L', 'L', 'O' };
	char World[6] = "World"; // '\0' 문자가 마지막에 포함
	char HelloWorld[] = "Hello World";

	int Size = sizeof(HelloWorld);
	for (int i = 0; i < Size - 1; i++)
	{
		cout << HelloWorld[i];
	}
}

void WordIndex()
{
	cout << "원하는 단어: ";
	char Words[20];
	cin >> Words;

	cout << "출력 자리 수: ";
	int Number;
	cin >> Number;

	cout << Words[Number - 1];
}

void AlphabetNumber()
{
	cout << "원하는 단어: ";
	char Word[20];
	cin >> Word;
	constexpr int WordSize = sizeof(Word) - 1;

	char Alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	constexpr int AlphabetSize = sizeof(Alphabet) - 1;

	int Check[AlphabetSize];
	for (int i = 0; i < AlphabetSize; i++)
	{
		Check[i] = -1;
	}

	for (int i = 0; i < WordSize; i++)
	{
		for (int j = 0; j < AlphabetSize; j++)
		{
			if (Word[i] == Alphabet[j])
			{
				if (Check[j] == -1)
				{
					Check[j] = i;
				}
			}
		}
	}

	for (int i = 0; i < AlphabetSize; i++)
	{
		cout << Check[i] << " ";
	}
}