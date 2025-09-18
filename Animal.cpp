#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal() : species(""), weight(0.0f), dangerousness(false), year_discovered(0) { }

Animal::Animal(string speciesName, float weight, bool dangerousness)
    : species(speciesName), weight(weight), dangerousness(dangerousness), year_discovered(0) { }

Animal::Animal(string speciesName, unsigned int discoveryYear)
    : species(speciesName), weight(0.0f), dangerousness(false), year_discovered(discoveryYear) { }

void Animal::display() const {
    cout << species << " [" << year_discovered << "] " << weight << " lbs";
    if (dangerousness) {
        cout << " be careful!";
    }
    cout << endl;
}

