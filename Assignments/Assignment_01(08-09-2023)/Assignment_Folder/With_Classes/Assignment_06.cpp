
// Author : Asad
// Object Oriented Programming
// Write a C++ program that converts temperature from Fahrenheit to Celsius.



// Code starts here
#include<iostream>
using namespace std;

// Defining Class
class Convertor{
	public:
	long double x;
	Convertor(){
		cout<<"\n\tEnter Temperature: ";cin>>x;
	}
	
	long double fah_to_cel(){
		long double temp=(x-32)*(5.0/9.0);
		return temp;
	}
};
int main(){
cout<<"\n\n\t\tObject Oriented Programming\n\t\tAssignment# 01: Write a C++ program that converts temperature from Fahrenheit to Celsius.";
// Creating Factorial Object
Convertor cnv;
cout<<"\n\tTemperature in Celcius is: "<<cnv.fah_to_cel();

return 0;
}

