#ifndef SPELL_BOOK_H
#define SPELL_BOOK_H

#include <map>
#include "Spell.h"
#include "Spells.h"

class SpellBook {
    protected:
        std::map<SpellsId, Spell>* spells;

    public:
        SpellBook();
        ~SpellBook();
        SpellBook(const SpellBook& copy);

        const Spell& getSpell(SpellsId spellId) const;
        void addSpell(SpellsId spellId, Spell spell);

        const SpellBook& operator=(const SpellBook& other);
};


#endif //SPELL_BOOK_H
