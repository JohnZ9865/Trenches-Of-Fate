#include "../lib/Character.h"
#include <iostream>
#include <string>
using namespace std;

Character::Character() : clout(0) {} // constructor

void Character::gainClout() {
    clout += 1;
}

void Character::loseClout() {
    clout -= 1;
}

int Character::getClout() {
    return clout;
}

string Character::getName(const string& name_input) {
    name = name_input;
    return name;
}

string Character::getGender(const string& gender_input) {
    gender = gender_input;
    return gender;
}

string Character::getNationality(const string& nationality_input) {
    nationality = nationality_input;
    return nationality;
}

string Character::getWeapon(const string& weapon_input) {
    weapon = weapon_input;
    return weapon;
}

string Character::getRank(const string& rank_input) {
    rank = rank_input;
    return rank;
}

string Character::getPosition(const string& position_input) {
    position = position_input;
    return position;
}

// no parameter getters (obtain)

string Character::obtainName() {
    return name;
}

string Character::obtainGender() {
    return gender;
}

string Character::obtainNationality() {
    return nationality;
}

string Character::obtainWeapon() {
    return weapon;
}

string Character::obtainRank() {
    return rank;
}

string Character::obtainPosition() {
    return position;
}