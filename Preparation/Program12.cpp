
// Author: Muhammad Asad

// Write a program that calculates the square root of a number. Catch exceptions for negative numbers and 
// non-numeric input using multiple catch blocks for different exception types.
#include<iostream>
#include<math.h>
using namespace std;

int main(){
	cout<<"Enter a number: ";int n;cin>>n;float sqr;
		try{
			if(n<0){
				throw(2);
			}
			if(cin.fail()){
				throw('c');
			}
			sqr=sqrt(n);
			cout<<sqr;
		}
		catch(char a){
			cout<<"Number must be numeric";
		}
		catch(int a){
			cout<<"Number must be positive.";
		}
return 0;
}

