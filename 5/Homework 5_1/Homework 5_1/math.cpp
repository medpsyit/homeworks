#include "math.h"
#include <iostream>

void addition(int firstNum, int secondNum)
{
	std::cout << firstNum << " + " << secondNum << " = " << firstNum + secondNum << std::endl;
};

void subtraction(int firstNum, int secondNum)
{
	std::cout << firstNum << " - " << secondNum << " = " << firstNum - secondNum << std::endl;
};

void multiplication(int firstNum, int secondNum)
{
	std::cout << firstNum << " * " << secondNum << " = " << firstNum * secondNum << std::endl;
};

void division(int firstNum, int secondNum)
{
	std::cout << firstNum << " / " << secondNum << " = " << firstNum / secondNum << std::endl;
};

void exponentiation(int firstNum, int secondNum)
{
	int power = 1;
	for (int i = 0; i < secondNum; i++)
	{
		power = power * firstNum;
	}
	std::cout << firstNum << " в степени " << secondNum << " = " << power << std::endl;
};