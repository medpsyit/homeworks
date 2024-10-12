#include <iostream>
#include <Windows.h>


class LengthTrouble : public std::exception
{
public:
    const char* what() const override { return "Вы ввели слово запретной длины, до свидания!"; }
};

int function(std::string str, int forbidden_length)
{
    if (str.length() == forbidden_length)
    {
        throw LengthTrouble();
    }
    else { 
        std::cout << "Длина слова \"" << str << "\" равна " << str.length() << std::endl;
        return str.length(); }
}



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string str{};
    int forbidden_length{};
    std::cout << "Здравствуйте, введите размер запретной строки: ";
    std::cin >> forbidden_length;
    try
    {
        do
        {
            std::cout << "Введите слово: ";
            std::cin >> str;
            function(str, forbidden_length);
        } while (str.length() != forbidden_length);
    }
    catch (const LengthTrouble& ex) { std::cout << ex.what() << std::endl; }
    catch (...) { std::cout << "Неизвестная ошибка" << std::endl; }
    return 0;
}

