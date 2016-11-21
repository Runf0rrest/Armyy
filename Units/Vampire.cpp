#include "Vampire.h"

Vampire::Vampire(const std::string &name, int hp, int dmg, double physicalResistance, double magicalResistance)
        : Unit(name, hp, dmg, physicalResistance, magicalResistance) {}

void Vampire::attack(Unit &enemy) {
    int damageDealt = enemy.getHitPoints();
    int healingPoints = 0;

    Unit::attack(enemy);

    damageDealt -= enemy.getHitPoints();
    healingPoints = (int)(damageDealt * damageConversionRate);
    this->addHitPoints(healingPoints);
}

void Vampire::counterAttack(Unit &enemy) {
    int damageDealt = enemy.getHitPoints();
    int healingPoints = 0;

    Unit::counterAttack(enemy);

    damageDealt -= enemy.getHitPoints();
    healingPoints = (int)(damageDealt * damageConversionRate);
    this->addHitPoints(healingPoints);
}

