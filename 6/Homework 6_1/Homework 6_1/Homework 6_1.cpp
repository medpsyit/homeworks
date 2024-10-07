#include <iostream>
#define MODE 1

#ifndef MODE
#error Необходимо указать константу MODE!
#endif

int main()
{
    setlocale(LC_CTYPE, "rus");
#if MODE == 0
    std::cout << "Работаю в режиме тренировки." << std::endl;
#elif MODE == 1
    int add(int first, int second);
    std::cout << "Работаю в боевом режиме." << std::endl;
    int first{}, second{};
    std::cout << "Ведите первое число: ";
    std::cin >> first;
    std::cout << "Ведите второе число: ";
    std::cin >> second;
    std::cout << "Результат сложения: " << add(first, second) << std::endl;
#else
    std::cout << "Неизвестный режим. Завершение работы." << std::endl;
#endif
    return 0;
}

int add(int first, int second) { return first + second; }