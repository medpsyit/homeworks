add_executable(game)

target_sources(game PRIVATE 
"main.cpp"
)

target_link_libraries(game PRIVATE race_lib)