cmake_minimum_required(VERSION 3.10)
project(MyCharacterProject)

add_executable(
    MyCharacterProject 
    main.cpp 
    character.cpp 
)

target_include_directories(MyCharacterProject PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})