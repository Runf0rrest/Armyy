#ifndef SPELL_H
#define SPELL_H

#include "../Units/Unit.h"

class Spell {
    protected:
        bool isCombat;
        int actionPoints;
        int mannaRequired;

    public:
        Spell(bool isCombat=true, int actionPoints=10, int mannaRequired=10);

        void cast(Unit& target, double spellRate) const;

        int getActionPoints() const;
        int getMannaRequired() const;
};

#endif //SPELL_H
