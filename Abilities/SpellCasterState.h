#ifndef SPELL_CASTER_STATE_H
#define SPELL_CASTER_STATE_H


class SpellCasterState {
    protected:
        int mannaPoints;
        int mannaPointsLimit;
        double combatSpellRate;
        double supportSpellRate;

    public:
        SpellCasterState(int mannaPointsLimit, double combatSpellRate, double supportSpellRate);

        int getMannaPoints() const;
        int getMannaPointsLimit() const;
        double getCombatSpellRate() const;
        double getSupportSpellRate() const;
};


#endif //SPELL_CASTER_STATE_H
