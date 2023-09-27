
// Author : Asad
// Object Oriented Programming
// Write a C++ program to determine whether a given year is a leap year or not.



// Code starts here
#include<iostream>
using namespace std;

// Prototype Declaration
void is_leap(int x);

int main(){
cout<<"\n\n\t\tObject Oriented Programming\n\t\tAssignment# 01: Write a C++ program to determine whether a given year is a leap year or not.";
cout<<"\nEnter year: ";int year;cin>>year;
is_leap(year);

return 0;
}

// Function Defining
void is_leap(int x){
		if(x%4==0){
			cout<<"\n\tGiven Year is Leap Year.";
		}
		else{
			cout<<"\n\tGiven Year is not Leap Year.";
		}
	}
