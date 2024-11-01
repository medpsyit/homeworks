set (SOURCES 
"src/figure.cpp"
"src/info.cpp"
)

set (HEADERS 
"include/figure.h"
"include/info.h"
"include/triangles.h"
"include/quadrangles.h"
)


add_library(figures_lib SHARED 
${SOURCES} 
${HEADERS} 
)