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
        void askName();
        void askGender();
        void askNationality();
        void askWeapon();
        void askRank();
        void askPosition();
    private:
        string name;
        string gender; 
        string nationality;
        string weapon;
        string rank;
        string position;
        string air_support; // special 
        int clout;
};

#endif