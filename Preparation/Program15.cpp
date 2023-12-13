
// Author: Muhammad Asad

//15.	Create a base class Animal with a method makeSound(). Derive two classes Dog and Cat from Animal and override 
// the makeSound() method to represent the sound each animal makes. Handle exception when access wrong function of makesound.
#include<iostream>
using namespace std;
class Animal{
	protected:
		virtual void makesound()=0;
};
class Dog: public Animal{
	public:
		void makesound(){
			cout<<"\nDog is makinig sound";
		}
};
class Cat: public Animal{
	public:
		void makesound(){
			cout<<"\nCat is makinig sound";
		}
};
int main(){
	try{
		Cat c;
		c.makesound()
	}
	catch(...){
		cout<<"Exception Found!!!";
	}

return 0;
}

