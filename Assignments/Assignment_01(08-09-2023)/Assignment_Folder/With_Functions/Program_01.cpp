// Author : Asad
// Object Oriented Programming 
// Write a C++ program to find the sum of two numbers entered by the user.


// Code starts here
#include<iostream>
#include<iomanip>
using namespace std;

// Prototype Declaration
long double sum(int num1,int num2);

// Main Function
int main(){
cout<<"\n\n\t\tObject Oriented Programming\n\t\tAssignment# 01: Write a C++ program to find the sum of two numbers entered by the user.\n";
int num1,num2;
cout<<"\n\tEnter First Number: ";cin>>num1;
cout<<"\n\tEnter First Number: ";cin>>num2;
cout<<"\n\tThe sum of these two numbers is: "<<sum(num1,num2);
return 0;
}

// Function Deffining
long double sum(int num1,int num2){
		return(num1+num2);
	}
