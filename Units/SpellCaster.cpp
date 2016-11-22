#include "SpellCaster.h"

SpellCaster::SpellCaster(const std::string &name, int hp, int dmg, double physicalResistance, double magicalResistance,
    int mp, double combatSpellDamageRate, double supportSpellDamageRate)
    : Unit(name, hp, dmg, physicalResistance, magicalResistance) {
    this->spellCasterState = new SpellCasterState(mp, combatSpellDamageRate, supportSpellDamageRate);
}

void SpellCaster::castSpell(Spell spell, Unit target) {

}

SpellCaster::~SpellCaster() {
    delete this->spellCasterState;
}
