#include "Reptile.h"
#include <iostream>
using namespace std;

Reptile::Reptile() : Animal(), scalePattern("Unknown") {}

Reptile::Reptile(const string& name, const string& color, const string& diet, const string& habitat,
                    const string& sounds, bool isPet, int age, double weight, double height, const string& scalePattern)
    : Animal(name, color, diet, habitat, sounds, isPet, age, weight, height), scalePattern(scalePattern) {}

Reptile::Reptile(const Reptile& other) : Animal(other), scalePattern(other.scalePattern) {}

void Reptile::setScalePattern(const string& scalePattern) { this->scalePattern = scalePattern; }
string Reptile::getScalePattern() const { return scalePattern; }

void Reptile::printInfo() const {
    cout << "Animal of type Reptile:\n";
    Animal::printInfo();
    cout << "Scale Pattern: " << scalePattern << "\n";
}
