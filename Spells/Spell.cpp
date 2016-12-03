#include "Spell.h"

Spell::Spell(bool isCombat, int actionPoints, int mannaCost) {
    this->isSpellCombat = isCombat;
    this->actionPoints = actionPoints;
    this->mannaCost = mannaCost;
}
int Spell::getActionPoints() const {
    return this->actionPoints;
}

int Spell::getMannaCost() const {
    return this->mannaCost;
}

bool Spell::isCombat() const {
    return this->isSpellCombat;
}