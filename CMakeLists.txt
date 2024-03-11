cmake_minimum_required(VERSION 3.10)
project(MyCharacterProject)

ADD_SUBDIRECTORY(googletest)

# add_executable(test_char
    # src/main_character.cpp 
    # src/character.cpp 
    # test/test.cpp
# )


add_executable(test_eg # eg = event graph
    src/Event.cpp
    src/Graph.cpp
    test/testEventGraph.cpp
)

add_executable(testrun
    src/Character.cpp
    src/Event.cpp
    src/Game.cpp
    src/Graph.cpp
    src/HomePageUI.cpp
    src/main.cpp
    src/SettingsUI.cpp 
    src/StoryUI.cpp
)

add_executable(testgame
    src/Character.cpp
    src/Event.cpp
    src/Game.cpp
    src/Graph.cpp
    src/HomePageUI.cpp
    test/testWholeGame.cpp
    src/SettingsUI.cpp 
    src/StoryUI.cpp
)

TARGET_LINK_LIBRARIES(test_eg gtest)
TARGET_COMPILE_DEFINITIONS(test_eg PRIVATE gtest_disable_pthreads=ON)

TARGET_LINK_LIBRARIES(test_eg gmock gtest gmock_main)

TARGET_LINK_LIBRARIES(testgame gmock gtest gmock_main)


