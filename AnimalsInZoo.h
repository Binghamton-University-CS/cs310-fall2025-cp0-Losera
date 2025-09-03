#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H


#include "Animal.h"
#include <iostream>

using namespace std;

class AnimalsInZoo {
  private:
	int numAnimals;
	Animal animal;
  public:
	AnimalsInZoo();
	AnimalsInZoo(const Animal& animal);

	void display() const;





};

#endif
