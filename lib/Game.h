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
        vector<Event*> eventList;

        void initializeStoryline(string storyfilelink);
        void parser(string s, vector<string>& promptText, vector<string>& eventText, vector<vector<int>>& child);


    public:
        Game() : character(), storyline(), difficulty(0) {}
        
        void startGame();

        ~Game() {
            for (int i=0; i < eventList.size(); i++) {
                delete eventList[i];
            }
        }
    

    friend class StoryUI;
    friend class SettingsUI;
    friend class HomePageUI;
    friend class CharacterSelectionUI;
    friend class EndScreenUI;

};
#endif