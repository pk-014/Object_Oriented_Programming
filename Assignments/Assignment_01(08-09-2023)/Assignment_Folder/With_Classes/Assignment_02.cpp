
// Author : Asad
// Object Oriented Programming
// Write a C++ program that calculates the factorial of a given positive integer.



// Code starts here
#include<iostream>
using namespace std;

// Defining Class
class Factorial{
	public:
	unsigned int x;
	Factorial(){
		cout<<"\n\tEnter your number: ";cin>>x;
	}
	long double fact(){
		int y=1;
		for(int i=x;i>0;i--){
			y=y*i;
		}
		return y;
	}
};
int main(){
cout<<"\n\n\t\tObject Oriented Programming\n\t\tAssignment# 01: Write a C++ program that calculates the factorial of a given positive integer.\n";
// Creating Factorial Object
Factorial cal_fact;
cout<<"\n\tThe factorial of number is: "<<cal_fact.fact();

return 0;
}

