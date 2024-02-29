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



using namespace std;

class Game {
    private:
        Character character;
        Graph storyline;
        int difficulty; //1 means hard, 0 means easy.

        void initializeStoryline(string storyfilelink) {
            ...//read in a file here.
            
        }

    public:
        Game() : character(), storyline() {}
        
        void startGame() {
            //starts game, for loop for game runs here.
            
            HomePageSettingsUI homepage(*this); //.run, which handles display. Very small class with a single function, .run that handles io. Inside, will also create SettingsUI.
            homepage.run();

            CharacterSelectionUI charselect; //.run, which calls .askGender, .askWeapon, etc.
            charselect.run();

            StoryUI storyUI; //private variables: reference to character, reference to storyline.

            bool died;
            while true {
                storyUI.displayCurrentEvent(); //displays current Event.
                int choice = storyUI.getUserInput(); //get userinput.

                if (choice == 0) {
                    died=true;
                    break;
                }
                
                storyline.setCurrentEvent(storyline.getCurrentEvent().getOptions()[choice]);
            }
            

            EndScreenUI endscreen;
            endscreen.run();

        }

};
#endif