#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal() 
        : name("Unknown"), color("Unknown"), diet("Unknown"), habitat("Unknown"), 
        sounds("Unknown"), isPet(false), age(0), weight(0.0), height(0.0) {}

Animal::Animal(const string& name, const string& color, const string& diet,
        const string& habitat, const string& sounds, bool isPet,
        int age, double weight, double height)
        : name(name), color(color), diet(diet), habitat(habitat), sounds(sounds),
        isPet(isPet), age(age), weight(weight), height(height) {}

Animal::Animal(const Animal& other) 
    : name(other.name), color(other.color), diet(other.diet), habitat(other.habitat),
        sounds(other.sounds), isPet(other.isPet), age(other.age),
        weight(other.weight), height(other.height) {}


void Animal::setName(const string& name) { this->name = name; }
string Animal::getName() const { return name; }

void Animal::setColor(const string& color) { this->color = color; }
string Animal::getColor() const { return color; }

void Animal::setDiet(const string& diet) { this->diet = diet; }
string Animal::getDiet() const { return diet; }

void Animal::setHabitat(const string& habitat) { this->habitat = habitat; }
string Animal::getHabitat() const { return habitat; }

void Animal::setSounds(const string& sounds) { this->sounds = sounds; }
string Animal::getSounds() const { return sounds; }

void Animal::setIsPet(bool isPet) { this->isPet = isPet; }
bool Animal::getIsPet() const { return isPet; }

void Animal::setAge(int age) { this->age = age; }
int Animal::getAge() const { return age; }

void Animal::setWeight(double weight) { this->weight = weight; }
double Animal::getWeight() const { return weight; }

void Animal::setHeight(double height) { this->height = height; }
double Animal::getHeight() const { return height; }

void Animal::make_sound() const {
    cout << "The animal makes a sound: " << sounds << endl;
}

void Animal::printInfo() const {
    //cout << "Animal of unknown type:\n";
    cout << "Name: " << name << "\n";
    cout << "Color: " << color << "\n";
    cout << "Diet: " << diet << "\n";
    cout << "Habitat: " << habitat << "\n";
    cout << "Age: " << age << "'s years old\n";
    if (isPet) {
        cout << "This animal is a pet\n";
    } else {
        cout << "This animal is not a pet\n";
    }
    cout << "Weight: " << weight << " kg\n";
    cout << "Height: " << height << " cm\n";
}
