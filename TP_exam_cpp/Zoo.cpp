#include "Zoo.h"
#include <iostream>
#include <algorithm>
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"

using namespace std;


Zoo::Zoo() : name("the Zoo") {}

Zoo::Zoo(const string& name) : name(name) {}

Zoo::Zoo(const Zoo& other) : name(other.name) {
    for (const auto& animal : other.animals) {
        animals.push_back(animal); 
    }
}

void Zoo::setName(const string& name) {
    this->name = name;
}

string Zoo::getName() const {
    return name;
}

void Zoo::listAnimals() const {
    for (const auto& animal : animals) {
        animal->printInfo();
    }
}

int Zoo::searchAnimalByName(const string& name) const {
    int low = 0;
    int high = animals.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (animals[mid]->getName() == name) {
            return mid;
        } else if (animals[mid]->getName() < name) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

void Zoo::addAnimal(Animal* animal) {
    if (animals.size() >= MAX_CAPACITY) {
        cout << "Zoo is at maximum capacity!" << endl;
    }

    if (searchAnimalByName(animal->getName()) != -1) {
        cout << "An animal with the same name already exists in the Zoo." << endl;
    }

    auto pos = lower_bound(animals.begin(), animals.end(), animal,
                            [](const Animal* a, const Animal* b) {
                                return a->getName() < b->getName();
                            });
    animals.insert(pos, animal);
}


void Zoo::removeAnimalByName(const string& name) {
    int index = searchAnimalByName(name);
    if (index == -1) {
        cout << "Animal not found in the Zoo." << endl;
        return;
    }
    delete animals[index]; 
    animals.erase(animals.begin() + index);
}

double Zoo::averageAgeForType(const string& type) const {
    int totalAge = 0;
    int count = 0;

    for (const auto& animal : animals) {
        if ((type == "Mammal" && dynamic_cast<Mammal*>(animal)) ||
            (type == "Bird" && dynamic_cast<Bird*>(animal)) ||
            (type == "Reptile" && dynamic_cast<Reptile*>(animal))) {
            totalAge += animal->getAge();
            count++;
        }
    }

    if (count == 0) {
        return 0.0; 
    }
    return static_cast<double>(totalAge) / count;
}
