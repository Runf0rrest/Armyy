#ifndef WIZARD_H
#define WIZARD_H

#include "SpellCaster.h"

class Wizard : public SpellCaster {
    public:
        Wizard(const std::string &name = "Wizard", int hp = 70, int dmg = 10, double physicalResistance = 0.1,
               double magicalResistance = 0.3, int mp = 200, double combatSpellDamageRate = 1,
               double supportSpellDamageRate = 0.5);

};


#endif //WIZARD_H
