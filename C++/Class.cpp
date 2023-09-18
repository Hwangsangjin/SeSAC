#include "Class.h"

void Class()
{
	CAnimal Animal("Animal");
	CDog Dog("Dog");
	CCat Cat("Cat");

	Animal.Speak();
	Dog.Speak();
	Cat.Speak();

	CAnimal* pDog = &Dog;
	CAnimal* pCat = &Cat;

	pDog->Speak();
	pCat->Speak();

	CAnimal* Animals[] = { &Dog, &Cat };
	for (int i = 0; i < 2; i++)
	{
		Animals[i]->Speak();
	}
}