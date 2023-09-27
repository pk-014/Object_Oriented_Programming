
// Author : Asad
// Object Oriented Programming
// Write a C++ program that calculates the factorial of a given positive integer.



// Code starts here
#include<iostream>
using namespace std;

// Prototype Declaration
long double fact(unsigned int x);

int main(){
cout<<"\n\n\t\tObject Oriented Programming\n\t\tAssignment# 01: Write a C++ program that calculates the factorial of a given positive integer.\n";
unsigned int x;
cout<<"\n\tEnter your number: ";cin>>x;
cout<<"\n\tThe factorial of number is: "<<fact(x);

return 0;
}

// Function Defining
long double fact(unsigned int x){
		int y=1;
		for(int i=x;i>0;i--){
			y=y*i;
		}
		return y;
	}
