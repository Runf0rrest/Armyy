#include "FireBall.h"

FireBall::FireBall() {
    Spell::isCombat = true;
    Spell::actionPoints = 20;
    Spell::mannaRequired = 10;
    Spell::spellId = Spells::FIREBALL;
}
