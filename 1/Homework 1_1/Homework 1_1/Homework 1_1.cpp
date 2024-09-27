#include <iostream>
#include <string>

enum class Months
{
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

void print_current_month(Months m)
{
    switch (m)
    {
    case static_cast<Months>(1):
        std::cout << "Январь\n";
        break;
    case static_cast<Months>(2):
        std::cout << "Февраль\n";
        break;
    case static_cast<Months>(3):
        std::cout << "Март\n";
        break;
    case static_cast<Months>(4):
        std::cout << "Апрель\n";
        break;
    case static_cast<Months>(5):
        std::cout << "Май\n";
        break;
    case static_cast<Months>(6):
        std::cout << "Июнь\n";
        break;
    case static_cast<Months>(7):
        std::cout << "Июль\n";
        break;
    case static_cast<Months>(8):
        std::cout << "Август\n";
        break;
    case static_cast<Months>(9):
        std::cout << "Сентябрь\n";
        break;
    case static_cast<Months>(10):
        std::cout << "Октябрь\n";
        break;
    case static_cast<Months>(11):
        std::cout << "Ноябрь\n";
        break;
    case static_cast<Months>(12):
        std::cout << "Декабрь\n";
        break;
    default:
        std::cout << "Месяц введён некорректно!\n";
        break;
    }
}

int main()
{
    setlocale (LC_CTYPE, "rus");
    int setMonth{};
    do
    {
        std::cout << "Введите номер месяца: ";
        std::cin >> setMonth;
        if (setMonth == 0)
        {
            std::cout << "До свидания!\n";
        }
        else if (setMonth >= static_cast<int>(Months::JANUARY) || setMonth <= static_cast<int>(Months::DECEMBER))
        {
            Months currMonth = static_cast<Months>(setMonth);
            print_current_month(currMonth);
        }
    } while (setMonth != 0);
    
    return 0;
}