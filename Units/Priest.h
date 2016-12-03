#ifndef ARMY_PRIEST_H
#define ARMY_PRIEST_H

#include "Healer.h"

class Priest : public Healer {
    public:
        Priest(const std::string &name="SpellCaster", int hp=70, int dmg=10, double physicalResistance=0.1,
               double magicalResistance=0.3, int mp=200, double combatSpellDamageRate=0.5, double supportSpellDamageRate=1.0);
        void castSpell(SpellsId spellId, Unit& unit);
};


#endif //ARMY_PRIEST_H
