#ifndef ARMY_OBSERVER_H
#define ARMY_OBSERVER_H

#include <set>
#include "Observable.h"

class Observable;

class Observer {
    protected:
        std::set<Observable*>* observables;
    public:
        Observer();
        virtual ~Observer();

        virtual void addObservable(Observable* observable) = 0;
        virtual void deleteObservable(Observable* observable) = 0;
        virtual void handleEvent(Observable* observable) = 0;
};


#endif //ARMY_OBSERVER_H
