
// Author : Asad

//Polymorphism: Define a base class Animal with a virtual function makeSound(). 
//Derive classes Dog, Cat, and Cow from Animal and implement makeSound() to display the sound each animal makes.

// Code starts here
#include<iostream>
using namespace std;
class Animal{
	public:
		virtual void makeSound(){
			cout<<"\nAnimal is making sound.";
		}
};
class Dog:public Animal{
	public:
		void makeSound(){
			cout<<"\nDog is making sound";
		}
};
class Cat:public Animal{
	public:
		void makeSound(){
			cout<<"\nCat is making sound";
		}
};
class Cow:public Animal{
	public:
		void makeSound(){
			cout<<"\nCow is making sound";
		}
};
int main(){
Dog spike; spike.makeSound();
Cat tom; tom.makeSound();
Cow delphy; delphy.makeSound();
return 0;
}

