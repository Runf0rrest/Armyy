#ifndef HEALER_H
#define HEALER_H

#include "SpellCaster.h"
#import ""

class Healer : public SpellCaster {
    public:
        Healer(const std::string &name="SpellCaster", int hp=70, int dmg=10, double physicalResistance=0.1,
               double magicalResistance=0.3, int mp=200, double combatSpellDamageRate=1.0, double supportSpellDamageRate=1.0);


};


#endif //HEALER_H
