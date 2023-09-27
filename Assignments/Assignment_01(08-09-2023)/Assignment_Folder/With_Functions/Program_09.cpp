
// Author : Asad
// Object Oriented Programming
// Write a C++ program to find the prime factors of a number.



// Code starts here
#include<iostream>
using namespace std;

// Prototype Declaration
void factors(int x);
int main(){
cout<<"\n\n\t\tObject Oriented Programming\n\t\tAssignment# 01: Write a C++ program to find the prime factors of a number.";
cout<<"\nEnter Number: ";int num;cin>>num;
cout<<"\n\tPrime factors of the given numbers are: ";factors(num);


return 0;
}

// Function Defining
void factors(int x){
		for(int i=x;i>0;i--){
			if(x%i==0){
				cout<<i<<", ";
			}
		}
	}
