
// Author : Asad
// Object Oriented Programming
// Write a C++ program to generate a Fibonacci sequence of a given length.



// Code starts here
#include<iostream>
using namespace std;

// Defining Class
class Fibonacci{
	public:
	int x;
	Fibonacci(){
		cout<<"\n\tEnter length of series: ";cin>>x;
	}
	void generate(){
		long double n0=0,n1=1;
		cout<<n0<<" ";
		for(int i=0;i<x-1;i++){
			long double n2=n0+n1;
			cout<<n2<<" ";
			n0=n1;n1=n2; 
		}
	}
};
int main(){
cout<<"\n\n\t\tObject Oriented Programming\n\t\tAssignment# 01: Write a C++ program to generate a Fibonacci sequence of a given length.";
// Creating Factorial Object
Fibonacci fib;
cout<<"\n\t";fib.generate();


return 0;
}


