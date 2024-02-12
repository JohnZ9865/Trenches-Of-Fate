// this file is to test the character functions
#include "../header/character.h"

int main() {
    Character myCharacter;

    myCharacter.askName();
    myCharacter.askGender();
    myCharacter.askNationality();
    myCharacter.askWeapon();
    myCharacter.askRank();
    myCharacter.askPosition();

    cout << "Character Details:" << endl;
    cout << myCharacter.getName() << endl;
    cout << myCharacter.getGender() << endl;
    cout << myCharacter.getNationality() << endl;
    cout << myCharacter.getWeapon() << endl;
    cout << myCharacter.getRank() << endl;
    cout << myCharacter.getPosition() << endl;

    myCharacter.gainClout();
    myCharacter.gainClout();
    myCharacter.gainClout();
    cout << "Current Clout: " << myCharacter.getClout() << endl;

    myCharacter.loseClout();
    myCharacter.loseClout();
    cout << "Current Clout: " << myCharacter.getClout() << endl;

    return 0;
}