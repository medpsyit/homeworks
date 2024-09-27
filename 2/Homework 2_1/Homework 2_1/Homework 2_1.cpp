#include <iostream>
#include <string>

class Calculator
{
private:
    double pNum1 = 1.0;
    double pNum2 = 1.0;
public:
    double get_num1() { return pNum1; }
    double get_num2() { return pNum2; }
    bool set_num1(double num1)
    {
        if (num1 != 0) 
        { 
            pNum1 = num1; 
            return true; 
        } else { return false; }
    }
    bool set_num2(double num2)
    {
        if (num2 != 0)
        {
            pNum2 = num2; 
            return true;
        }
        else { return false; }
    }
    double add() { return pNum1 + pNum2; }
    double multiply() { return pNum1 * pNum2; }
    double subtract_1_2() { return pNum1 - pNum2; }
    double subtract_2_1() { return pNum2 - pNum1; }
    double divide_1_2() { return pNum1 / pNum2; }
    double divide_2_1() { return pNum2 / pNum1; }
};

int main()
{
    setlocale(LC_CTYPE, "rus");
    Calculator test;
    double num1{};
    double num2{};
    std::cout << "Здравствуйте!" << std::endl;
    while (true)
    {
        std::cout << "Пожалуйста, введите первое число: ";
        std::cin >> num1;
        while (!test.set_num1(num1)) 
        {
            std::cout << "Некорректный ввод! Попробуйте другое число: ";
            std::cin >> num1;
        };
        std::cout << "Пожалуйста, введите второе число: ";
        std::cin >> num2;
        while (!test.set_num2(num2))
        {
            std::cout << "Некорректный ввод! Попробуйте другое число: ";
            std::cin >> num2;
        };
        std::cout << "num1 + num2 = " << test.add() << std::endl;
        std::cout << "num1 * num2 = " << test.multiply() << std::endl;
        std::cout << "num1 - num2 = " << test.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << test.subtract_2_1() << std::endl;
        std::cout << "num1 / num2 = " << test.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << test.divide_2_1() << "\n\n" << std::endl;
    }
    return 0;
}
