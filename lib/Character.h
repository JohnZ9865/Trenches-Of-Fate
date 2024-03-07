#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
using namespace std;

// struct Character {
//     public:
//         Character(); // constructor

//         //setters --- in the sense it prompt users for the info.
//         void gainClout();
//         void loseClout();
//         void askName(istream& input, ostream& output);
//         void askGender(istream& input, ostream& output);
//         void askNationality(istream& input, ostream& output);
//         void askWeapon(istream& input, ostream& output);
//         void askRank(istream& input, ostream& output);
//         void askPosition(istream& input, ostream& output);

//         // getters
//         int getClout();
//         string getName();
//         string getGender();
//         string getNationality();
//         string getWeapon();
//         string getRank();
//         string getPosition();
//     private:
//         string name;
//         string gender; 
//         string nationality;
//         string weapon;
//         string rank;
//         string position;
//         string air_support; // special 
//         int clout;
// };

struct Character {
    private:
        string name;
        string gender;
        string nationality;
        string weapon;
        string rank;
        string position;
    public:
        Character() : name("Joe"), gender("man"), nationality("Russian"), weapon("gun1"), rank("LT"), position("infantry") {}

};


#endif