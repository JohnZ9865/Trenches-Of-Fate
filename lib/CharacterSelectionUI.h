#ifndef CHARACTER_SELECTION_UI_H
#define CHARACTER_SELECTION_UI_H

#include <iostream>
#include <string>
using namespace std;

class Character;

class CharacterSelectionUI {
    public:
        CharacterSelectionUI(Character& thischar);
        void askName(istream& input, ostream& output);
        void askGender(istream& input, ostream& output);
        void askNationality(istream& input, ostream& output);
        void run(istream& input, ostream& output) {
            askName(input, output);
            askGender(input, output);
            askNationality(input, output);
        }
    private:
        Character* thischar;
        
};

#endif