#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H


#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;

class AnimalsInZoo {
  private:
	  Animal* animals;
	  unsigned int capacity;
	  unsigned int count;
  
  public:
	AnimalsInZoo();
	AnimalsInZoo(unsigned int initial_capacity);

	bool store(const Animal& another_animal);
	bool remove(const string& animal_name);
	Animal find(const string& animal_name);

	void readSizes(unsigned int &count, unsigned int &capacity) const;
	void show() const;
	void display() const;

	unsigned int makeSpace(unsigned int how_many);
	~AnimalsInZoo();


};

#endif
