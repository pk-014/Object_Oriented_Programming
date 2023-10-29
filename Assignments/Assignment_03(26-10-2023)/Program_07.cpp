
// Author : Asad

//Constructor Inheritance: Create a base class Vehicle with attributes
//like speed and a derived class Car that inherits from Vehicle. 
//Implement constructors for both classes and display the speed of the car.

// Code starts here
#include<iostream>
using namespace std;
class Vehicle{
	public:
		int speed;
		Vehicle(int speed){
		this->speed=speed;
	    }
};
class Car:public Vehicle{
	public:
		string name;
		Car(string name,int speed):Vehicle(speed){	
		this->name=name;
		}
		void check_speed(){
			cout<<"\nSpeed of "<<name<<" is : "<<speed;
		}
};
int main(){
	Car ferrari("Ferrari",120);
	ferrari.check_speed();
return 0;
}

