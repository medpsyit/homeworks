set (SOURCES 
"src/race.cpp"
"src/vehicle.cpp"
"src/ground.cpp"
"src/air.cpp"
"src/interface.cpp"
)

set (HEADERS 
"include/race.h"
"include/vehicle.h"
"include/ground.h"
"include/air.h"
"include/interface.h"
)


add_library(race_lib SHARED 
${SOURCES} 
${HEADERS} 
)