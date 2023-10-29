
// Author : Asad

//Function Overriding: Create a base class Shape with a method draw(). Derive classes 
//Circle, Square, and Triangle from Shape and override draw() to display the shape name.


// Code starts here
#include<iostream>
using namespace std;
class Shape{
	public:
		 void draw(){
			cout<<"\nDrawing";
		}
};
class Circle:public Shape{
	public:
		void draw(){
			cout<<"\nCircle draw.";
		}
};
class Square:public Shape{
	public:
		void draw(){
			cout<<"\nSquare draw.";
		}
};
class Triangle:public Shape{
	public:
		void draw(){
			cout<<"\nTriangle draw.";
		}
};
int main(){
Circle c; c.draw();
Square s; s.draw();
Triangle t; t.draw();
return 0;
}

