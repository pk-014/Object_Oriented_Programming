
// Author : Asad
// Object Oriented Programming
// Write a C++ program to reverse a string entered by the user.



// Code starts here
#include<iostream>
using namespace std;

// Defining Class
class Reverse{
	public:
	string x;
	Reverse(){
		cout<<"\n\tEnter your String ";cin>>x;
	}
	
	void reverse(){
		for(int i=x.length();i>=0;i--){
			cout<<x[i];
		}
	}
};
int main(){
cout<<"\n\n\t\tObject Oriented Programming\n\t\tAssignment# 01: Write a C++ program to reverse a string entered by the user.";
// Creating Factorial Object
Reverse rev;
cout<<"\n\tReversed String is: ";rev.reverse();

return 0;
}

