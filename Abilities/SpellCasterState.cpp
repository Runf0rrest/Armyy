#include "SpellCasterState.h"

SpellCasterState::SpellCasterState(int mannaPointsLimit, double combatSpellRate, double supportSpellRate) {
    this->mannaPoints = mannaPointsLimit;
    this->mannaPointsLimit = mannaPointsLimit;
    this->combatSpellRate = combatSpellRate;
    this->supportSpellRate = supportSpellRate;
}

int SpellCasterState::getMannaPoints() const {
    return this->mannaPoints;
}

int SpellCasterState::getMannaPointsLimit() const {
    return this->mannaPointsLimit;
}

double SpellCasterState::getCombatSpellRate() const {
    return this->combatSpellRate;
}

double SpellCasterState::getSupportSpellRate() const {
    return this->supportSpellRate;
}
