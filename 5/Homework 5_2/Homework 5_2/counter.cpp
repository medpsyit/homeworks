#include <iostream>
#include "counter.h"

    int Counter::get_count() { return defaultCount; }
    void Counter::set_count(int customCount) { if (customCount >= 0) { defaultCount = customCount; } }
    void Counter::add() { defaultCount++; }
    void Counter::subtract() { if (defaultCount - 1 >= 0) { defaultCount--; } else { std::cout << "Счётчик не может быть меньше нуля!\n"; } }
    void Counter::check() { std::cout << "Текущее значение: " << defaultCount << std::endl; }