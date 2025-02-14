#ifndef GRAPH_H
#define GRAPH_H

#include "Event.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Graph {
private:
    Event* curr;
    Event* root;

public:
    Graph(Event* inc);
    Graph();

    Event* getCurrentEvent();
    void setCurrentEvent(Event* newCurrEvent);
    void setRootEvent(Event* newRootEvent) {
        root = newRootEvent;
    }

    // int runCurrentEvent(std::istream& input, std::ostream& output);

    friend class Game;
};

#endif
