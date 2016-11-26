#include <stdexcept>
#include "SpellBook.h"

SpellBook::SpellBook() {
    this->spells = new std::map<SpellsId, Spell>();
}

SpellBook::~SpellBook() {
    delete this->spells;
}

SpellBook::SpellBook(const SpellBook& copy) {
    delete this->spells;
    this->spells = new std::map<SpellsId, Spell>(*(copy.spells));
}

const Spell &SpellBook::getSpell(SpellsId spellId) const {
    return spells->at(spellId);
}

void SpellBook::addSpell(SpellsId spellId, Spell spell) {
    spells->insert(std::pair<SpellsId, Spell>(spellId, spell));
}

const SpellBook& SpellBook::operator=(const SpellBook &other) {
    delete this->spells;
    this->spells = new std::map<SpellsId, Spell>(*(other.spells));
}




