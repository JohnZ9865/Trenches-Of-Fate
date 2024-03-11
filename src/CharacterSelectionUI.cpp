#include "../lib/CharacterSelectionUI.h"
#include "../lib/Character.h"
#include <iostream>
#include <string>
using namespace std;

CharacterSelectionUI::CharacterSelectionUI(Character& thischar) : thischar(&thischar) {}

void CharacterSelectionUI::askName(istream& input, ostream& output) { // does not affect gameplay
    output << "Enter the character's name: " << endl;
    string name_input;
    input >> name_input;
    thischar->getName(name_input);
}

void CharacterSelectionUI::askGender(istream& input, ostream& output) { // does not affect gameplay
    bool validInput = false;

    while (!validInput) { 
        output << "Enter your character's gender. Type M for male and F for female." << endl;
        string gender_input;
        input >> gender_input;
        if (gender_input == "M") {
            thischar->getGender(gender_input);
            validInput = true;
        }
        else if (gender_input == "F") {
            thischar->getGender(gender_input);
            validInput = true;
        }
        else {
            output << "This gender does not exist." << endl;
        }
    }
}

void CharacterSelectionUI::askNationality(istream& input, ostream& output) { // does not affect gameplay
    bool validInput = false;

    while (!validInput) { 
        output << "Enter your character's nationality. Type R for Russian and B for British. *will add more choices later*" << endl;
        string nationality_input;
        input >> nationality_input;
        if (nationality_input == "R") {
            thischar->getNationality(nationality_input);
            validInput = true;
        }
        else if (nationality_input == "B") {
            thischar->getNationality(nationality_input);
            validInput = true;
        }
        else {
            output << "This nationality does not exist." << endl;
        }
    }
}

void CharacterSelectionUI::askRank(istream& input, ostream& output) { // does not affect gameplay
    bool validInput = false;

    while (!validInput) { 
        output << "Enter your character's rank. Type P for private and I for lieutenant. *will add more choices later*" << endl;
        string rank_input;
        input >> rank_input;
        if (rank_input == "P") {
            thischar->getRank(rank_input);
            validInput = true;
        }
        else if (rank_input == "I") {
            thischar->getRank(rank_input);
            validInput = true;
        }
        else {
            output << "This rank does not exist." << endl;
        }
    }
}

void CharacterSelectionUI::askPosition(istream& input, ostream& output) { 
    bool validInput = false;

    while (!validInput) { // fix this
        output << "Enter your character's position. Type A for artillery, I for infantry, or S for sniper" << endl;
        string position_input;
        input >> position_input;
        if (position_input == "A") {
            thischar->getPosition(position_input);
            validInput = true;
            askWeapon(input, output, position_input);
        }
        else if (position_input == "I") {
            thischar->getPosition(position_input);
            validInput = true;
            askWeapon(input, output, position_input);
        }
        else if (position_input == "S") {
            thischar->getPosition(position_input);
            validInput = true;
            askWeapon(input, output, position_input);
        }
        else {
            output << "This position does not exist." << endl;
        }
    }
}

void CharacterSelectionUI::askWeapon(istream& input, ostream& output, string aPosition) {
    string weapon_input;

    if (aPosition == "S") {
        weapon_input = aPosition;
        thischar->getWeapon(weapon_input);
        output << "Since you are a siper, you are given a sniper. " << endl;
    }
    else if (aPosition == "A") {
        weapon_input = aPosition;
        thischar->getWeapon(weapon_input);
        output << "Since you are an artillerist, you are given a rocket artillery. " << endl;
    }
    else if (aPosition == "I") {
        weapon_input = aPosition;
        thischar->getWeapon(weapon_input);
        output << "Since you are an infrantry, you are given a missile. " << endl;
    }
    else {
        output << "What? You don't have a rank. We cannot give you a weapon. " << endl;
    }
}