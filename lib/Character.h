#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
using namespace std;

class Character {
    public:
        Character(); // constructor
        void gainClout();
        void loseClout();

        // getters
        int getClout();
        string getName(const string& name_input);
        string getGender(const string& gender_input);
        string getNationality(const string& nationality_input);
        string getWeapon(const string& weapon_input);
        string getRank(const string& rank_input);
        string getPosition(const string& position_input);

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
        int clout;
};

#endif