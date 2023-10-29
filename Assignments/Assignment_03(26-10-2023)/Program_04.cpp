
// Author : Asad

//Virtual Functions: Define a base class Shape with a virtual function 
//calculateArea(). Derive classes Circle and Rectangle from Shape and 
//override calculateArea() for each shape.

// Code starts here
	#include<iostream>
	using namespace std;
	class Shape{
		public:
		virtual void calculateArea(){
			cout<<"\nCalculating Area....";
		}
	};
	class Circle:public Shape{
		public:
		virtual void calculateArea(){
			cout<<"\nEnter radius of circle: ";float rad;cin>>rad;
			float area=(3.14159265)*(rad*rad);
			cout<<"\nArea of circle is: "<<area;
		}
	};
	class Rectangle: public Shape{
		public:
		virtual void calculateArea(){
			cout<<"\nEnter Length of circle: ";float len;cin>>len;
			cout<<"\nEnter Width of circle: ";float wid;cin>>wid;
			float area=len*wid;
			cout<<"\nArea of circle is: "<<area;
		}
	};
	int main(){
	Circle c;
	Shape* circle_shape=&c;
	circle_shape->calculateArea();
	Rectangle r;
	Shape* rectangle_shape=&r;
	rectangle_shape->calculateArea();
	return 0;
	}

