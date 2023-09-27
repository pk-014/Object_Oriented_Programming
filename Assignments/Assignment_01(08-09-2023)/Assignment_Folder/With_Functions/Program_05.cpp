
// Author : Asad
// Object Oriented Programming
// Write a C++ program to reverse a string entered by the user.



// Code starts here
#include<iostream>
using namespace std;

// Prototype Declaration
void reverse(string x);

int main(){
cout<<"\n\n\t\tObject Oriented Programming\n\t\tAssignment# 01: Write a C++ program to reverse a string entered by the user.";
cout<<"\n\tEnter your String ";string x;cin>>x;
cout<<"\n\tReversed String is: ";reverse(x);

return 0;
}

// Function Defining
void reverse(string x){
		for(int i=x.length();i>=0;i--){
			cout<<x[i];
		}
	}

