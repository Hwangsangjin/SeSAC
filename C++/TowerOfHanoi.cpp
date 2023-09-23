#include "TowerOfHanoi.h"
#include <iostream>
#include <limits>

using std::cin;
using std::cout;
using std::numeric_limits;
using std::streamsize;

void TowerOfHanoi()
{
    long long int Count;
    
    do
    {
        cout << "= 하노이 타워 =\n";
        cout << "원반 개수: ";

        cin >> Count;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            system("cls");
            continue;
        }

    } while ((Count < 1) || (Count > numeric_limits<streamsize>::max()));

    CTower TowerA('A', Count);
    CTower TowerB('B', Count);
    CTower TowerC('C', Count);

    CTower* pTower = &TowerA;
    pTower->MoveDisk(Count, TowerA, TowerB, TowerC);
    pTower = nullptr;
}

CTower::CTower(char Label, long long int Count)
{
    Stick.first = Label;
    
    if (Stick.first == 'A')
    {
        for (long long int i = Count; i > 0; i--)
        {
            Stick.second.push(i);
        }
    }
}

void CTower::MoveDisk(long long int Count, CTower& Source, CTower& Auxiliary, CTower& Destination)
{
    if (Count == 1)
    {
        Destination.Stick.second.push(Source.Stick.second.top());
        PrintDisk(Source, Destination);
        Source.Stick.second.pop();
    }
    else
    {
        MoveDisk(Count - 1, Source, Destination, Auxiliary);
        PrintDisk(Source, Destination);
        MoveDisk(Count - 1, Auxiliary, Source, Destination);
    }
}

void CTower::PrintDisk(CTower& Source, CTower& Destination)
{
    cout << Source.Stick.first << " -> " << Destination.Stick.first << "\n";
}
