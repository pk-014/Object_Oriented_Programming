
// Author: Muhammad Asad

// Write a C++ class to model a basic geometric shape. Include subclasses for circle, rectangle and triangle, each with
// appropriate methods to calculate area and perimeter.
#include<iostream>
using namespace std;
class Shape{
	public:
		virtual void cal_area()=0;
		virtual void cal_peri()=0;
};
class Circle: public Shape{
	public:
		void cal_area(){
			float radius;
			cout<<"\nEnter radius of the circle: ";cin>>radius;
			float area;
			area=(3.14159265)*(radius*radius);
			cout<<"\nArea of circle is: "<<area;
		}	
		void cal_peri(){
			float radius;
			cout<<"\nEnter radius of the circle: ";cin>>radius;
			float peri;
			peri=(2)*(3.14159265)*(radius);
			cout<<"\nPerimeter of circle is: "<<peri;
		}
};
class Rectangle: public Shape{
	public:
		void cal_area(){
			float len,wid;
			cout<<"\nEnter length of the rectangle: ";cin>>len;
			cout<<"\nEnter width of the rectangle: ";cin>>wid;
			float area;
			area=len*wid;
			cout<<"\nArea of rectangle is: "<<area;
		}	
		void cal_peri(){
			float len,wid;
			cout<<"\nEnter length of the rectangle: ";cin>>len;
			cout<<"\nEnter width of the rectangle: ";cin>>wid;
			float peri;
			peri=2*(len+wid);
			cout<<"\nPerimeter of rectangle is: "<<peri;
		}
};
class Triangle: public Shape{
	public:
		void cal_area(){
			float s1,s2,s3;
			cout<<"\nEnter Side 1 of the triangle: ";cin>>s1;
			cout<<"\nEnter Side 2 of the triangle: ";cin>>s2;
			cout<<"\nEnter Side 3 of the triangle: ";cin>>s3;
			float area;
			area=(0.5)*(s1*s2);      // not correct 
			cout<<"\Area of triangle is: "<<area;
		}	
		void cal_peri(){
			float s1,s2,s3;
			cout<<"\nEnter Side 1 of the triangle: ";cin>>s1;
			cout<<"\nEnter Side 2 of the triangle: ";cin>>s2;
			cout<<"\nEnter Side 3 of the triangle: ";cin>>s3;
			float peri;
			peri=s1+s2+s3;
			cout<<"\Perimeter of triangle is: "<<peri;
		}
};
int main(){
	// code starts here
	Circle c1;
	c1.cal_area();
	c1.cal_peri();
	Rectangle r1;
	r1.cal_area();
	r1.cal_peri();
	Triangle t1;
	t1.cal_area();
	t1.cal_peri();
return 0;
}

