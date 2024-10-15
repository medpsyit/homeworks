cmake_minimum_required(VERSION 3.22.0)

project(hierarchy_figures)

set (HEADERS 
figure.h 
triangles.h 
quadrangles.h 
info.h 
)

set (SOURCES 
main.cpp 
figure.cpp 
info.cpp 
)

add_executable (figures ${HEADERS} ${SOURCES})