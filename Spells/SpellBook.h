#ifndef SPELL_BOOK_H
#define SPELL_BOOK_H

#include "Spell.h"

class SpellBook {
    protected:
        std::map<Spells, Spell>* spells;

    public:
        SpellBook();
        ~SpellBook();
        SpellBook(const SpellBook copy);

        const Spell& getSpell() const;
        void addSpell(Spell spell);
};


#endif //SPELL_BOOK_H
