#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
using namespace std;

struct Character {
    public:
        Character(); // constructor

        //setters --- in the sense it prompt users for the info.
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