#include "Attack.h"

void Attack::normalAttack(Unit target, int dmg) {
    target.takePhysicalDamage(dmg);
}
