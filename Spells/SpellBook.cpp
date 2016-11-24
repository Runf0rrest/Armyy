#include "SpellBook.h"

SpellBook::SpellBook() {
    this->spells = new std::map<Spells, Spell>();
}