#include <iostream>
#include <string>
#include <Windows.h>

struct accounts
{
    int account_number = 0;
    std::string name = "Нет данных";
    double balance = 0.0;
};
void new_balance(accounts& currData, double newBalance)
{
    currData.balance = newBalance;
}
void filling_data(accounts& currData)
{
    std::cout << "Здравствуйте!\nВведите номер счёта: ";
    std::cin >> currData.account_number;
    std::cout << "Введите имя владельца: ";
    std::cin >> currData.name;
    std::cout << "Введите баланс счёта: ";
    std::cin >> currData.balance;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    accounts currData{};
    filling_data(currData);
    int newBalance{};
    std::cout << "Введите новый баланс: ";
    std::cin >> newBalance;
    new_balance(currData, newBalance);
    std::cout << "Ваш счёт: " << currData.name << ", " << currData.account_number << ", " << currData.balance << std::endl;
    return 0;
}
