#ifndef SPELL_H
#define SPELL_H

#include "../Units/Unit.h"

class Spell {
    protected:
        bool isCombat;
        int actionPoints;
        int mannaCost;

    public:
        Spell(bool isCombat, int actionPoints, int mannaCost);

        void cast(Unit& target, double spellRate) const;

        int getActionPoints() const;
        int getMannaCost() const;
};

#endif //SPELL_H
