#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"
#include <string>
using namespace std;

class Mammal : public Animal {
private:
    string furColor;

public:

    Mammal();

    Mammal(const string& name, const string& color, const string& diet, const string& habitat,
            const string& sounds, bool isPet, int age, double weight, double height, const string& furColor);

    Mammal(const Mammal& other);

    void setFurColor(const string& furColor);
    string getFurColor() const;

    void printInfo() const override;
};

#endif 
