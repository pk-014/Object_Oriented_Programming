// Author : Asad
// Object Oriented Programming 
// Write a C++ program to find the sum of two numbers entered by the user.


// Code starts here
#include<iostream>
#include<iomanip>
using namespace std;

// Defining Class
class Calculator{
	public:
		long double num1,num2;
	Calculator(){
		cout<<"\n\tEnter First Number: ";cin>>num1;
		cout<<"\n\tEnter First Number: ";cin>>num2;
	}
	long double sum(){
		return(num1+num2);
	}
};


// Main Function
int main(){
cout<<"\n\n\t\tObject Oriented Programming\n\t\tAssignment# 01: Write a C++ program to find the sum of two numbers entered by the user.\n";
// Creating calculator object
Calculator my_cal;
cout<<"\n\tThe sum of these two numbers is: "<<my_cal.sum();
return 0;
}

