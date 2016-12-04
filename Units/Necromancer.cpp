#include "Necromancer.h"

void Necromancer::takePhysicalDamage(int dmg) {
    Unit::takePhysicalDamage(dmg);

    if( this->getHitPoints() == 0 ) {
        std::set<Observer*>::iterator iterator = this->observers->begin();

        for ( ; iterator != observers->end(); iterator++ ) {
            (*iterator)->deleteObservable(this);
        }
    }
}

void Necromancer::takeMagicalDamage(int dmg) {
    Unit::takeMagicalDamage(dmg);

    if( this->getHitPoints() == 0 ) {
        std::set<Observer*>::iterator iterator = this->observers->begin();

        for ( ; iterator != observers->end(); iterator++ ) {
            (*iterator)->deleteObservable(this);
        }
    }
}

void Necromancer::handleEvent(Observable *observable) {
    double hitPointsToRecover = NECROMANCER_CONVERSION_RATE;
    Unit::handleEvent(observable);

    hitPointsToRecover *= ((Unit*)observable)->getHitPointsLimit();
    this->addHitPoints((int)hitPointsToRecover);
    this->observables->erase(observable);
}

void Necromancer::attack(Unit &enemy) {
    if ( enemy.getHitPoints() > 0 ) {
        enemy.addObserver(this);
        this->addObservable(&enemy);
    }

    Unit::attack(enemy);
}
