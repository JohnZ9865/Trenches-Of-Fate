#include "../lib/CharacterSelectionUI.h"
#include "../lib/Character.h"
#include <iostream>
#include <string>
using namespace std;

// CharacterSelectionUI::CharacterSelectionUI(Character& thischar) : thischar(&thischar) {}

void CharacterSelectionUI::askName(istream& input, ostream& output) { // does not affect gameplay
    output << "Enter the character's name: " << endl;
    string name_input;
    std::getline(input, name_input);
    thischar->setName(name_input);
}

void CharacterSelectionUI::askGender(istream& input, ostream& output) { // does not affect gameplay
    string gender_input;
    output << "Enter your character's gender. Enter any gender." << endl;

    std::getline(input, gender_input);
    thischar->setGender(gender_input);
    
    // if (gender_input == "M") {
    //     thischar->setGender(gender_input);
    // }
    // else if (gender_input == "F") {
    //     thischar->setGender(gender_input);
    // } else {
    //     // Removed this option.
    //     // output << "This gender does not exist. You're now set to male." << endl;
    //     // gender_input = "M";
    //     thischar->setGender(gender_input);
    // }
}

void CharacterSelectionUI::askRank(istream& input, ostream& output) { // does not affect gameplay
    output << "Enter your character's rank. Type P for private and I for lieutenant." << endl;
    string rank_input;
    std::getline(input, rank_input);

    if (rank_input == "P") {
        thischar->setRank(rank_input);
    }
    else if (rank_input == "I") {
        thischar->setRank(rank_input);
    }
    else {
        output << "This rank does not exist. You're now a lieutenant." << endl;
        rank_input = "I";
        thischar->setRank(rank_input);
    }
}

void CharacterSelectionUI::askNationality(istream& input, ostream& output) { // does not affect gameplay
    output << "Enter your character's nationality. Type R for Russian and B for British." << endl;

    string nationality_input;
    std::getline(input, nationality_input);

    if (nationality_input == "R") {
        thischar->setNationality(nationality_input);
    }
    else if (nationality_input == "B") {
        thischar->setNationality(nationality_input);
    }
    else {
        output << "This nationality does not exist. You're now British." << endl;
        nationality_input = "B";
        thischar->setNationality(nationality_input);
    }
    
}


