#include "AnimalsInZoo.h"
#include <iostream>
using namespace std;

 AnimalsInZoo::AnimalsInZoo() : numAnimals(0){
 }


 AnimalsInZoo::AnimalsInZoo(const Animal& animal) : numAnimals(1), animal(animal)
		 {
 }

 void AnimalsInZoo::display() const{
   cout << "Number of animals: " << numAnimals << endl;

   if (numAnimals > 0){
     animal.display();
   }
 }
 
 





