add_executable(exe)

target_sources(exe PRIVATE 
"main.cpp"
)

target_link_libraries(exe PRIVATE leave_lib)