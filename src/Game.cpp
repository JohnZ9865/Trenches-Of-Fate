#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

void Game::initializeStoryline(string storyfilelink) {
    return ; 
}

void Game::startGame() {
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