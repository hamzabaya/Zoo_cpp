#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"
#include <string>
using namespace std;

class Bird : public Animal {
private:
    double wingspan;

public:
    Bird();

    Bird(const string& name, const string& color, const string& diet, const string& habitat,
            const string& sounds, bool isPet, int age, double weight, double height, double wingspan);

    Bird(const Bird& other);

    void setWingspan(double wingspan);
    double getWingspan() const;

    void printInfo() const override;
};

#endif 
