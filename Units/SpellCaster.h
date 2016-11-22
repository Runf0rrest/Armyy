#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include "../Abilities/SpellCasterState.h"
#include "Unit.h"
#include "../Spells/Spell.h"

class SpellCaster : Unit {
    protected:
        SpellCasterState* spellCasterState;

    public:
    SpellCaster(const std::string &name="SpellCaster", int hp=70, int dmg=10, double physicalResistance=0.1,
        double magicalResistance=0.3, int mp=200, double combatSpellDamageRate=1.0, double supportSpellDamageRate=1.0);
    ~SpellCaster();

    virtual void castSpell(Spell spell, Unit target);
};


#endif SPELLCASTER_H
