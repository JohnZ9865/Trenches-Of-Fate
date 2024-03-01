#include "../lib/Graph.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "../lib/Event.h"

using namespace std;

Graph::Graph() : root(nullptr), curr(nullptr) {}

Graph::Graph(Event* inc) : root(inc), curr(inc) {}

Event* Graph::getCurrentEvent() {
    return curr;
}

void Graph::setCurrentEvent(Event* newCurrEvent) {
    curr = newCurrEvent; // currEvent is the node
}

// int Graph::runCurrentEvent(std::istream& input, std::ostream& output) {
//     int res = curr->runEvent(output); //move all of runEvent's code here??? Is that allowed?

//     if (res == 0) {
//         return 0;
//     }

//     const vector<Event*> ops = curr->getOptions();

//     int chosen;
//     while (true) {
//         input >> chosen;
//         if (chosen >=0 && chosen < ops.size()) {
//             curr = ops[chosen];
//             break;
//         } else {
//             output <<"That's not a valid input" << endl;
//         }
//     }

//     return 1;
// }
