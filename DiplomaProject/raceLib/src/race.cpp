#include "../include/race.h"


namespace race_lib
{
    void Race::increment_amount() { vehicleAmount++; }
    void Race::game_choice()
    {
        if (vehicleAmount == 0)
        {
            std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства.\n1. Зарегистрировать транспорт.\nВыберите действие: ";
        }
        if (vehicleAmount == 1)
        {
            std::cout << "Добавьте хотя бы ещё 1 транспортное средство.\n1. Зарегистрировать транспорт.\nВыберите действие: ";
        }
        if (vehicleAmount > 1)
        {
            std::cout << "1. Зарегистрировать транспорт.\n2. Начать гонку.\nВыберите действие: ";
        }
    }
    void Race::print_choice()
    {
        if (raceType == 1) { std::cout << "Гонка для наземного транспорта. "; }
        if (raceType == 2) { std::cout << "Гонка для воздушного транспорта. "; }
        if (raceType == 3) { std::cout << "Гонка для наземного и воздушного транспорта. "; }
        std::cout << "Расстояние: " << distanceRace << std::endl;
        std::cout << "1. Ботинки-вездеходы.\n2. Метла.\n3. Верблюд.\n4. Кентавр.\n5. Орёл.\n6. Верблюд-быстроход.\n7. Ковёр-самолёт.\n0.Закончить регистрацию.\n\n"
                  << "Выберите транспорт или нажмите \"0\" для окончания процесса регистрации: ";
    }
    int Race::get_type() { return raceType; }
    int Race::get_race_distance() { return distanceRace; }
    int Race::get_vehAmount() { return vehicleAmount; }
}