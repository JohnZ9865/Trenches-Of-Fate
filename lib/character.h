#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
using namespace std;

class Character {
    public:
        Character(); // constructor

        // setters
        void gainClout();
        void loseClout();
        void askName();
        void askGender();
        void askNationality();
        void askWeapon();
        void askRank();
        void askPosition();

        // getters
        int getClout();
        string getName();
        string getGender();
        string getNationality();
        string getWeapon();
        string getRank();
        string getPosition();
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