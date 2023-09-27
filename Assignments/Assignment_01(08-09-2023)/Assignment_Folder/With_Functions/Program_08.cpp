
// Author : Asad
// Object Oriented Programming
// Write a C++ program to generate a Fibonacci sequence of a given length.



// Code starts here
#include<iostream>
using namespace std;

// Prototype Declaration
void fib_generate(int x);
int main(){
cout<<"\n\n\t\tObject Oriented Programming\n\t\tAssignment# 01: Write a C++ program to generate a Fibonacci sequence of a given length.";
cout<<"\nEnter length: ";int len;cin>>len;
cout<<"\n\t";fib_generate(len);


return 0;
}

// Function Defining
void fib_generate(int x){
		long double n0=0,n1=1;
		cout<<n0<<" ";
		for(int i=0;i<x-1;i++){
			long double n2=n0+n1;
			cout<<n2<<" ";
			n0=n1;n1=n2; 
		}
	}
