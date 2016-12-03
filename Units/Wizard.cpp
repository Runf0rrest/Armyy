#include "Wizard.h"

Wizard::Wizard(const std::string &name, int hp, int dmg, double physicalResistance, double magicalResistance, int mp,
               double combatSpellDamageRate, double supportSpellDamageRate)
        : SpellCaster(name, hp, dmg, physicalResistance, magicalResistance, mp, combatSpellDamageRate,
                      supportSpellDamageRate) {}
