#include "../include/race.h"


namespace race_lib
{
    void Race::increment_amount() { vehicleAmount++; }
    void Race::game_choice()
    {
        if (vehicleAmount == 0)
        {
            std::cout << "������ ���� ���������������� ���� �� 2 ������������ ��������.\n1. ���������������� ���������.\n�������� ��������: ";
        }
        if (vehicleAmount == 1)
        {
            std::cout << "�������� ���� �� ��� 1 ������������ ��������.\n1. ���������������� ���������.\n�������� ��������: ";
        }
        if (vehicleAmount > 1)
        {
            std::cout << "1. ���������������� ���������.\n2. ������ �����.\n�������� ��������: ";
        }
    }
    void Race::print_choice()
    {
        if (raceType == 1) { std::cout << "����� ��� ��������� ����������. "; }
        if (raceType == 2) { std::cout << "����� ��� ���������� ����������. "; }
        if (raceType == 3) { std::cout << "����� ��� ��������� � ���������� ����������. "; }
        std::cout << "����������: " << distanceRace << std::endl;
        std::cout << "1. �������-���������.\n2. �����.\n3. �������.\n4. �������.\n5. ���.\n6. �������-���������.\n7. ����-������.\n0.��������� �����������.\n\n"
                  << "�������� ��������� ��� ������� \"0\" ��� ��������� �������� �����������: ";
    }
    int Race::get_type() { return raceType; }
    int Race::get_race_distance() { return distanceRace; }
    int Race::get_vehAmount() { return vehicleAmount; }
}