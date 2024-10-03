#include <iostream>
#include <string>
#include <Windows.h>
#include "counter.h"


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Counter test;
    std::string answer{};
    std::cout << "Здравствуйте!\nВы хотите задать начальное значение счётчика? Введите \"да\" или \"нет\" (\"+\" или \"-\"): ";
    std::cin >> answer;
    if (answer == "да" || answer == "+" || answer == "Да")
    {
        int customCount{};
        std::cout << "Пожалуйста, введите начальное значение: ";
        std::cin >> customCount;
        while (customCount < 0) { std::cout << "Некорректное значение! Счётчик должен быть больше или равен нулю!\n"; std::cin >> customCount; }
        test.set_count(customCount);
    }
    do
    {
        std::cout << "Введите команду (\"+\", \"-\", \"=\" или \"x\"): ";
        std::cin >> answer;
        if (answer == "+") { test.add(); }
        else if (answer == "-") { test.subtract(); }
        else if (answer == "=") { test.check(); }
        else if (answer != "x" && answer != "X" && answer != "х" && answer != "Х") { std::cout << "Некорректный ввод!\n"; }
    } while (answer != "x" && answer != "X" && answer != "х" && answer != "Х");
    std::cout << "До свидания!" << std::endl;
    return 0;
}