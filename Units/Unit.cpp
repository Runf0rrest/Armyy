#include "Unit.h"

Unit::Unit(const std::string& name, int hp, int dmg, double physicalResistance, double magicalResistance) {
    this->name = new std::string(name);
    this->unitState = new UnitState(hp, magicalResistance, physicalResistance, dmg, UNIT);
    this->isUnitUndead = false;
    this->unitAttack = new Attack();
}

Unit::~Unit() {
    delete this->unitState;
    delete this->name;
}

void Unit::ensureIsAlive() {
    if ( this->unitState->getHealthPoints() == 0 ) {
        throw UnitIsDeadException();
    }
}

int Unit::getDamage() const {
    return this->unitState->getDamage();
}

int Unit::getHitPoints() const {
    return this->unitState->getHealthPoints();
}

int Unit::getHitPointsLimit() const {
    return this->unitState->getHealthPointsLimit();
}

const std::string& Unit::getName() const {
    return *(this->name);
}

void Unit::takePhysicalDamage(int dmg) {
    ensureIsAlive();

    unitState->takePhysicalDamage(dmg);

    if ( this->getHitPoints() == 0 ) {
        notifyObservers();
        this->observers->clear();
    }
}

void Unit::addHitPoints(int hp) {
    ensureIsAlive();

    this->unitState->addHealthPoints(hp);
}

void Unit::attack(Unit& enemy) {
    ensureIsAlive();

    this->unitAttack->attack(*this, this->getsStateType(), this->getDamage(), enemy);
}
void Unit::counterAttack(Unit& enemy) {
    ensureIsAlive();

    try {
    this->unitAttack->counterAttack(*this, this->getsStateType(), this->getDamage(), enemy);
    } catch (UnitIsDeadException) {
        throw TargetIsDeadException();
    }
}

void Unit::takeMagicalDamage(int dmg) {
    ensureIsAlive();

    this->unitState->takeMagicalDamage(dmg);

    if ( this->getHitPoints() == 0 ) {
        notifyObservers();
        this->observers->clear();
    }
}

void Unit::transformToVampire() {
    this->unitState->convertToVampireState();
    this->isUnitUndead = true;
}

void Unit::transformToWerewolf() {
    this->unitState->convertToWerewolfState();
}

States Unit::getsStateType() const {
    return this->unitState->getStateType();
}

bool Unit::isUndead() {
    return this->isUnitUndead;
}

void Unit::addObserver(Observer *observer) {
    this->observers->insert(observer);
}

void Unit::deleteObserver(Observer *observer) {
    this->observers->erase(observer);
}

void Unit::notifyObservers() {
    std::set<Observer*>::iterator iterator = observers->begin();

    for ( ; iterator != observers->end(); iterator++ ) {
        (*iterator)->handleEvent(this);
    }
}

void Unit::addObservable(Observable *observable) {
    this->observables->insert(observable);
}

void Unit::deleteObservable(Observable *observable) {
    this->observables->erase(observable);
}

void Unit::handleEvent(Observable *observable) {}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << unit.getName();
    out << ", Max HP = " << unit.getHitPointsLimit();
    out << ", Current HP = " << unit.getHitPoints();
    out << ", Damage = " << unit.getDamage();
    out << std::endl;

    return out;
}
