#pragma once

#ifdef RACE_EXPORTS
#define RACE_API __declspec(dllexport)
#else
#define RACE_API __declspec(dllimport)
#endif

#include <string>
#include "../include/race.h"

namespace race_lib
{
    class Vehicle
    {
    public:
        Vehicle() {}
    protected:
        Vehicle(Race& cr)
        {
            distance = cr.get_race_distance();
        }
        std::string vehicleName{ "Название транспорта" };
        int speed{ 1 }; // km/h
        int distance{ 0 };
        bool status{ false };
        double time = time_spent(); // hours
        RACE_API virtual double time_spent();
    public:
        RACE_API bool get_status();
        RACE_API void change_status();
        RACE_API std::string get_vehicle_name();
        RACE_API void set_vehicle_name(std::string name);
        RACE_API double get_time();
        RACE_API void set_time(double currTime);
    };
}