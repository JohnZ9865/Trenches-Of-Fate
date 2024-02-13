#include "gtest/gtest.h"
#include "../lib/character.h"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(characterTests, clout) { // clout
    Character *aCharacter = new Character();
    aCharacter->gainClout();
    aCharacter->gainClout();
    aCharacter->gainClout();
    EXPECT_EQ(aCharacter->getClout(), 3);
    aCharacter->loseClout();
    aCharacter->loseClout();
    EXPECT_EQ(aCharacter->getClout(), 1);
}

TEST(characterTests, name) { // name
    Character *aCharacter = new Character();
    aCharacter->askName();
    std::string name = aCharacter->getName();
    EXPECT_NE(aCharacter->getName(), ""); // opposite of EQ
}

TEST(characterTests, gender) { // gender
    Character *aCharacter = new Character();
    aCharacter->askGender();
    std::string gender = aCharacter->getGender();
    EXPECT_TRUE(gender == "M" || gender == "F");
}

TEST(characterTests, nationality) { // nationality
    Character *aCharacter = new Character();
    aCharacter->askNationality();
    std::string nationality = aCharacter->getNationality();
    EXPECT_TRUE(nationality == "R" || nationality == "B");
}

TEST(characterTests, weapon) { // weapon
    Character *aCharacter = new Character();
    aCharacter->askWeapon();
    std::string weapon = aCharacter->getWeapon();
    EXPECT_TRUE(weapon == "S" || weapon == "A");
}

TEST(characterTests, rank) { // rank
    Character *aCharacter = new Character();
    aCharacter->askRank();
    std::string rank = aCharacter->getRank();
    EXPECT_TRUE(rank == "P" || rank == "I");
}

TEST(characterTests, position) { // position
    Character *aCharacter = new Character();
    aCharacter->askPosition();
    std::string position = aCharacter->getPosition();
    EXPECT_TRUE(position == "A" || position == "I" || position == "S" || position == "Air" || position == "O");
}