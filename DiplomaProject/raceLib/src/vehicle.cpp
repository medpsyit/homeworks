#include "../include/vehicle.h"

namespace race_lib
{
    double Vehicle::time_spent() { return distance / speed; }
    bool Vehicle::get_status() { return status; }
    void Vehicle::change_status() { status = !status; }
    std::string Vehicle::get_vehicle_name() { return vehicleName; }
    void Vehicle::set_vehicle_name(std::string name) { vehicleName = name; }
    double Vehicle::get_time() { return time; }
    void Vehicle::set_time(double currTime) { time = currTime; }
}