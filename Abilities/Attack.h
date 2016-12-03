#ifndef ARMY_ATTACK_H
#define ARMY_ATTACK_H

#include "../Units/Unit.h"
#include "UnitState.h"

class Unit;

class Attack {
    public:
        Attack();

        void attack(Unit& attacker, States attackerState, int damage, Unit& target);
        void counterAttack(Unit& attacker, States attackerState, int damage, Unit& target);

        void normalAttack(Unit& attacker, int damage, Unit& target);
        void vampireAttack(Unit& attacker, int damage, Unit& target);
        void werewolfAttack(Unit& attacker, int damage, Unit& target);

        void normalCounterAttack(Unit& attacker, int damage, Unit& target);
        void vampireCounterAttack(Unit& attacker, int damage, Unit& target);
        void werewolfCounterAttack(Unit& attacker, int damage, Unit& target);
};


#endif //ARMY_ATTACK_H
