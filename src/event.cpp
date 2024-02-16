#include "../lib/Event.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

Event::Event(string ptext, string text1, bool isEndingEvent) : promptText(ptext), text(text1), options({}), isending(isEndingEvent) {
    // initializes text and options with no follow up events
}

void Event::addOption(string ptext, string etext, bool inc) {
    Event* a = new Event(ptext, etext, inc);
    options.push_back(a);
}

string Event::getText() const {
    return text;
}

const vector<Event*>& Event::getOptions() const {
    return options;
}

int Event::runEvent(std::ostream& output) {
    output << text << endl;

    if (!isending) {
        output << "You can now do one of the following:"<< endl;
        for (int i=0; i < options.size(); i++) {
            output << "Press " << i << " to " << options[i]->promptText <<endl;
        }
        return 1;
    } else {
        output <<"For better or for worse, your story has come to an end" << endl;
        return 0;
    }
}
