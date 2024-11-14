#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal {
protected:
    string name;
    string color;
    string diet;
    string habitat;
    string sounds;
    bool isPet;
    int age;
    double weight;
    double height;

public:

    Animal();

    Animal(const string& name, const string& color, const string& diet,
        const string& habitat, const string& sounds, bool isPet,
        int age, double weight, double height);

    Animal(const Animal& other);


    void setName(const string& name);
    string getName() const;

    void setColor(const string& color);
    string getColor() const;

    void setDiet(const string& diet);
    string getDiet() const;

    void setHabitat(const string& habitat);
    string getHabitat() const;

    void setSounds(const string& sounds);
    string getSounds() const;

    void setIsPet(bool isPet);
    bool getIsPet() const;

    void setAge(int age);
    int getAge() const;

    void setWeight(double weight);
    double getWeight() const;

    void setHeight(double height);
    double getHeight() const;


    void make_sound() const;
    virtual void printInfo() const;
};

#endif 
