#ifndef SPELL_H
#define SPELL_H

#include "../Units/Unit.h"

class Spell {
    protected:
        bool isCombat;
        int actionPoints;
        int mannaRequired;
        std::string* spellName;

    public:
        Spell(bool isCombat, int actionPoints, int mannaRequired, const std::string& spellName);

        void cast(Unit& target, double spellRate) const;

        int getActionPoints() const;
        int getMannaRequired() const;
        const std::string& getSpellName() const;
};

enum Spells{
    FIREBALL
};

#endif //SPELL_H
