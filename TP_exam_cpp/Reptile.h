#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"
#include <string>
using namespace std;

class Reptile : public Animal {
private:
    string scalePattern;

public:

    Reptile();

    Reptile(const string& name, const string& color, const string& diet, const string& habitat,
            const string& sounds, bool isPet, int age, double weight, double height, const string& scalePattern);

    Reptile(const Reptile& other);

    void setScalePattern(const string& scalePattern);
    string getScalePattern() const;

    void printInfo() const override;
};

#endif 
