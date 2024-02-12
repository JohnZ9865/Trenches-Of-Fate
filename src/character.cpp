#include "../header/character.h"
using namespace std;

Character::Character() : clout(0) {} // constructor

void Character::gainClout() {
    clout += 1;
}

void Character::loseClout() {
    clout -= 1;
}

void Character::askName() { // does not affect gameplay
    cout << "Enter the character's name: " << endl;
    cin >> name;
}

void Character::askGender() { // does not affect gameplay
    bool validInput = false;

    while (!validInput) { 
        cout << "Enter your character's gender. Type M for male and F for female." << endl;
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
        cout << "Enter your character's rank. 
        Type P for private and I for lieutenant. *will add more choices later*" << endl;
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
        cout << "Enter your character's position. 
        Type A for artillery, I for infantry, S for sniper, 'Air' for air support, or O for officer. 
        *will add more choices later*" << endl;
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
