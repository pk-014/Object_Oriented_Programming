
// Author: Muhammad Asad

// Write a C++ program to find Area of square, rectangle, circle and triangle using Function Overloading. 
#include<iostream>
using namespace std;
float area(float a);
float area(float a, float b);
float area(float a, float b, float c);
int main(){
cout<<"Enter radius of circle: ";float rad;cin>>rad;
cout<<"\nEnter length of rectangle: ";float len;cin>>len;
cout<<"\nEnter width of rectangle: ";float wid;cin>>wid;
cout<<"\nEnter height of triangle: ";float hei;cin>>hei;
cout<<"\nEnter base of triangle: ";float base;cin>>base;
cout<<"\nEnter hyp of triangle: ";float hyp;cin>>hyp;
cout<<"================";
cout<<"\nArea of circle: "<<area(rad);
cout<<"\nArea of rectangle: "<<area(len, wid);
cout<<"\nArea of triangle: "<<area(base, hei, hyp);
return 0;
}
float area(float a){
	float area;
	area= (3.1415)*(a*a);
	return area;
}
float area(float a, float b){
	float area;
	area= a*b;
	return area;
}
float area(float a, float b,float c){
	float area;
	area=(0.5)*(a*b);
	return area;
}


