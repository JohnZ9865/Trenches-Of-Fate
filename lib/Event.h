#ifndef EVENT_H
#define EVENT_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Event {
private:
    string promptText; //promptText: text shown to user when users are asked whether they want to pick this option.
    string text; //text actually displayed when they chose this action.
    vector<Event*> options;
    bool isending; //check if this is an ending event that ends the story.

public:
    Event(string ptext, string text1, bool isEndingEvent);

    void addOption(string ptext, string etext, bool inc);

    string getText();

    const vector<Event*>& getOptions();

    string getPromptText();

    bool isEnding() {
        return isending;
    }

    void addOption(Event* nxtEvent) {
        options.push_back(nxtEvent);
    }

    // int runEvent(std::ostream& output);
};

#endif
