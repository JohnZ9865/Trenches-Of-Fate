#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>

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

    std::ifstream inputFile(storyfilelink);

    if (!inputFile) {
        cout << "Could not open the file!" << endl;
    }


    string str;
    vector<string> promptText;
    vector<string> eventText;
    vector<vector<int>> child;

    while (std::getline(inputFile, str)) {
        parser(str, promptText, eventText, child);
    }



    for (int i=0; i < promptText.size(); i++) {
        bool isEnding = false;
        if (child[i].size() == 0) isEnding = true;
        eventList.push_back(new Event(promptText[i], eventText[i], isEnding));

    }


    //link events together.
    for (int i=0; i < child.size(); i++) {
        
        for (int j =0; j < child[i].size(); j++) {
            eventList[i]->addOption(eventList[child[i][j]]);
        }
    }


    storyline.setRootEvent(eventList[0]);
    storyline.setCurrentEvent(eventList[0]);


    return ;
}

void Game::parser(string s, vector<string>& promptText, vector<string>& eventText, vector<vector<int>>& child) {
    //expects first event to be root event. 
    string curr ="";
    int currstatus = 0;

    vector<int> tmp = {};

    for (char e: s) {
        if (currstatus < 3) {
            if (e == ']') {
                continue;
            } else if (e == '[') {
                if (currstatus == 1) {
                    promptText.push_back(curr);
                    curr= "";
                } else if (currstatus == 2) {
                    eventText.push_back(curr);
                    curr= "";
                }
                currstatus+=1;
            } else {
                curr+=e;
            }
        } else {
            if (e == ' ' || e ==']') {
                continue;
            } else if (e == ',') {
                tmp.push_back(std::stoi(curr));
                curr = "";
            } else {
                curr += e;
            }
        }
    }
    
    if (curr != "") {
        tmp.push_back(std::stoi(curr));
    }
    
    child.push_back(tmp);
    
}

void Game::runThroughStoryLine(std::istream&input, std::ostream& output) {
    StoryUI storyUI(*this); //private variables: reference to character, reference to storyline.

    bool died;
    while (true) {
        storyUI.displayCurrentEvent(output); //displays current Event.

        if (storyline.getCurrentEvent()->isEnding() == true) {
            break;
        }

        int choice = storyUI.getUserInput(input, output); //get userinput.


        storyline.setCurrentEvent(storyline.getCurrentEvent()->getOptions()[choice]);

    }
}

void Game::startGame() {
    //starts game, for loop for game runs here.
    //valgrind command: g++ -g -O0 filename.cpp -o runfile
    //valgrind --leak-check=full ./testrun
    
    HomePageUI homepage(*this); //.run, which handles display. Very small class with a single function, .run that handles io. Inside, will also create SettingsUI.
    homepage.run(std::cin, std::cout);

    if (difficulty == 1) {
        initializeStoryline("storylineFiles/hard.txt");
    } else {
        initializeStoryline("storylineFiles/easy.txt");
    }

    
    CharacterSelectionUI charselect(ourCharacter); //.run, which calls .askGender, .askWeapon, etc.
    charselect.run(std::cin, std::cout);

    runThroughStoryLine(std::cin, std::cout);

    EndScreenUI endscreen;
    endscreen.run(std::cout);
}



