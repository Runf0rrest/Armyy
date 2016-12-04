#ifndef ARMY_OBSERVABLE_H
#define ARMY_OBSERVABLE_H

#include <set>
#include "Observer.h"

class Observer;

class Observable {
    protected:
        std::set<Observer*>* observers;

    public:
        Observable();
        virtual ~Observable();

        virtual void addObserver(Observer* observer) = 0;
        virtual void deleteObserver(Observer* observer) = 0;
        virtual void notifyObservers() = 0;
};


#endif //ARMY_OBSERVABLE_H
