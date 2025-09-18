#include "AnimalsInZoo.h"
#include <iostream>
using namespace std;

AnimalsInZoo::AnimalsInZoo(){
	capacity = 1;
	count = 0;
	animals = new Animal[capacity];


}

AnimalsInZoo::AnimalsInZoo(unsigned int initial_capacity){
	if(initial_capacity == 0){
		capacity = 1;
	} else{
		capacity = initial_capacity;
	}

	count = 0;

	animals = new Animal[capacity];

}

//Destructor 
AnimalsInZoo::~AnimalsInZoo(){
  delete[] animals;
  animals = nullptr;

}

//function implementations

bool AnimalsInZoo::store(const Animal &another_animal){
	if(count == capacity){
		makeSpace(0);
	}
	animals[count] = another_animal;
	cout << "Animal" << animals[count].getName() << "added to spot" << count << " of the contained array. " << endl;
       return true;	

}

bool AnimalsInZoo::remove(const string& animal_name){
	for(unsigned int i = 0; i < count; ++i){
	  if(animals[i].getName() == animal_name) { 
	  	animals[i] = animals[count - 1];
		count --;
		return true;
	  }
	
	
	}
	cout << "Animal " << animal_name << " not found. " << endl;
       return false;       

}

Animal AnimalsInZoo::find(const string& animal_name){
	for(unsigned int i = 0; i < count; ++i){
		if(animals[i].getName() == animal_name){
		  return animals[i];
		
		}
	}
	return Animal();
}


void AnimalsInZoo::readSizes(unsigned int &out_count, unsigned int &out_capacity) const {
	out_count = count;
	out_capacity = capacity;
}


void AnimalsInZoo::show() const{
	for(unsigned int i =  0; i < count; ++i){
		cout << i << ": " << animals[i].getName() << ", " << animals[i].getWeight() << " lbs";
		if (animals[i].isDangerous()){
			cout << " be careful!";
		}
		cout << endl;
	
	}

}

//make space dyanmic array
//
unsigned int AnimalsInZoo::makeSpace(unsigned int how_many){
	unsigned int old_capacity = capacity;
	if(how_many == 0){
		capacity += how_many;
	
	}
	else{
		capacity *= 2;
	
	}

	Animal* new_array = new Animal[capacity];
	for (unsigned int i = 0; i < count; ++i){
		new_array[i] = animals[i];
	
	}

	delete[] animals;
	animals = new_array;

	return capacity - old_capacity;


}



 
void AnimalsInZoo::display() const {
    cout << "Number of animals: " << count << endl;
    for (unsigned int i = 0; i < count; i++) {
        animals[i].display();
    }
}

 





