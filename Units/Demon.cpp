#include "Demon.h"

Demon::Demon(const std::string &name, int hp, int dmg, double physicalResistance, double magicalResistance) :
        Solider(name, hp, dmg, physicalResistance, magicalResistance) {
}

void Demon::die() {
    this->unitState->setHitPoints(0);
}
