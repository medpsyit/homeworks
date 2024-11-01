#include "../lib/include/lib.h"
#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	greet_lib::Greeter test;
	std::string name;
	std::cout << "¬ведите им€: ";
	std::cin >> name;
	std::cout << test.greet(name) << std::endl;
	return 0;
}