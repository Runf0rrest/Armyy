#ifndef ROGUE_H
#define ROGUE_H

#include "Unit.h"

class Rogue : Unit {
    public:
    Rogue(const std::string &name = "Rogue", int hp = 110, int dmg = 25, double physicalResistance = 0.4,
          double magicalResistance = 0.2);

    virtual void attack(Unit& target);
};


#endif //ARMY_ROGUE_H
