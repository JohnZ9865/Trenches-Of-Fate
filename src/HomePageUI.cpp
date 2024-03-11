#include "../lib/HomePageUI.h"

using namespace std;


void HomePageUI::run(std::istream&input, std::ostream& output) {     
    int choice;

    SettingsUI settings(game);    

    while (true) {
        output << "=====================The Trenches of Fate========================="<<endl;
        output << "Press 1 to change difficulty"<<endl;
        output << "Press 2 to begin game" << endl;

        input >> choice;
        if (choice == 2) {
            return ;
        } else if (choice == 1) {
            settings.run(std::cin, std::cout);
        }
    }
}
