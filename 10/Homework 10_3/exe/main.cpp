#include "../dylib/include/dylib.h"
#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	leave_lib::Leaver test;
	std::string name;
	std::cout << "¬ведите им€: ";
	std::cin >> name;
	std::cout << test.leave(name) << std::endl;
	return 0;
}