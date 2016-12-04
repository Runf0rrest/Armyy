#ifndef ARMY_WARLOCK_H
#define ARMY_WARLOCK_H

#include "Wizard.h"
#include "Demon.h"

class Warlock : public Wizard {
    private:
        void killSummons();

    public:
        Warlock(const std::string &name="Warlock", int hp=70, int dmg=10, double physicalResistance=0.1,
                double magicalResistance=0.3, int mp=200, double combatSpellDamageRate=0.5, double supportSpellDamageRate=1.0);

    Demon& summonDemon();

    virtual void takePhysicalDamage(int dmg);
    virtual void takeMagicalDamage(int dmg);

    virtual void handleEvent(Observable *observable);
};


#endif //ARMY_WARLOCK_H
