#ifndef ARMY_DEMON_H
#define ARMY_DEMON_H

#include "Solider.h"

class Demon : public Solider{
public:
    Demon(const std::string& name="Demon", int hp=150, int dmg=20, double physicalResistance=0.15, double magicalResistance=0.2);

    void die();
};


#endif //ARMY_DEMON_H
