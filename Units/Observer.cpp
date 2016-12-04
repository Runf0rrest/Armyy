#include "Observer.h"

Observer::Observer() {
    this->observables = new std::set<Observable*>();
}

Observer::~Observer() {
    delete this->observables;
}