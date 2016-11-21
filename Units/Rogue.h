#ifndef ROGUE_H
#define ROGUE_H

#include "Unit.h"

class Rogue : Unit {
    protected:
        void attack(Unit enemy);

    public:
        Rogue(const std::string &name="Rogue", int hp=110, int dmg=25, double physicalResistance=0.4, double magicalResistance=0.2);
};


#endif //ARMY_ROGUE_H
