#include "Bird.h"
#include <iostream>
using namespace std;

Bird::Bird() : Animal(), wingspan(0.0) {}

Bird::Bird(const string& name, const string& color, const string& diet, const string& habitat,
            const string& sounds, bool isPet, int age, double weight, double height, double wingspan)
    : Animal(name, color, diet, habitat, sounds, isPet, age, weight, height), wingspan(wingspan) {}

Bird::Bird(const Bird& other) : Animal(other), wingspan(other.wingspan) {}

void Bird::setWingspan(double wingspan) { this->wingspan = wingspan; }
double Bird::getWingspan() const { return wingspan; }

void Bird::printInfo() const {
    cout << "Animal of type Bird:\n";
    Animal::printInfo();
    cout << "Wingspan: " << wingspan << " meters\n";
}
