#include <iostream>
#include <string>
#include <vector>
#include <sstream>

#include "../lib/Game.h"

using namespace std;


// class Game {
//     private:
//         Character character;
//         Graph storyline;
//         int difficulty; //1 means hard, 0 means easy.

//         void initializeStoryline(string storyfilelink);

//     public:
//         Game() : character(), storyline() {}
        
//         void startGame();
// };

void Game::initializeStoryline(string storyfilelink) {

    Event* stub = new Event("none", "You're in front of enemy", false);
    storyline.setCurrentEvent(stub);
    storyline.setRootEvent(stub);

    Event* choice1 = new Event("shoot them", "kills enemy, you live", true);
    Event* choice2 = new Event("freeze", "you freeze and you die", true);
    stub->addOption(choice1);
    stub->addOption(choice2);


    return ;
}

void Game::helper(string inputstring) {
    string s = inputstring;
    
} 

void Game::startGame() {
    //starts game, for loop for game runs here.
    
    HomePageUI homepage(*this); //.run, which handles display. Very small class with a single function, .run that handles io. Inside, will also create SettingsUI.
    homepage.run(std::cin, std::cout);

    cout << "place1" <<endl;

    if (difficulty == 1) {
        initializeStoryline("easylink");
    } else {
        initializeStoryline("hardlink");
    }

    /*
    CharacterSelectionUI charselect; //.run, which calls .askGender, .askWeapon, etc.
    charselect.run();
    */

    cout << "place2" <<endl;

    StoryUI storyUI(*this); //private variables: reference to character, reference to storyline.

    

    bool died;
    while (true) {
        storyUI.displayCurrentEvent(std::cout); //displays current Event.

        if (storyline.getCurrentEvent()->isEnding() == true) {
            break;
        }

        int choice = storyUI.getUserInput(std::cin, std::cout); //get userinput.

        
        storyline.setCurrentEvent(storyline.getCurrentEvent()->getOptions()[choice]);

    }
    

    EndScreenUI endscreen;
    endscreen.run(std::cout);

}