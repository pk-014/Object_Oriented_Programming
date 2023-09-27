
// Author : Asad
// Object Oriented Programming
// Write a C++ program to implement a simple calculator with addition, subtraction, multiplication,and division operations.




// Code starts here
#include<iostream>
using namespace std;

// Prototype Declaration
long double sum(long double x,long double y);
long double sub(long double x,long double y);
long double div(long double x,long double y);
long double mul(long double x,long double y);


int main(){
cout<<"\n\n\t\tObject Oriented Programming\n\t\tAssignment# 01: Write a C++ program to implement a simple calculator with addition, subtraction, multiplication,and division operations.";
cout<<"\nEnter First Number: ";long double x;cin>>x;
cout<<"\nEnter Second Number: ";long double y;cin>>y;
cout<<"\n\tEnter Operation (+,-,*,/) : ";char op;cin>>op;
switch(op) {
	case '+':
		cout<<"\n\tSum of these numbers is: "<<sum(x,y);	
		break;
	case '-':
		cout<<"\n\tSum of these numbers is: "<<sub(x,y);
		break;
	case '*':
		cout<<"\n\tSum of these numbers is: "<<mul(x,y);
		break;
	case '/':
		cout<<"\n\tSum of these numbers is: "<<div(x,y);
		break;
	default:
		cout<<"\n\tERROR";			
}


return 0;
}

// Function Defining
long double sum(long double x,long double y){
		return x+y;
	}
long double sub(long double x,long double y){
		return x-y;
	}
long double mul(long double x,long double y){
		return x*y;
	}
long double div(long double x,long double y){
		return x/y;
	}
