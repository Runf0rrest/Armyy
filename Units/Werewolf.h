#ifndef WEREWOLF_H
#define WEREWOLF_H

#include "Unit.h"

class Werewolf : Unit {
    public:
        Werewolf(const std::string& name, int hp, int dmg, double physicalResistance, double magicalResistance);
};


#endif //WEREWOLF_H
