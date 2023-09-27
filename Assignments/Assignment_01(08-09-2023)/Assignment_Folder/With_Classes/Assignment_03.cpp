
// Author : Asad
// Object Oriented Programming
// Write a C++ program to check if a number is even or odd.



// Code starts here
#include<iostream>
using namespace std;

// Defining Class
class Even_Odd{
	public:
	int x;
	Even_Odd(){
		cout<<"\n\tEnter your number: ";cin>>x;
	}
	string check(){
		string y;
		if(x%2==0){
			y="The given Number is Even.";
		}
		else{
			y="The given Number is Odd.";
		}
		return y;
	}
};
int main(){
cout<<"\n\n\t\tObject Oriented Programming\n\t\tAssignment# 01: Write a C++ program to check if a number is even or odd.\n";
// Creating Factorial Object
Even_Odd even_odd;
cout<<"\n\t"<<even_odd.check();

return 0;
}

