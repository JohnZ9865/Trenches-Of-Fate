cmake_minimum_required(VERSION 3.10)
project(MyCharacterProject)

ADD_SUBDIRECTORY(test/googletest)

# add_executable(test_char
    # src/main_character.cpp 
    # src/character.cpp 
    # test/test.cpp
# )


add_executable(test_eg # eg = event graph
    src/event.cpp
    src/graph.cpp
    test/testEventGraph.cpp
)

TARGET_LINK_LIBRARIES(test_eg gtest)
TARGET_COMPILE_DEFINITIONS(test_eg PRIVATE gtest_disable_pthreads=ON)

TARGET_LINK_LIBRARIES(test_eg gmock gtest gmock_main)


