#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include "../Abilities/UnitState.h"
#include "UnitExceptions.h"
#include "../Abilities/Transformable.h"

class UnitIsDead {};

class Unit : Transformable{
    protected:
        UnitState* unitState;
        std::string* name;

        void ensureIsAlive();

    public:
        Unit(const std::string& name, int hp, int dmg, double physicalResistance, double magicalResistance);
        virtual ~Unit();

        virtual int getDamage() const;
        virtual int getHitPoints() const;
        virtual int getHitPointsLimit() const;
        virtual const std::string& getName() const;

        virtual void takePhysicalDamage(int dmg);
        virtual void takeMagicalDamage(int dmg);
        virtual void addHitPoints(int hp);

        virtual void attack(Unit& enemy);
        virtual void counterAttack(Unit& enemy);

        virtual void transformToVampire();
        virtual void transformToWerewolf();
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif //UNIT_H
