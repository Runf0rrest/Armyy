#include "Vampire.h"

Vampire::Vampire(const std::string &name, int hp, int dmg, double physicalResistance, double magicalResistance)
        : Unit(name, hp, dmg, physicalResistance, magicalResistance) {
    this->unitState->setStateType(VAMPIRE);
}
