#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "Event.h"
#include "Graph.h"

#include "HomePageUI.h"
#include "SettingsUI.h"
#include "StoryUI.h"
#include "EndScreenUI.h"
#include "CharacterSelectionUI.h"

#include <fstream>


using namespace std;

class Game {
    private:
        Character character;
        Graph storyline;
        int difficulty; //1 means hard, 0 means easy.

        void initializeStoryline(string storyfilelink);

    public:
        Game() : character(), storyline() {}
        
        void startGame();

};
#endif