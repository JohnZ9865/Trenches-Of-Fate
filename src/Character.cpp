#include "../lib/Character.h"
#include <iostream>
#include <string>
using namespace std;

Character::Character() {} // constructor


string Character::setName(const string& name_input) {
    name = name_input;
    return name;
}

string Character::setGender(const string& gender_input) {
    gender = gender_input;
    return gender;
}

string Character::setNationality(const string& nationality_input) {
    nationality = nationality_input;
    return nationality;
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

string Character::setRank(const string& rank_input) {
    rank = rank_input;
    return rank;
}

string Character::obtainRank() {
    return rank;
}
