#include "Rogue.h"

Rogue::Rogue(const std::string &name, int hp, int dmg, double physicalResistance, double magicalResistance)
        : Unit(name, hp, dmg, physicalResistance, magicalResistance) {}

void Rogue::attack(Unit enemy) {
    ensureIsAlive();

    enemy.takePhysicalDamage(this->getDamage());
}
