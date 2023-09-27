
// Author : Asad
// Object Oriented Programming
// Write a C++ program that converts temperature from Fahrenheit to Celsius.



// Code starts here
#include<iostream>
using namespace std;

// Prototype Declaration
long double fah_to_cel(float x);
int main(){
cout<<"\n\n\t\tObject Oriented Programming\n\t\tAssignment# 01: Write a C++ program that converts temperature from Fahrenheit to Celsius.";
cout<<"\nEnter Temperature: ";float temp;cin>>temp;
cout<<"\n\tTemperature in Celcius is: "<<fah_to_cel(temp);

return 0;
}

// Function Defining
long double fah_to_cel(float x){
		long double temp=(x-32)*(5.0/9.0);
		return temp;
	}
