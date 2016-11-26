#include <iostream>
#include "Spell.h"

Spell::Spell(bool isCombat, int actionPoints, int mannaRequired, const std::string &spellName) {
    this->isCombat = isCombat;
    this->actionPoints = actionPoints;
    this->mannaRequired = mannaRequired;
    this->spellName = new std::string(spellName);
}
int Spell::getActionPoints() const {
    return this->actionPoints;
}

int Spell::getMannaRequired() const {
    return this->mannaRequired;
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

const std::string &Spell::getSpellName() const {
    return *this->spellName;
}

