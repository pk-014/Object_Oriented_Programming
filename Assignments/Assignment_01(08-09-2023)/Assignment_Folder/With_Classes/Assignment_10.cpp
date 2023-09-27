
// Author : Asad
// Object Oriented Programming
// Write a C++ program to determine whether a given year is a leap year or not.



// Code starts here
#include<iostream>
using namespace std;

// Defining Class
class Year{
	public:
	int x;
	Year(){
		cout<<"\n\tEnter Year: ";cin>>x;
	}
	bool is_leap(){
		bool y;
		if(x%4==0){
			y=true;
		}
		else{
			y=false;
		}
		return y;
	}
};
int main(){
cout<<"\n\n\t\tObject Oriented Programming\n\t\tAssignment# 01: Write a C++ program to determine whether a given year is a leap year or not.";
// Creating Factorial Object
Year year;
if(year.is_leap()==true)
cout<<"\n\tGiven Year is Leap Year.";
else
cout<<"\n\tGiven Year is not Leap Year.";


return 0;
}

