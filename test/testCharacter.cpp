#include "gtest/gtest.h"
#include "../lib/Character.h"
#include "../lib/CharacterSelectionUI.h"
#include <string>

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

TEST (CharacterTest, name) {
    Character aCharacter;
    CharacterSelectionUI characterUI(aCharacter);

    std::istringstream input("Bob");
    std::ostringstream output;

    characterUI.askName(input, output);

    EXPECT_EQ("Bob", aCharacter.obtainName());
}

TEST (CharacterTest, gender) {
    Character aCharacter;
    CharacterSelectionUI characterUI(aCharacter);

    std::istringstream input("M");
    std::ostringstream output;

    characterUI.askGender(input, output);

    EXPECT_EQ("M", aCharacter.obtainGender());
}

TEST (CharacterTest, nationality) {
    Character aCharacter;
    CharacterSelectionUI characterUI(aCharacter);

    std::istringstream input("R");
    std::ostringstream output;

    characterUI.askNationality(input, output);

    EXPECT_EQ("R", aCharacter.obtainNationality());
}

TEST (CharacterTest, rank) {
    Character aCharacter;
    CharacterSelectionUI characterUI(aCharacter);

    std::istringstream input("P");
    std::ostringstream output;

    characterUI.askRank(input, output);

    EXPECT_EQ("P", aCharacter.obtainRank());
}

TEST (CharacterTest, position) {
    Character aCharacter;
    CharacterSelectionUI characterUI(aCharacter);

    std::istringstream input("A");
    std::ostringstream output;

    characterUI.askPosition(input, output);

    EXPECT_EQ("A", aCharacter.obtainPosition());
}

TEST(characterTests, weapon) { // weapon
    Character aCharacter;
    CharacterSelectionUI characterUI(aCharacter);

    std::istringstream input("S");
    std::ostringstream output;

    characterUI.askPosition(input, output);

    EXPECT_EQ("S", aCharacter.obtainPosition());
    EXPECT_EQ("S", aCharacter.obtainWeapon());
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



