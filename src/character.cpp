#include "../lib/character.h"
#include <iostream>
#include <string>
using namespace std;

Character::Character() : clout(0) {} // constructor

// SETTERS

void Character::gainClout() {
    clout += 1;
}

void Character::loseClout() {
    clout -= 1;
}

void Character::askName() { // does not affect gameplay
    cout << "Enter the character's name: " << endl;
    string name_input;
    cin >> name_input;
    name = name_input;
}

void Character::askGender() { // does not affect gameplay
    bool validInput = false;

    while (!validInput) { 
        cout << "Enter your character's gender. Type M for male and F for female." << endl;
        string gender_input;
        cin >> gender_input;
        if (gender_input == "M") {
            gender = gender_input;
            validInput = true;
        }
        else if (gender_input == "F") {
            gender = gender_input;
            validInput = true;
        }
        else {
            cout << "This gender does not exist." << endl;
        }
    }
}

void Character::askNationality() { // does not affect gameplay
    bool validInput = false;

    while (!validInput) { 
        cout << "Enter your character's nationality. Type R for Russian and B for British. *will add more choices later*" << endl;
        string nationality_input;
        cin >> nationality_input;
        if (nationality_input == "R") {
            nationality = nationality_input;
            validInput = true;
        }
        else if (nationality_input == "B") {
            nationality = nationality_input;
            validInput = true;
        }
        else {
            cout << "This nationality does not exist." << endl;
        }
    }
}

void Character::askRank() {
    bool validInput = false;

    while (!validInput) { 
        cout << "Enter your character's rank. Type P for private and I for lieutenant. *will add more choices later*" << endl;
        string rank_input;
        cin >> rank_input;
        if (rank_input == "P") {
            rank = rank_input;
            validInput = true;
        }
        else if (rank_input == "I") {
            rank = rank_input;
            validInput = true;
        }
        else {
            cout << "This rank does not exist." << endl;
        }
    }
}

void Character::askPosition() { 
    bool validInput = false;

    while (!validInput) { 
        cout << "Enter your character's position. Type A for artillery, I for infantry, S for sniper, 'Air' for air support, or O for officer. *will add more choices later*" << endl;
        string position_input;
        cin >> position_input;
        if (position_input == "A") {
            position = position_input;
            validInput = true;
        }
        else if (position_input == "I") {
            position = position_input;
            validInput = true;
        }
        else if (position_input == "A") {
            position = position_input;
            validInput = true;
        }
        else if (position_input == "Air") {
            position = position_input;
            validInput = true;
        }
        else if (position_input == "O") {
            position = position_input;
            validInput = true;
        }
        else {
            cout << "This position does not exist." << endl;
        }
    }
}

void Character::askWeapon() {
    bool validInput = false;

    while (!validInput) { 
        cout << "Enter your character's weapon. Type S for sniper and A for artillery. *will add more choices later*" << endl;
        string weapon_input;
        cin >> weapon_input;
        if (weapon_input == "S") {
            weapon = weapon_input;
            validInput = true;
        }
        else if (weapon_input == "A") {
            weapon = weapon_input;
            validInput = true;
        }
        else {
            cout << "This weapon does not exist." << endl;
        }
    }
    if (rank == "P") {
        cout << "You are also given a rifle since you are a private" << endl;
    }
    if (position == "O") {
        cout << "You are also given a pistol since you are an officer" << endl;
    }
    else if (position == "Air") {
        bool validInput_2 = false;

        while (!validInput_2) { 
            cout << "Since your air support, type B for inaccurate big bombs and S for small accurate bombs" << endl;
            string air_support_input;
            cin >> air_support_input;
            if (air_support_input == "B") {
                air_support = air_support_input;
                validInput_2 = true;
            }
            else if (air_support_input == "S") {
                air_support = air_support_input;
                validInput_2 = true;
            }
            else {
                cout << "This type of air defense does not exist." << endl;
            }
        }
    }
}

// GETTERS

int Character::getClout() {
    return clout;
}

string Character::getName() {
    return name;
}

string Character::getGender() {
    return gender;
}

string Character::getNationality() {
    return nationality;
}

string Character::getWeapon() {
    return weapon;
}

string Character::getRank() {
    return rank;
}

string Character::getPosition() {
    return position;
}
