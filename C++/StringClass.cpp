#include "StringClass.h"
#include <iostream>
#include <string>

using std::cout;
using std::string;

void StringClass()
{
	string Text1{ "Hello" };
	string Text2{ "World" };

	cout << (Text1 > Text2) << "\n";
	cout << (Text1 < Text2) << "\n";
	cout << (Text1 == Text2) << "\n";

	cout << (Text1 + Text2) << "\n";

	cout << Text1.front() << "\n";
	cout << Text1.back() << "\n";
	cout << Text1.size() << "\n";
	cout << Text1.at(3) << "\n";

	cout << Text1.append(Text2) << "\n";
	cout << Text1.substr(5) << "\n";
	cout << Text1.find("Hello") << "\n";
}
