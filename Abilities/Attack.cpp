#include <cstdlib>
#include "Attack.h"

Attack::Attack() {}

void Attack::attack(Unit& attacker, States attackerState, int damage, Unit& target) {
    switch (attackerState) {
        case HUMAN : normalAttack(attacker, damage, target);
            break;
        case VAMPIRE : vampireAttack(attacker, damage, target);
            break;
        case WEREWOLF : werewolfAttack(attacker, damage, target);
    }
}

void Attack::counterAttack(Unit &attacker, States attackerState, int damage, Unit &target) {
    switch (attackerState) {
        case HUMAN : normalCounterAttack(attacker, damage, target);
            break;
        case VAMPIRE : vampireCounterAttack(attacker, damage, target);
            break;
        case WEREWOLF : werewolfCounterAttack(attacker, damage, target);
    }
}

void Attack::normalAttack(Unit &attacker, int damage, Unit &target) {
    normalCounterAttack(attacker, damage, target);
    target.counterAttack(attacker);
}

void Attack::vampireAttack(Unit &attacker, int damage, Unit &target) {
    vampireCounterAttack(attacker, damage*2, target);

    target.counterAttack(attacker);
}

void Attack::werewolfAttack(Unit &attacker, int damage, Unit &target) {
    werewolfCounterAttack(attacker, damage*2, target);

    target.counterAttack(attacker);
}

void Attack::normalCounterAttack(Unit& attacker, int damage, Unit &target) {
    damage /= 2;
    target.takePhysicalDamage(damage);
}

void Attack::vampireCounterAttack(Unit& attacker, int damage, Unit &target) {
    int damageToHealth = target.getHitPoints();

    damage /= 2;
    target.takePhysicalDamage(damage);
    damageToHealth -= target.getHitPoints();
    damageToHealth *= VAMPIRISM_RATE;
    attacker.addHitPoints(damageToHealth);

    if ( rand() % 10 == 0 ) {
        target.transformToVampire();
    }
}

void Attack::werewolfCounterAttack(Unit& attacker, int damage, Unit &target) {
    damage /= 2;
    target.takePhysicalDamage(damage);
    if ( rand() % 10 == 0 ) {
        target.transformToWerewolf();
    }
}



