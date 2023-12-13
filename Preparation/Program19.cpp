
// Author: Muhammad Asad

// Define a base class Shape with a virtual function calculateArea(). Derive classes Circle and Rectangle from Shape and override calculateArea() for each shape.
#include<iostream>
using namespace std;
class Shape{
	protected:
		virtual void calarea()=0;
};
class Circle: public Shape{
	public:
	void calarea(){
		cout<<"Enter radius of circle: ";float a;cin>>a;
		float area;
		area= (3.1415)*(a*a);
		cout<<"\nArea of circle: "<<area;
	}
};
class Rectangle: public Shape{
	public:
		void calarea(){
			cout<<"\nEnter length of rectangle: ";float a;cin>>a;
			cout<<"\nEnter width of rectangle: ";float b;cin>>b;
			float area;
			area= a*b;
			cout<<"\nArea of rectangle: "<<area;
		}
};
int main(){
	Circle c;Rectangle r;
	c.calarea();
	r.calarea();
return 0;
}

