#include "Class.h"
#include <iostream>

using std::cout;

void Class()
{
	CAnimal Dog("Dog");
	CAnimal Cat("Cat");

	cout << Dog.GetName() << "\n";
	cout << Cat.GetName() << "\n";

	CAnimal* pDog = &Dog;
	CAnimal* pCat = &Cat;

	cout << pDog->GetName() << "\n";
	cout << pCat->GetName() << "\n";
}