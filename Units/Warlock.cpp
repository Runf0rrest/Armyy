#include "Warlock.h"

Warlock::Warlock(const std::string &name, int hp, int dmg, double physicalResistance, double magicalResistance, int mp,
        double combatSpellDamageRate, double supportSpellDamageRate)
        : Wizard(name, hp, dmg, physicalResistance, magicalResistance, mp, combatSpellDamageRate, supportSpellDamageRate) {}
