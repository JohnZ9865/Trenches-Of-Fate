cmake_minimum_required(VERSION 3.10)
project(MyCharacterProject)

add_executable(test_char
    # src/main_character.cpp 
    src/character.cpp 
    test/test.cpp
)

ADD_SUBDIRECTORY(test/googletest)
TARGET_LINK_LIBRARIES(test_char gtest)
TARGET_COMPILE_DEFINITIONS(test_char PRIVATE gtest_disable_pthreads=ON)