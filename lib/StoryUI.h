#ifndef STORYUI_H
#define STORYUI_H

#include "Event.h"
class Game;

class StoryUI {
    private:
        Game& game;

    public:

        StoryUI(Game& associatedGame) : game(associatedGame) {};

        void displayCurrentEvent(std::ostream& output);

        int getUserInput(std::istream& input, std::ostream& output);


};
#endif