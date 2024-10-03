#include <iostream>
#include "math.h"

int main()
{
    setlocale(LC_CTYPE, "rus");
    int firstNum{}, secondNum{}, answer{};
    std::cout << "Здравствуйте! Введите первое число: ";
    std::cin >> firstNum;
    std::cout << "Введите второе число: ";
    std::cin >> secondNum;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> answer;
    switch (answer)
    {
    case 1:
        addition(firstNum, secondNum);
        break;
    case 2:
        subtraction(firstNum, secondNum);
        break;
    case 3:
        multiplication(firstNum, secondNum);
        break;
    case 4:
        division(firstNum, secondNum);
        break;
    case 5:
        exponentiation(firstNum, secondNum);
        break;
    default:
        std::cout << "Ошибка ввода!" << std::endl;
    }
    return 0;
}

