#include <typeinfo>
#include "Priest.h"
#include "../Abilities/NotEnoughMannaException.h"

Priest::Priest(const std::string &name, int hp, int dmg, double physicalResistance, double magicalResistance, int mp,
               double combatSpellDamageRate, double supportSpellDamageRate)
                : Healer(name, hp, dmg, physicalResistance,magicalResistance, mp, combatSpellDamageRate, supportSpellDamageRate) {}

void Priest::castSpell(SpellsId spellId, Unit& target) {
    const Spell& spell = Healer::spellBook->getSpell(spellId);
    int mannaCost = spell.getMannaCost();

    if ( this->spellCasterState->getMannaPoints() < mannaCost ) {
        throw NotEnoughMannaException();
    }

    if ( spell.isCombat ) {
        if ( target.isUndead() ) {
            spell.cast(target, this->spellCasterState->getCombatSpellRate() * 2.0);
        } else {
            spell.cast(target, this->spellCasterState->getCombatSpellRate());
        }
    } else {
        spell.cast(target, this->spellCasterState->getSupportSpellRate());
    }
    this->spellCasterState->decreaseMannaPoints(mannaCost);
}
