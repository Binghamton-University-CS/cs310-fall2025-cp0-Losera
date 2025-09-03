#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>
using namespace std;


class Animal {
   public:
	Animal();
	Animal(string speciesName, unsigned int discoveryYear);
	void display() const;

   private:
      string species;
      unsigned int year_discovered = 0;
};


#endif

