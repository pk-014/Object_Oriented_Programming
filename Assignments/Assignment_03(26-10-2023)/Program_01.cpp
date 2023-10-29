
// Author : Asad

//Basic Inheritance: Define a base class Shape with members to store the 
//dimensions of a shape and a derived class Circle that inherits from Shape. 
//Add a method to calculate the area of the circle.


// Code starts here
#include<iostream>
using namespace std;
class Shape{
	public:
		float radius;
};
class Circle: public Shape{
	public:
		void area(){
			float area;
			area=(3.14159265)*(radius*radius);
			cout<<"Area of the circle is: "<<area;
		}
};
int main(){
	Circle c;
	c.radius=2.86;
	c.area();
return 0;
}

