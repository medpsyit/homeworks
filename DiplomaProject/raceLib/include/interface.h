#pragma once

#ifdef RACE_EXPORTS
#define RACE_API __declspec(dllexport)
#else
#define RACE_API __declspec(dllimport)
#endif

#include <iostream>
#include "../include/vehicle.h"
#include "../include/race.h"

namespace race_lib
{
	RACE_API Race race_start();
	RACE_API void game_process(Race race, Vehicle* quene);
	RACE_API void game_end(Race race, Vehicle* quene);
}
