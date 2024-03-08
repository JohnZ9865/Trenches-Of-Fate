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
    // name = name_input;
    thischar->getName(name_input);
}

void CharacterSelectionUI::askGender(istream& input, ostream& output) { // does not affect gameplay
    bool validInput = false;

    while (!validInput) { 
        output << "Enter your character's gender. Type M for male and F for female." << endl;
        string gender_input;
        input >> gender_input;
        if (gender_input == "M") {
            // gender = gender_input;
            thischar->getGender(gender_input);
            validInput = true;
        }
        else if (gender_input == "F") {
            // gender = gender_input;
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
            // nationality = nationality_input;
            thischar->getNationality(nationality_input);
            validInput = true;
        }
        else if (nationality_input == "B") {
            // nationality = nationality_input;
            thischar->getNationality(nationality_input);
            validInput = true;
        }
        else {
            output << "This nationality does not exist." << endl;
        }
    }
}

void CharacterSelectionUI::askRank(istream& input, ostream& output) {
    bool validInput = false;

    while (!validInput) { 
        output << "Enter your character's rank. Type P for private and I for lieutenant. *will add more choices later*" << endl;
        string rank_input;
        input >> rank_input;
        if (rank_input == "P") {
            // rank = rank_input;
            thischar->getRank(rank_input);
            validInput = true;
        }
        else if (rank_input == "I") {
            // rank = rank_input;
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

    while (!validInput) { 
        output << "Enter your character's position. Type A for artillery, I for infantry, S for sniper, 'Air' for air support, or O for officer. *will add more choices later*" << endl;
        string position_input;
        input >> position_input;
        if (position_input == "A") {
            // position = position_input;
            thischar->getPosition(position_input);
            validInput = true;
        }
        else if (position_input == "I") {
            // position = position_input;
            thischar->getPosition(position_input);
            validInput = true;
        }
        else if (position_input == "S") {
            // position = position_input;
            thischar->getPosition(position_input);
            validInput = true;
        }
        else if (position_input == "Air") {
            // position = position_input;
            thischar->getPosition(position_input);
            validInput = true;
        }
        else if (position_input == "O") {
            // position = position_input;
            thischar->getPosition(position_input);
            validInput = true;
        }
        else {
            output << "This position does not exist." << endl;
        }
    }
}

void CharacterSelectionUI::askWeapon(istream& input, ostream& output) {
    bool validInput = false;

    while (!validInput) { 
        output << "Enter your character's weapon. Type S for sniper and A for artillery. *will add more choices later*" << endl;
        string weapon_input;
        input >> weapon_input;
        thischar->getisAir(false);
        if (weapon_input == "S") {
            // weapon = weapon_input;
            thischar->getWeapon(weapon_input, 0);
            validInput = true;
        }
        else if (weapon_input == "A") {
            // weapon = weapon_input;
            thischar->getWeapon(weapon_input, 0);
            validInput = true;
        }
        else {
            output << "This weapon does not exist." << endl;
        }
    }
    // not sure if "" in the parameter getRank works
    if (thischar->getRank("") == "P") { 
        output << "You are also given a rifle since you are a private" << endl;
    }
    if (thischar->getPosition("") == "O") {
        output << "You are also given a pistol since you are an officer" << endl;
    }
    else if (thischar->getPosition("") == "Air") {
        bool validInput_2 = false;
        thischar->getisAir(true);

        while (!validInput_2) { 
            output << "Since your air support, type B for inaccurate big bombs and S for small accurate bombs" << endl;
            string air_support_input;
            input >> air_support_input;
            if (air_support_input == "B") {
                // air_support = air_support_input;
                thischar->getWeapon(0, air_support_input);
                validInput_2 = true;
            }
            else if (air_support_input == "S") {
                // air_support = air_support_input;
                thischar->getWeapon(0, air_support_input);
                validInput_2 = true;
            }
            else {
                output << "This type of air defense does not exist." << endl;
            }
        }
    }
}