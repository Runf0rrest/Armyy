#ifndef VAMPIRE_H
#define VAMPIRE_H


#include "Unit.h"

class Vampire : Unit {
    protected:
        double damageConversionRate = 0.2;
    public:
        Vampire(const std::string &name="Vampire", int hp=120, int dmg=35, double physicalResistance=0.3, double magicalResistance=0.05);

        void attack(Unit& enemy);
        void counterAttack(Unit& enemy);
};


#endif //ARMYTASK_VAMPIRE_H
