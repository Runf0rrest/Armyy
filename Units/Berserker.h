#ifndef BERSERKER_H
#define BERSERKER_H

#include "Unit.h"

class Berserker : Unit{
public:
    Berserker(const std::string &name="Berserker", int hp=150, int dmg=30,
              double physicalResistance=0.3, double magicalResistance=1);
};


#endif //BERSERKER_H
