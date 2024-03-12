#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
using namespace std;

class Character {
    public:
        Character(); // constructor

        // getters
        int getClout();
        string setName(const string& name_input);
        string setGender(const string& gender_input);
        string setNationality(const string& nationality_input);
        string setWeapon(const string& weapon_input);
        string setRank(const string& rank_input);
        string setPosition(const string& position_input);

        // getters but no parameter (use this as the main getter)
        string obtainName(); 
        string obtainGender();
        string obtainNationality();
        string obtainWeapon();
        string obtainRank();
        string obtainPosition();
    private:
        string name;
        string gender; 
        string nationality;
        string weapon;
        string rank;
        string position;
};

#endif