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
    class Air : public Vehicle
    {
    protected:
        Air() {}
        Air(Race& cr)
        {
            distance = cr.get_race_distance();
        }
        int distanceReductionFactor{ 0 };
        RACE_API double distanceFactored();
    };

    class MagicCarpet : public Air
    {
    public:
        MagicCarpet(Race& cr)
        {
            distance = cr.get_race_distance();
            vehicleName = "Ковёр-самолёт";
            speed = 10;
            time = time_spent();
        }
    protected:
        RACE_API double time_spent() override;
    };

    class Eagle : public Air
    {
    public:
        Eagle(Race& cr)
        {
            distance = cr.get_race_distance();
            vehicleName = "Орёл";
            speed = 8;
            distanceReductionFactor = 6;
            time = time_spent();
        }
    protected:
        RACE_API double time_spent() override;
    };

    class Broom : public Air
    {
    public:
        Broom(Race& cr)
        {
            distance = cr.get_race_distance();
            vehicleName = "Метла";
            speed = 20;
            distanceReductionFactor = static_cast<int>(distance) / 1000;;
            time = time_spent();
        }
    protected:
        RACE_API double time_spent() override;
    };
}