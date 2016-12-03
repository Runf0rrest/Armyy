#ifndef VAMPIRE_H
#define VAMPIRE_H


#include "Unit.h"

class Vampire : Unit {
    public:
        Vampire(const std::string &name="Vampire", int hp=120, int dmg=35, double physicalResistance=0.3, double magicalResistance=0.05);
};

#endif //VAMPIRE_H
