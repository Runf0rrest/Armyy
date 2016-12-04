#ifndef ARMY_NECROMANCER_H
#define ARMY_NECROMANCER_H

#include "Wizard.h"

class Necromancer : public Wizard {
    public:
        virtual void takePhysicalDamage(int dmg);
        virtual void takeMagicalDamage(int dmg);
        virtual void handleEvent(Observable *observable);

    virtual void attack(Unit &enemy);
};


#endif //ARMY_NECROMANCER_H
