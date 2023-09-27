
// Author : Asad
// Object Oriented Programming
// Write a C++ program to implement a simple calculator with addition, subtraction, multiplication,and division operations.




// Code starts here
#include<iostream>
using namespace std;

// Defining Class
class Calculator{
	public:
	long double x,y;
	Calculator(){
		cout<<"\n\tEnter First value: ";cin>>x;
		cout<<"\n\tEnter Second value: ";cin>>y;
	}
	
	long double sum(){
		return x+y;
	}
	long double sub(){
		return x-y;
	}
	long double mul(){
		return x*y;
	}
	long double div(){
		return x/y;
	}
};
int main(){
cout<<"\n\n\t\tObject Oriented Programming\n\t\tAssignment# 01: Write a C++ program to implement a simple calculator with addition, subtraction, multiplication,and division operations.";
// Creating Factorial Object
Calculator cal;
cout<<"\n\tEnter Operation (+,-,*,/) : ";char op;cin>>op;
switch(op) {
	case '+':
		cout<<"\n\tSum of these numbers is: "<<cal.sum();	
		break;
	case '-':
		cout<<"\n\tSum of these numbers is: "<<cal.sub();
		break;
	case '*':
		cout<<"\n\tSum of these numbers is: "<<cal.mul();
		break;
	case '/':
		cout<<"\n\tSum of these numbers is: "<<cal.div();
		break;
	default:
		cout<<"\n\tERROR";			
}


return 0;
}

