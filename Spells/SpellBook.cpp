#include "SpellBook.h"

SpellBook::SpellBook() {
    this->spells = new std::map<std::string, Spell>();
}

SpellBook::~SpellBook() {
    delete this->spells;
}

SpellBook::SpellBook(const SpellBook copy) {
    delete this->spells;
    this->spells = new std::map<std::string, Spell>(*(copy.spells));
}

const Spell &SpellBook::getSpell(const std::string &spellName) const {
    return ;
}





