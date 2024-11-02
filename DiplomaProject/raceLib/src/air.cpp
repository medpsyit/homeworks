#include "../include/air.h"

namespace race_lib
{
	double Air::distanceFactored() { return distance * (1 - (static_cast<double>(distanceReductionFactor) / 100)); }
    
    double MagicCarpet::time_spent() 
    {
        if (distance < 1000) { return distance / speed; }
        if (distance >= 1000 && distance < 5000)
        {
            distanceReductionFactor = 3;
            return distanceFactored() / speed;
        }
        if (distance >= 5000 && distance < 10000)
        {
            distanceReductionFactor = 10;
            return distanceFactored() / speed;
        }
        distanceReductionFactor = 5;
        return distanceFactored() / speed;
    }

    double Eagle::time_spent() 
    {
        return distanceFactored() / speed;
    }

    double Broom::time_spent() 
    {
        return distanceFactored() / speed;
    }
}