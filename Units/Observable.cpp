#include "Observable.h"

Observable::Observable() {
    this->observers = new std::set<Observer*>();
}

Observable::~Observable() {
    delete this->observers;
}