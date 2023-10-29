
// Author : Asad

//Create a base class Animal with a method makeSound(). 
//Derive two classes Dog and Cat from Animal and override 
//the makeSound() method to represent the sound each animal makes.

// Code starts here
#include<iostream>
using namespace std;
class Animal{
	public:
	void makesound(){
		cout<<"Animal is making sound\n";
	}
};
class Dog:public Animal{
	public:
	void makesound(){
		cout<<"Dog is making sound\n";
	}
}; 
class Cat:public Animal{
	public:
	void makesound(){
		cout<<"Cat is making sound\n";
	}
}; 
int main(){
	Animal a;
	a.makesound();
	Dog d;
	d.makesound();
	Cat c;
	c.makesound();

return 0;
}

