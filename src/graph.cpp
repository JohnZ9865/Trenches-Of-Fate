#include "../lib/Graph.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

Graph::Graph(Event* inc) : root(inc), curr(inc) {}

string Graph::getCurrPlotPt() {
    return curr->getText();
}

int Graph::runCurrentEvent(std::istream& input, std::ostream& output) {
    int res = curr->runEvent(output);

    if (res == 0) {
        return 0;
    }

    const vector<Event*> ops = curr->getOptions();

    int chosen;
    while (true) {
        input >> chosen;
        if (chosen >=0 && chosen < ops.size()) {
            curr = ops[chosen];
            break;
        } else {
            output <<"That's not a valid input" << endl;
        }
    }

    return 1;
}
