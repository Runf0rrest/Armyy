#include "UnitState.h"

UnitState::UnitState(int healthPointsLimit, double magicalResistance, double physicalResistance, int damage, States stateType)
        : healthPointsLimit(healthPointsLimit), magicalResistance(magicalResistance),
          physicalResistance(physicalResistance), damage(damage), stateType(stateType) {}

int UnitState::getHealthPoints() const {
    return this->healthPoints;
}

int UnitState::getHealthPointsLimit() const {
    return this->healthPointsLimit;
}

void UnitState::takeMagicalDamage(int damage) {
    int scaledDamage = damage * (int)(1 - this->magicalResistance);

    if ( scaledDamage > this->healthPoints ) {
        this->healthPoints = 0;

        return;
    }

    this->healthPoints -= scaledDamage;
}

void UnitState::takePhysicalDamage(int damage) {
    int scaledDamage = damage * (int)(1 - this->physicalResistance);

    if ( scaledDamage > this->healthPoints ) {
        this->healthPoints = 0;

        return;
    }

    this->healthPoints -= scaledDamage;
}

double UnitState::getPhysicalResistance() const {
    return this->physicalResistance;
}

double UnitState::getMagicalResistance() const {
    return this->magicalResistance;
}

int UnitState::getDamage() const {
    return this->damage;
}

void UnitState::addHealthPoints(int hp) {
    if ( this->healthPoints + hp >= this->healthPointsLimit ) {
        this->healthPoints = this->healthPointsLimit;

        return;
    }

    this->healthPoints += hp;
}

States UnitState::getStateType() const {
    return this->stateType;
}


void UnitState::convertToVampireState() {
    if ( this->stateType == VAMPIRE) {
        return;
    }
    this->stateType = VAMPIRE;
}

void UnitState::convertToWerewolfState() {
    if ( this->stateType == WEREWOLF ) {
        return;
    }

    this->healthPoints *= 1.5;
    this->healthPointsLimit *= 1.5;
    this->damage *= 1.5;
    this->magicalResistance = -0.2;
    this->stateType = WEREWOLF;
}

void UnitState::setStateType(States stateType) {
    this->stateType = stateType;
}

void UnitState::setHitPoints(int hp) {
    this->healthPoints = hp;
}



