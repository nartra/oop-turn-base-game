#ifndef PROJECT_FIELD_H
#define PROJECT_FIELD_H

#include <iostream>
#include "config.h"
#include "character.h"

using namespace std;

class Unit;

class Field {
protected:
    int round = 1;
    Unit *units[NUMBER_OF_PLAYERS][CHARACTER_PER_LINE];
public:

    void setUnit(int player, int position, Unit *character);

    Unit *getUnit(int player, int position);

    int getRound();

    void enterRound();

    void endRound();

    int getPlayer();

    string getInfo();

    int getOwnerOf(Unit *unit);
};

#endif //PROJECT_FIELD_H
