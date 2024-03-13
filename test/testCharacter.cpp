#include "gtest/gtest.h"
#include "../lib/Character.h"
#include "../lib/CharacterSelectionUI.h"
#include <string>

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
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

TEST (CharacterTest, gender1) {
    Character aCharacter;
    CharacterSelectionUI characterUI(aCharacter);

    std::istringstream input("J");
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

TEST (CharacterTest, nationality1) {
    Character aCharacter;
    CharacterSelectionUI characterUI(aCharacter);

    std::istringstream input("Nwewhjk wbaubewae");
    std::ostringstream output;

    characterUI.askNationality(input, output);

    EXPECT_EQ("B", aCharacter.obtainNationality());
}

TEST (CharacterTest, rank) {
    Character aCharacter;
    CharacterSelectionUI characterUI(aCharacter);

    std::istringstream input("P");
    std::ostringstream output;

    characterUI.askRank(input, output);

    EXPECT_EQ("P", aCharacter.obtainRank());
}

TEST (CharacterTest, rank1) {
    Character aCharacter;
    CharacterSelectionUI characterUI(aCharacter);

    std::istringstream input("asdjha kdas");
    std::ostringstream output;

    characterUI.askRank(input, output);

    EXPECT_EQ("I", aCharacter.obtainRank());
}


TEST(CharacterSelectionUITest, WrongGenderInput) { 
    Character character;
    CharacterSelectionUI characterUI(character);

    std::stringstream input("X");
    std::stringstream output;

    characterUI.askGender(input, output);


    EXPECT_EQ("M", character.obtainGender());
}



