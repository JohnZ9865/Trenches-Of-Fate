cmake_minimum_required(VERSION 3.10)
project(MyCharacterProject)

ADD_SUBDIRECTORY(test/googletest)

 add_executable(test_char
    src/Character.cpp 
    src/CharacterSelectionUI.cpp
    test/testCharacter.cpp
)


# add_executable(test_eg # eg = event graph
#     src/event.cpp
#     src/graph.cpp
#     test/testEventGraph.cpp
# )

TARGET_LINK_LIBRARIES(test_char gtest)
TARGET_COMPILE_DEFINITIONS(test_char PRIVATE gtest_disable_pthreads=ON)

TARGET_LINK_LIBRARIES(test_char gmock gtest gmock_main)


