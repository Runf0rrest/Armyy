#include <iostream>
#include "Spells/SpellBook.h"
#include "Spells/FireBall.h"

int main() {
    SpellBook* spellBook = new SpellBook();

    spellBook->addSpell(FIREBALL, FireBall());

    std::cout << &(spellBook->getSpell(FIREBALL)) << std::endl;

    return 0;
}