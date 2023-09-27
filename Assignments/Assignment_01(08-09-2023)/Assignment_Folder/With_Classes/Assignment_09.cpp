
// Author : Asad
// Object Oriented Programming
// Write a C++ program to find the prime factors of a number.



// Code starts here
#include<iostream>
using namespace std;

// Defining Class
class Prime{
	public:
	int x;
	Prime(){
		cout<<"\n\tEnter your number: ";cin>>x;
	}
	void factors(){
		for(int i=x;i>0;i--){
			if(x%i==0){
				cout<<i<<", ";
			}
		}
	}
};
int main(){
cout<<"\n\n\t\tObject Oriented Programming\n\t\tAssignment# 01: Write a C++ program to find the prime factors of a number.";
// Creating Factorial Object
Prime prime;
cout<<"\n\tPrime factors of the given numbers are: ";prime.factors();


return 0;
}

