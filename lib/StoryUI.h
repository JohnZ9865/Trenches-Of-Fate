#ifndef STORYUI_H
#define STORYUI_H

#include "Event.h"
#include "Game.h"
#include "Graph.h"

class StoryUI {
    private:
        Game& game;

    public:

        void displayCurrentEvent(std::ostream& output);

        int getUserInput(std::istream& input, std::ostream& output);



};
#endif