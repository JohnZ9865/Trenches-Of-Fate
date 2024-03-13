#include "gtest/gtest.h"
#include "../lib/Game.h"

#include <iostream>
#include <string>
#include <vector>
#include <sstream>


#include "../lib/Event.h"
#include "../lib/Graph.h"
#include "../lib/HomePageUI.h"
#include "../lib/SettingsUI.h"
#include "../lib/StoryUI.h"
#include "../lib/EndScreenUI.h"
#include "../lib/CharacterSelectionUI.h"
#include "../lib/Character.h"

#include <fstream>


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


TEST(HomPageTest, HomePageTest1) {
    Game mygame;
    HomePageUI homepage(mygame);

    std::istringstream iss("1\n2\n1\n1\n2\n");
    std::ostringstream oss;

    homepage.run(iss, oss);

    EXPECT_EQ(mygame.getDifficulty(), 0);
    
}

TEST(HomPageTest, HomePageTest2) {
    Game mygame;
    HomePageUI homepage(mygame);

    std::istringstream iss("1\n2\n1\n2\n2\n");
    std::ostringstream oss;

    homepage.run(iss, oss);

    EXPECT_EQ(mygame.getDifficulty(), 1);
}

TEST(StoryLineInitializationTest, StoryLineTest1) {
    Game mygame;
    mygame.initializeStoryline("storylineFiles/test1.txt");
    Graph& mygraph = mygame.getStoryline();
    EXPECT_EQ(mygraph.getCurrentEvent()->getText(), "eventtext0");

}

TEST(StoryLineInitializationTest, StoryLineTest2) {
    Game mygame;
    mygame.initializeStoryline("storylineFiles/test1.txt");
    Graph& mygraph = mygame.getStoryline();
    EXPECT_EQ(mygraph.getCurrentEvent()->getText(), "eventtext0");

    EXPECT_EQ(mygraph.getCurrentEvent()->getOptions()[0]->getText(), "eventtext1");
    EXPECT_EQ(mygraph.getCurrentEvent()->getOptions()[1]->getText(), "eventtext4");

}

TEST(StoryLineInitializationTest, StoryLineTest3) {
    Game mygame;
    mygame.initializeStoryline("storylineFiles/test1.txt");
    Graph& mygraph = mygame.getStoryline();

    mygraph.setCurrentEvent(mygraph.getCurrentEvent()->getOptions()[0]);
    
    EXPECT_EQ(mygraph.getCurrentEvent()->getOptions()[1]->getText(), "eventtext3");
}

TEST(WholeGameTest, WholeGameTest1) {
    Game mygame;
    HomePageUI homepage(mygame);
    std::istringstream iss("1\n2\n1\n2\n2\n"); //difficulty set to hard.
    std::ostringstream oss;

    homepage.run(iss, oss);
    mygame.initializeStoryline("storylineFiles/test1.txt");


    std::istringstream iss1("0\n1\n");
    std::ostringstream oss1;
    mygame.runThroughStoryLine(iss1, oss1);

    EXPECT_EQ(mygame.getStoryline().getCurrentEvent()->getText(), "eventtext3");

}

TEST(WholeGameTest, WholeGameTest2) {
    Game mygame;
    HomePageUI homepage(mygame);
    std::istringstream iss("1\n2\n1\n2\n2\n"); //difficulty set to hard.
    std::ostringstream oss;

    homepage.run(iss, oss);
    mygame.initializeStoryline("storylineFiles/test1.txt");


    std::istringstream iss1("0\n0\n");
    std::ostringstream oss1;
    mygame.runThroughStoryLine(iss1, oss1);

    EXPECT_EQ(mygame.getStoryline().getCurrentEvent()->getText(), "eventtext2");

}

TEST(EndGameTest, endGameTest1) {
    EndScreenUI endscreen;
    std::ostringstream oss;
    endscreen.run(oss);
    EXPECT_EQ(oss.str(), "==============The End --- The Trenches of Fate==================\nCredits: Shiqi Zhou, Franklyn Lu, William Chen, Stanley Xiao\n");
}
