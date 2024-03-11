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
#include "Character.h"

#include <fstream>


using namespace std;

class Game {
    private:
        Character character;
        Graph storyline;
        int difficulty; //1 means hard, 0 means easy.

        void initializeStoryline(string storyfilelink);
        Event* helper(string inputstring);

    public:
        Game() : character(), storyline(), difficulty(0) {}
        
        void startGame();
    

    friend class StoryUI;
    friend class SettingsUI;
    friend class HomePageUI;
    friend class CharacterSelectionUI;
    friend class EndScreenUI;

};
#endif