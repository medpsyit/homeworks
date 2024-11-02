#include "../include/interface.h"


namespace race_lib
{
    Race race_start()
    {
        int answer{}, currType{}, currDistance{};
        std::cout << "����� ���������� � ��������� �����!\n" << std::endl;
        do
        {
            std::cout << "1.����� ��� ��������� ����������.\n2.����� ��� ���������� ����������.\n3.����� ��� ��������� � ���������� ����������.\n\n�������� ��� �����: ";
            std::cin >> answer;
            if (answer < 1 || answer > 3)
            {
                std::cout << "������������ �����! ����� ������ ���� �� 1 �� 3. ���������� �����.\n" << std::endl;
            }
        } while (answer < 1 || answer > 3);
        currType = answer;
        std::cout << "\033c";
        do
        {
            std::cout << "�������� ��������� ����� (������ ���� ������������): ";
            std::cin >> answer;
            if (answer < 1)
            {
                std::cout << "������������ ���������! ������ ���� ������������� �����. ���������� �����.\n" << std::endl;
            }
        } while (answer < 1);
        currDistance = answer;
        std::cout << "\033c";
        return Race(currType, currDistance);
    }

    void game_process(Race race, Vehicle* quene)
    {
        bool swapped = false;
        do
        {
            swapped = false;
            for (int currentVehicle = 1; currentVehicle < race.get_vehAmount(); currentVehicle++)
            {
                if (quene[currentVehicle - 1].get_time() > quene[currentVehicle].get_time())
                {
                    Vehicle temp = quene[currentVehicle - 1];
                    quene[currentVehicle - 1] = quene[currentVehicle];
                    quene[currentVehicle] = temp;
                    swapped = true;
                }
            }
        } while (swapped);
    }

    void game_end(Race race, Vehicle* quene)
    {
        std::cout << "\033c";
        std::cout << "���������� �����:\n";
        for (int count = 0; count < race.get_vehAmount(); count++)
        {
            std::cout << count + 1 << ". " << quene[count].get_vehicle_name() << ". �����: " << quene[count].get_time() << std::endl;
        }
    }
}