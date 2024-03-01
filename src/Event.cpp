#include "../lib/Event.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

Event::Event(string ptext, string text1, bool isEndingEvent) : promptText(ptext), text(text1), options({}), isending(isEndingEvent) {
    // initializes text and options with no follow up events
}

void Event::addOption(string ptext, string etext, bool inc) { // inc checks if its the end of story
    Event* a = new Event(ptext, etext, inc);
    options.push_back(a);
}

string Event::getText() {
    return text;
}

string Event::getPromptText() {
    return promptText;
}

const vector<Event*>& Event::getOptions() {
    return options;
}

// int Event::runEvent(std::ostream& output) {
//     output << text << endl;

//     if (!isending) {
//         output << "You can now do one of the following:"<< endl;
//         for (int i=0; i < options.size(); i++) {
//             output << "Press " << i << " to " << options[i]->promptText <<endl;
//         }
//         return 1;
//     } else {
//         output <<"For better or for worse, your story has come to an end" << endl;
//         return 0;
//     }
// }
