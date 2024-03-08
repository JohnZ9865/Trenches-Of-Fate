#include "gtest/gtest.h"
#include "../lib/Character.h"
#include "../lib/CharacterSelectionUI.h"
#include <string>

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(CharacterTest, CharacterInfo) { // all inputs
    Character aCharacter;
    aCharacter.getName("Bob");
    aCharacter.getGender("M");
    aCharacter.getNationality("R");
    aCharacter.getRank("P");
    aCharacter.getPosition("A");
    aCharacter.getWeapon("S", "");

    EXPECT_EQ("Bob", aCharacter.obtainName());
    EXPECT_EQ("M", aCharacter.obtainGender());
    EXPECT_EQ("R", aCharacter.obtainNationality());
    EXPECT_EQ("P", aCharacter.obtainRank());
    EXPECT_EQ("A", aCharacter.obtainPosition());
    EXPECT_EQ("S", aCharacter.obtainWeapon());
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

TEST(characterTests, weapon) { // weapon w/o air
    Character aCharacter;
    CharacterSelectionUI characterUI(aCharacter);

    std::istringstream input("Air\n");
    std::ostringstream output;

    characterUI.askWeapon(input, output);

    EXPECT_EQ("Air", aCharacter.obtainWeapon());
}

TEST(CharacterSelectionUITest, weaponAir) { // weapon w air
    Character aCharacter;
    CharacterSelectionUI characterUI(aCharacter);

    std::istringstream input("Air\nB\n"); // select Air, then B
    std::stringstream output;

    characterUI.askPosition(input, output); 
    characterUI.askWeapon(input, output);  

    EXPECT_TRUE(aCharacter.obtainisAir());
    EXPECT_EQ("B", aCharacter.obtainWeapon()); 
}

TEST(CharacterSelectionUITest, WrongGenderInput) { // supposed to fail but is not failing
    Character character;
    CharacterSelectionUI characterUI(character);

    std::stringstream input("X\n");
    std::stringstream output;

    characterUI.askGender(input, output);

    // EXPECT_EQ("M", character.obtainGender());
    EXPECT_STREQ("M", "S"); // testing
}



