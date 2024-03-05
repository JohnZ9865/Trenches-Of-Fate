#ifndef SETTINGSUI_H
#define settingsui_h

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class SettingsUI {
    private:
        Game& game;
    public:

        SettingsUI(Game& associatedGame) : game(associatedGame)  {}


        void run(std::istream&input, std::ostream& output);
};
#endif