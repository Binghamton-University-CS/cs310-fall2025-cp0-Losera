#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>
using namespace std;

class Animal {
public:
    // Constructors
    Animal();
    Animal(string speciesName, float weight, bool dangerousness);
    Animal(string speciesName, unsigned int discoveryYear);

    // Display
    void display() const;

    // Getters (camelCase + snake_case aliases)
    string getName() const { return species; }
    string get_name() const { return getName(); }

    float getWeight() const { return weight; }
    float get_weight() const { return getWeight(); }

    bool isDangerous() const { return dangerousness; }
    bool is_dangerous() const { return isDangerous(); }

    unsigned int getYearDiscovered() const { return year_discovered; }

private:
    string species;
    float weight;
    bool dangerousness;
    unsigned int year_discovered = 0;
};

#endif

