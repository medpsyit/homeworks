#pragma once

#ifdef RACE_EXPORTS
#define RACE_API __declspec(dllexport)
#else
#define RACE_API __declspec(dllimport)
#endif

#include <iostream>

namespace race_lib
{
    class Race
    {
    private:
        int raceType{ 0 }, vehicleAmount{ 0 };
        int distanceRace{ 0 };
    public:
        Race(int ct, int cd)
        {
            raceType = ct;
            distanceRace = cd;
        }
        RACE_API void increment_amount();
        RACE_API void game_choice();
        RACE_API void print_choice();
        RACE_API int get_type();
        RACE_API int get_race_distance();
        RACE_API int get_vehAmount();
    };
}