#ifndef SETTINGSUI_H
#define SETTINGSUI_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

class Game;

using namespace std;

class SettingsUI {
    private:
        Game& game;
    public:

        SettingsUI(Game& associatedGame) : game(associatedGame)  {}


        void run(std::istream&input, std::ostream& output);
};
#endif