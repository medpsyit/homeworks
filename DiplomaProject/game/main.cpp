#include <iostream>
#include "../raceLib/include/ground.h"
#include "../raceLib/include/air.h"
#include "../raceLib/include/interface.h"


int main()
{
    setlocale(LC_CTYPE, "rus");
    bool repeat{ true };
    do
    {
        race_lib::Race race = race_lib::race_start();
        race_lib::Vehicle* quene = new race_lib::Vehicle[7];
        int answer{};
        race_lib::Camel camel(race);
        race_lib::CamelSpeed camelSpeed(race);
        race_lib::Centaur centaur(race);
        race_lib::AllTerrainBoots boots(race);
        race_lib::MagicCarpet carpet(race);
        race_lib::Eagle eagle(race);
        race_lib::Broom broom(race);
        do
        {
            race.game_choice();
            std::cin >> answer;
            if (answer == 1)
            {
                int currAnswer{};
                race.print_choice();
                std::cin >> currAnswer;
                switch (currAnswer)
                {
                case 1:
                    if (race.get_type() == 2) { std::cout << "Попытка зарегистрировать неправильный тип транспортного средства!\n" << std::endl; break; }
                    if (boots.get_status())
                    {
                        std::cout << "Ботинки-вездеходы уже зарегистрированы!\n" << std::endl;
                        break;
                    }
                    boots.change_status();
                    quene[race.get_vehAmount()].set_vehicle_name(boots.get_vehicle_name());
                    quene[race.get_vehAmount()].set_time(boots.get_time());
                    std::cout << "Ботинки-вездеходы успешно зарегистрированы!\n" << std::endl;
                    race.increment_amount();
                    break;
                case 2:
                    if (race.get_type() == 1) { std::cout << "Попытка зарегистрировать неправильный тип транспортного средства!\n" << std::endl; break; }
                    if (broom.get_status())
                    {
                        std::cout << "Метла уже зарегистрирована!\n" << std::endl;
                        break;
                    }
                    broom.change_status();
                    quene[race.get_vehAmount()].set_vehicle_name(broom.get_vehicle_name());
                    quene[race.get_vehAmount()].set_time(broom.get_time());
                    std::cout << "Метла успешно зарегистрирована!\n" << std::endl;
                    race.increment_amount();
                    break;
                case 3:
                    if (race.get_type() == 2) { std::cout << "Попытка зарегистрировать неправильный тип транспортного средства!\n" << std::endl; break; }
                    if (camel.get_status())
                    {
                        std::cout << "Верблюд уже зарегистрирован!\n" << std::endl;
                        break;
                    }
                    camel.change_status();
                    quene[race.get_vehAmount()].set_vehicle_name(camel.get_vehicle_name());
                    quene[race.get_vehAmount()].set_time(camel.get_time());
                    std::cout << "Верблюд успешно зарегистрирован!\n" << std::endl;
                    race.increment_amount();
                    break;
                case 4:
                    if (race.get_type() == 2) { std::cout << "Попытка зарегистрировать неправильный тип транспортного средства!\n" << std::endl; break; }
                    if (centaur.get_status())
                    {
                        std::cout << "Кентавр уже зарегистрирован!\n" << std::endl;
                        break;
                    }
                    centaur.change_status();
                    quene[race.get_vehAmount()].set_vehicle_name(centaur.get_vehicle_name());
                    quene[race.get_vehAmount()].set_time(centaur.get_time());
                    std::cout << "Кентавр успешно зарегистрирован!\n" << std::endl;
                    race.increment_amount();
                    break;
                case 5:
                    if (race.get_type() == 1) { std::cout << "Попытка зарегистрировать неправильный тип транспортного средства!\n" << std::endl; break; }
                    if (eagle.get_status())
                    {
                        std::cout << "Орёл уже зарегистрирован!\n" << std::endl;
                        break;
                    }
                    eagle.change_status();
                    quene[race.get_vehAmount()].set_vehicle_name(eagle.get_vehicle_name());
                    quene[race.get_vehAmount()].set_time(eagle.get_time());
                    std::cout << "Орёл успешно зарегистрирован!\n" << std::endl;
                    race.increment_amount();
                    break;
                case 6:
                    if (race.get_type() == 2) { std::cout << "Попытка зарегистрировать неправильный тип транспортного средства!\n" << std::endl; break; }
                    if (camelSpeed.get_status())
                    {
                        std::cout << "Верблюд-быстроход уже зарегистрирован!\n" << std::endl;
                        break;
                    }
                    camelSpeed.change_status();
                    quene[race.get_vehAmount()].set_vehicle_name(camelSpeed.get_vehicle_name());
                    quene[race.get_vehAmount()].set_time(camelSpeed.get_time());
                    std::cout << "Верблюд-быстроход успешно зарегистрирован!\n" << std::endl;
                    race.increment_amount();
                    break;
                case 7:
                    if (race.get_type() == 1) { std::cout << "Попытка зарегистрировать неправильный тип транспортного средства!\n" << std::endl; break; }
                    if (carpet.get_status())
                    {
                        std::cout << "Ковёр-самолёт уже зарегистрирован!\n" << std::endl;
                        break;
                    }
                    carpet.change_status();
                    quene[race.get_vehAmount()].set_vehicle_name(carpet.get_vehicle_name());
                    quene[race.get_vehAmount()].set_time(carpet.get_time());
                    std::cout << "Ковёр-самолет успешно зарегистрирован!\n" << std::endl;
                    race.increment_amount();
                    break;
                case 0:
                    break;
                default:
                    std::cout << "Некорректный ввод!\n" << std::endl;
                    break;
                }
            }
        } while ((race.get_vehAmount() < 2) || (answer != 2));
        race_lib::game_process(race, quene);
        race_lib::game_end(race, quene);
        delete[] quene;
        std::cout << "\n1.Провести ещё одну гонку.\n2.Выйти.\nВыберите действие: ";
        std::cin >> answer;
        if (answer == 2)
        {
            repeat = !repeat;
            std::cout << "\nДо свидания!" << std::endl;
        }
    } while (repeat);
    return 0;
}