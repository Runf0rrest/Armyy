#include "Solider.h"

Solider::Solider(const std::string &name, int hp, int dmg, double physicalResistance, double magicalResistance) : Unit(
        name, hp, dmg, physicalResistance, magicalResistance) {}
