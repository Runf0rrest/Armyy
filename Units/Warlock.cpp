#include "Warlock.h"

Warlock::Warlock(const std::string &name, int hp, int dmg, double physicalResistance, double magicalResistance, int mp,
        double combatSpellDamageRate, double supportSpellDamageRate)
        : Wizard(name, hp, dmg, physicalResistance, magicalResistance, mp, combatSpellDamageRate, supportSpellDamageRate) {}

Demon &Warlock::summonDemon() {
    Demon* demon = new Demon();

    this->addObservable(demon);
    demon->addObserver(this);

    return *demon;
}

void Warlock::takePhysicalDamage(int dmg) {
    Unit::takePhysicalDamage(dmg);
    if( this->getHitPoints() == 0 ) {
        killSummons();
    }
}

void Warlock::takeMagicalDamage(int dmg) {
    Unit::takeMagicalDamage(dmg);
    if( this->getHitPoints() == 0 ) {
        killSummons();
    }
}

void Warlock::handleEvent(Observable *observable) {
    if ( this->getDamage() == 0 ) {
        return;
    }
    this->observables->erase(observable);
}

void Warlock::killSummons() {
    std::set<Observer *>::iterator iterator = this->observers->begin();

    for (; iterator != this->observers->end(); iterator++) {
        ((Demon*)*iterator)->die();
    }
}

