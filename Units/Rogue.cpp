#include "Rogue.h"

Rogue::Rogue(const std::string &name, int hp, int dmg, double physicalResistance, double magicalResistance)
        : Unit(name, hp, dmg, physicalResistance, magicalResistance) {}

void Rogue::attack(Unit& target) {
    Unit::ensureIsAlive();

    try {
        this->unitAttack->counterAttack(*this, this->getsStateType(), this->getDamage()*2, target);
    } catch (UnitIsDeadException) {
        throw TargetIsDeadException();
    }
}
