#ifndef ZOO_H
#define ZOO_H

#include <string>
#include <vector>
#include "Animal.h"
using namespace std;

class Zoo {
private:
    string name;
    vector<Animal*> animals; 
    static const int MAX_CAPACITY = 1524; 

public:

    Zoo();
    Zoo(const string& name);
    Zoo(const Zoo& other);

    void setName(const string& name);
    string getName() const;


    void listAnimals() const;
    void addAnimal(Animal* animal);
    int searchAnimalByName(const string& name) const;
    void removeAnimalByName(const string& name);
    double averageAgeForType(const string& type) const;
};

#endif 
