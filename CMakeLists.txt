cmake_minimum_required(VERSION 3.10)
project(MyCharacterProject)

ADD_SUBDIRECTORY(googletest)

add_executable(test_char
    # src/main_character.cpp 
    src/character.cpp 
    test/test.cpp
)


add_executable(test_event_and_graph
    src/event.cpp
    src/graph.cpp
    test/testEventGraph.cpp
)

TARGET_LINK_LIBRARIES(test_char gtest)
TARGET_COMPILE_DEFINITIONS(test_char PRIVATE gtest_disable_pthreads=ON)

TARGET_LINK_LIBRARIES(test_event_and_graph gmock gtest gmock_main)


