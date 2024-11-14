#include "Mammal.h"
#include <iostream>
using namespace std;

Mammal::Mammal() : Animal(), furColor("Unknown") {}

Mammal::Mammal(const string& name, const string& color, const string& diet, const string& habitat,
                const string& sounds, bool isPet, int age, double weight, double height, const string& furColor)
    : Animal(name, color, diet, habitat, sounds, isPet, age, weight, height), furColor(furColor) {}

Mammal::Mammal(const Mammal& other) : Animal(other), furColor(other.furColor) {}

void Mammal::setFurColor(const string& furColor) { this->furColor = furColor; }
string Mammal::getFurColor() const { return furColor; }

void Mammal::printInfo() const {
    cout << "Animal of type Mammal:\n";
    Animal::printInfo();
    cout << "Fur Color: " << furColor << "\n";
}
