#ifndef WIZARD_H
#define WIZARD_H

#include "SpellCaster.h"

class Wizard : SpellCaster {
    public:
        Wizard(const std::string &name="SpellCaster", int hp=70, int dmg=10, double physicalResistance=0.1,
               double magicalResistance=0.3, int mp=200, double combatSpellDamageRate=0.5, double supportSpellDamageRate=1.0);
};


#endif //WIZARD_H
