#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal() : species(""), year_discovered(0) {
}

Animal::Animal(string speciesName, unsigned int discoveryYear) 
    : species(speciesName), year_discovered(discoveryYear) {
}

void Animal::display() const {
    cout << species << " [" << year_discovered << "]" << endl;
}

