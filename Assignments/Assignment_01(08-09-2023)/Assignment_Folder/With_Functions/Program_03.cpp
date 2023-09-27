
// Author : Asad
// Object Oriented Programming
// Write a C++ program to check if a number is even or odd.



// Code starts here
#include<iostream>
using namespace std;

// Prototype Declaration
string check(int x);
int main(){
cout<<"\n\n\t\tObject Oriented Programming\n\t\tAssignment# 01: Write a C++ program to check if a number is even or odd.\n";
cout<<"\n\tEnter your number: ";int x;cin>>x;
cout<<"\n\t"<<check(x);

return 0;
}

// Function Defining
string check(int x){
		string y;
		if(x%2==0){
			y="The given Number is Even.";
		}
		else{
			y="The given Number is Odd.";
		}
		return y;
	}
