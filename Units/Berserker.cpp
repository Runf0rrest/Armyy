//
// Created by Ilya on 21.11.2016.
//

#include "Berserker.h"

Berserker::Berserker(const std::string &name, int hp, int dmg, double physicalResistance, double magicalResistance)
        : Unit(name, hp, dmg, physicalResistance, magicalResistance) {}
