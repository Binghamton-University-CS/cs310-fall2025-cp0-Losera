#include <iostream>
#include <stdlib.h>
#include "Animal.h"
#include "AnimalsInZoo.h"

using namespace std;

/*
class Animal {
   public:
      Animal(string speciesName, unsigned int discoveryYear) {
         species = speciesName;
         year_discovered = discoveryYear;
      }

      Animal() : species(""), year_discovered(0) {};

      void display() {
         cout << species << " [" << year_discovered << "]" << endl;
      }

   private:
      string species = "";
      unsigned int year_discovered = 0;
};*/

int main() {
	
   AnimalsInZoo zoo;
   zoo.display();

   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal animal3("Polar Bear", 1980);

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);
 
   animal3.display();
   animal2.display();
   animal1->display();
   
   zoo = AnimalsInZoo(animal3);
   zoo.display();

   delete animal1;
}
