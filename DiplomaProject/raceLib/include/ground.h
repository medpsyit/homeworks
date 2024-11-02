#pragma once

#ifdef RACE_EXPORTS
#define RACE_API __declspec(dllexport)
#else
#define RACE_API __declspec(dllimport)
#endif

#include <string>
#include "../include/race.h"
#include "../include/vehicle.h"

namespace race_lib
{
    class Ground : public Vehicle
    {
    protected:
        Ground() {}
        Ground(Race& cr)
        {
            distance = cr.get_race_distance();
        }
        int continuousMovementTime{ 1 }, restTime{ 1 };
        RACE_API int stopCount();
    };

    class Camel : public Ground
    {
    public:
        Camel(Race& cr)
        {
            distance = cr.get_race_distance();
            vehicleName = "Верблюд";
            speed = 10;
            continuousMovementTime = 30;
            restTime = 5;
            time = time_spent();
        }
    protected:
        RACE_API double time_spent() override;
    };

    class CamelSpeed : public Ground
    {
    public:
        CamelSpeed(Race& cr)
        {
            distance = cr.get_race_distance();
            vehicleName = "Верблюд-быстроход";
            speed = 40;
            continuousMovementTime = 10;
            restTime = 5;
            time = time_spent();
        }
    protected:
        RACE_API double time_spent() override;
    };

    class Centaur : public Ground
    {
    public:
        Centaur(Race& cr)
        {
            distance = cr.get_race_distance();
            vehicleName = "Кентавр";
            speed = 15;
            continuousMovementTime = 8;
            restTime = 2;
            time = time_spent();
        }
    protected:
        RACE_API double time_spent() override;
    };

    class AllTerrainBoots : public Ground
    {
    public:
        AllTerrainBoots(Race& cr)
        {
            distance = cr.get_race_distance();
            vehicleName = "Ботинки-вездеходы";
            speed = 6;
            continuousMovementTime = 60;
            restTime = 10;
            time = time_spent();
        }
    protected:
        RACE_API double time_spent() override;
    };
}