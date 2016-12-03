#ifndef UNIT_STATE_H
#define UNIT_STATE_H
#define VAMPIRISM_RATE 0.2

enum States{
    UNIT,
    VAMPIRE,
    WEREWOLF
};

class UnitState {
    private:
        int healthPoints;
        int healthPointsLimit;
        int damage;
        double magicalResistance;
        double physicalResistance;
        States stateType;

    public:
        UnitState(int healthPointsLimit, double magicalResistance, double physicalResistance, int damage, States stateType);

        int getHealthPoints() const;
        int getHealthPointsLimit() const;
        int getDamage() const;

        double getMagicalResistance() const;
        double getPhysicalResistance() const;
        States getStateType() const;

        void setStateType(States stateType);

        void convertToVampireState();
        void convertToWerewolfState();



        void takePhysicalDamage(int damage);
        void takeMagicalDamage(int damage);
        void addHealthPoints(int hp);

};

#endif //UNIT_STATE_H
