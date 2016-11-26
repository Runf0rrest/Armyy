#ifndef SPELL_BOOK_H
#define SPELL_BOOK_H

#include <map>
#include "Spell.h"

class SpellBook {
    protected:
        std::map<std::string, Spell>* spells;

    public:
        SpellBook();
        ~SpellBook();
        SpellBook(const SpellBook copy);

        const Spell& getSpell(const std::string& spellName) const;
        void addSpell(Spell spell);
        const SpellBook& operator=(const SpellBook& other);
};


#endif //SPELL_BOOK_H
