#include <iostream>
#include "Spell.h"

Spell::Spell(bool isCombat, int actionPoints, int mannaCost) {
    this->isCombat = isCombat;
    this->actionPoints = actionPoints;
    this->mannaCost = mannaCost;
}
int Spell::getActionPoints() const {
    return this->actionPoints;
}

int Spell::getMannaCost() const {
    return this->mannaCost;
}

void Spell::cast(Unit& target, double spellRate) const {
    int spellPoints = (int)(this->actionPoints * spellRate);

    try {
        if ( this->isCombat ) {
            target.takeMagicalDamage(spellPoints);
        } else {
            target.addHitPoints(spellPoints);
        }
    } catch (UnitIsDeadException) {
        std::cout << "Target is dead" << std::endl;
    }
}

