
// Author : Asad

// Code starts here
#include<iostream>
using namespace std;
// Base Class
class Shape{
	public:
	string name;
	void draw(){
		cout<<"The shape is: Unknown";
	}
	
};

// Derived Class
class Circle: public Shape{
	public:
	float rad,cir;
	void draw(){
		cout<<"The shape is: Circle";
	}
	void details(){
		cout<<endl<<"Radius of circle: "<<rad<<endl<<"Circumference of circle: "<<cir;
	}
	float area(int r){
		float a;
		a=(3.14159265)*(r*r);
		return a;
	}
};

// Derived Class 
class Triangle: public Shape{
	public:
	float hei,wid,hyp;
	void details(){
		cout<<"Height of Triangle: "<<hei<<endl<<"Width of Triangle: "<<wid<<endl<<"Hyp of Triangle: "<<hyp;
	}
	float area(float x, float y){
		float a;
		a=x*y;
		return a;
	}
};


// Main function
int main(){

// creating object
Circle c;
c.name="my circle";
c.rad=2.0;
c.cir=5.5;
cout<<"Area of circle is: "<<c.area(2.2);

// creating object
Triangle t;
t.hei=12;
t.wid=10;
t.hyp=13;
cout<<"\nArea of triangle is: "<<t.area(12.2,10.5);



return 0;
}

