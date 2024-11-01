add_library(greet_lib STATIC)

target_sources(greet_lib PRIVATE 
"include/lib.h"
"src/lib.cpp"
)