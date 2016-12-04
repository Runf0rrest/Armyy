#ifndef ARMY_WARLOCK_H
#define ARMY_WARLOCK_H

#include "Wizard.h"

class Warlock : public Wizard {
    public:
        Warlock(const std::string &name="Wizzard", int hp=70, int dmg=10, double physicalResistance=0.1,
                double magicalResistance=0.3, int mp=200, double combatSpellDamageRate=0.5, double supportSpellDamageRate=1.0);

    void summonDemon();
};


#endif //ARMY_WARLOCK_H
