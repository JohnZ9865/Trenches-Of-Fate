
#include "Event.h"
#include "Game.h"
#include "Graph.h"

class StoryUI {
    private:
        Game game;

    public:

        void displayCurrentEvent(std::ostream& output) {
            output << game.getCurrentEvent().getText() << endl;

            vector<Event*> options = game.getCurrentEvent().getOptions();

            if (!isending) {
                output << "You can now do one of the following:"<< endl;
                for (int i=0; i < options.size(); i++) {
                    output << "Press " << i << " to " << options[i].getPromptText() <<endl;
                }
                return 1;
            } else {
                output <<"For better or for worse, your story has come to an end" << endl;
                return 0;
            }
        }

        int getUserInput(std::istream& input, std::ostream& output) {
            if (res == 0) {
                return 0;
            }

            vector<Event*> ops = game.getCurrentEvent()->getOptions();

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




};