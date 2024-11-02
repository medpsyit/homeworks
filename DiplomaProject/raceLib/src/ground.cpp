#include "../include/ground.h"

namespace race_lib
{
    int Ground::stopCount()
    {
        if ((distance / speed) % continuousMovementTime == 0)
        {
            return ((distance / speed) / continuousMovementTime) - 1;
        }
        return (distance / speed) / continuousMovementTime;
    }

    double Camel::time_spent() 
    {
        if (stopCount() == 0) { return distance / speed; }
        if (stopCount() == 1) { return (distance / speed) + restTime; }
        double summTime{ (static_cast<double>(distance) / speed) + restTime };
        for (int count = 1; count < stopCount(); count++)
        {
            summTime = summTime + 8;
        }
        return summTime;
    }

    double CamelSpeed::time_spent() 
    {
        if (stopCount() == 0) { return distance / speed; }
        if (stopCount() == 1) { return (distance / speed) + restTime; }
        if (stopCount() == 2) { return (distance / speed) + restTime + 6.5; }
        double summTime{ (static_cast<double>(distance) / speed) + restTime + 6.5 };
        for (int count = 2; count < stopCount(); count++)
        {
            summTime = summTime + 8;
        }
        return summTime;
    }

    double Centaur::time_spent() 
    {
        if (stopCount() == 0) { return distance / speed; }
        double summTime{ static_cast<double>(distance) / speed };
        for (int count = 0; count < stopCount(); count++)
        {
            summTime = summTime + restTime;
        }
        return summTime;
    }

    double AllTerrainBoots::time_spent()
    {
        if (stopCount() == 0) { return distance / speed; }
        if (stopCount() == 1) { return (distance / speed) + restTime; }
        double summTime{ (static_cast<double>(distance) / speed) + restTime };
        for (int count = 1; count < stopCount(); count++)
        {
            summTime = summTime + 5;
        }
        return summTime;
    }
}