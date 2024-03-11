#ifndef HOMEPAGEUI_H
#define HOMEPAGEUI_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

#include "SettingsUI.h"
class Game;

using namespace std;
class HomePageUI {
    private:
        Game& game;

    public:
        HomePageUI(Game& associatedGame) : game(associatedGame)  {}

        void run(std::istream&input, std::ostream& output);
        
};


#endif
