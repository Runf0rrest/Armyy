#ifndef ARMY_ATTACK_H
#define ARMY_ATTACK_H

#include "../Units/Unit.h"

class Attack {
    public:
        Attack();

        void normalAttack(Unit target, int dmg);
        void vampireAttack();
        void werewolfAttack();
};


#endif //ARMY_ATTACK_H
