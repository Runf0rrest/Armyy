#ifndef SOLIDER_H
#define SOLIDER_H

#include "Unit.h"


class Solider : Unit {
    public:
        Solider(const std::string& name="Solider", int hp=100, int dmg=15, double physicalResistance=0.15, double magicalResistance=0.2);
};


#endif //SOLIDER_H
