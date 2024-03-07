#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "../lib/StoryUI.h"
#include "../lib/Game.h"

void StoryUI::displayCurrentEvent(std::ostream& output) {

    

    Event* currentEvent = game.storyline.getCurrentEvent();

    output << currentEvent->getText() << endl;

    vector<Event*> options = currentEvent->getOptions();

    if (!currentEvent->isEnding()) {
        output << "You can now do one of the following:"<< endl;
        for (int i=0; i < options.size(); i++) {
            output << "Press " << i << " to " << options[i]->getPromptText() <<endl;
        }
        return ;
    } else {
        output <<"For better or for worse, your story has come to an end" << endl;
        return ;
    }
}


int StoryUI::getUserInput(std::istream& input, std::ostream& output) {
    vector<Event*> ops = game.storyline.getCurrentEvent()->getOptions();

    int chosen;
    while (true) {
        input >> chosen;
        if (chosen >=0 && chosen < ops.size()) {
            return chosen;
        } else {
            output <<"That's not a valid input" << endl;
        }
    }

}