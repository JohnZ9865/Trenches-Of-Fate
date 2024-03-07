#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "../lib/SettingsUI.h"
#include "../lib/Game.h"

using namespace std;

void SettingsUI::run(std::istream&input, std::ostream& output) {
    int choice;
    while (true) {
        output << "Enter 1 for easy mode, 2 for hard mode" << endl;
        input >> choice;

        if (choice != 1 && choice != 2) {
            output << "Your choice was invalid" << endl;
        } else if (choice == 1) {
            game.difficulty = 0;
            break;
        } else {
            game.difficulty = 1;
            break;
        }
    }
}