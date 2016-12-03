#include "SpellCaster.h"
#include "../Abilities/NotEnoughMannaException.h"

SpellCaster::SpellCaster(const std::string &name, int hp, int dmg, double physicalResistance, double magicalResistance,
    int mp, double combatSpellDamageRate, double supportSpellDamageRate)
    : Unit(name, hp, dmg, physicalResistance, magicalResistance) {
    this->spellCasterState = new SpellCasterState(mp, combatSpellDamageRate, supportSpellDamageRate);
}

void SpellCaster::castSpell(SpellsId spellId, Unit target) {
    const Spell& spell = this->spellBook->getSpell(spellId);
    int mannaCost = spell.getMannaCost();

    if ( this->spellCasterState->getMannaPoints() < mannaCost ) {
        throw NotEnoughMannaException();
    }

    if ( spell.isCombat ) {
        spell.cast(target, this->spellCasterState->getCombatSpellRate());
    } else {
        spell.cast(target, this->spellCasterState->getSupportSpellRate());
    }
    this->spellCasterState->decreaseMannaPoints(mannaCost);
}

SpellCaster::~SpellCaster() {
    delete this->spellCasterState;
    delete this->spellBook;
}