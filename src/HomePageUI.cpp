#include "../lib/HomePageUI.h"

using namespace std;


void HomePageUI::run(std::istream&input, std::ostream& output) {     
    int choice;

    string userinput;
    SettingsUI settings(game);    

    while (true) {
        output << "=====================The Trenches of Fate========================="<<endl;
        output << "Press 1 to change difficulty"<<endl;
        output << "Press 2 to begin game" << endl;

        std::getline(input, userinput);

        if (userinput.length() != 1 || !std::isdigit(userinput[0])) {
            output << "Invalid input"<<endl;
            continue;
        }
        
        choice = std::stoi(userinput);
        
        if (choice == 2) {
            return ;
        } else if (choice == 1) {


            settings.run(input, output);

            
        } else {
            output << "invalid input"<<endl;
        }
    }
}
