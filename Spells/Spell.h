#ifndef SPELL_H
#define SPELL_H


class Spell {
    protected:
        bool isCombat;
        int actionPoints;
        int mannaRequired;
        int spellId;

    public:
        Spell();

        int getActionPoints() const;
        int getMannaRequired() const;
        int getSpellID const;
};

enum Spells{
    FIREBALL
};

#endif //SPELL_H
