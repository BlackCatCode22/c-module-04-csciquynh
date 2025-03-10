#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;

class Animal {
    private:
        string name; // name is a property of Animal
        string species; // species is a property of Animal
        int age; // age is a property of Animal

    public: 
        string getName(){ // getter returns the original type
            return this->name;
        } 

        string getSpecies(){ // getter returns the original type
            return this->species;
        } 

        int getAge(){ // getter returns the original type
            return this->age;
        } 

        void setName(){ // setter returns void
            this->name = name;
        } 
        void setSpecies(){ // setter returns void
            this->species = species;
        } 

        void setAge(){ // setter returns void
            this->age = age;
        } 

        Animal(string name, string species, int age) { // constructor that gets called on construction
            this->name = name;
            this->species = species;
            this->age = age;
        } 
};

#endif