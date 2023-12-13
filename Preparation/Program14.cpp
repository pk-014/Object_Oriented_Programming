
// Author: Muhammad Asad

// Write a program that uses a loop to repeatedly ask the user for input and handle exceptions if the input 
// is not valid (e.g., non-numeric input). Continue until valid input is received.
#include<iostream>
using namespace std;
int main(){
	int n;
while(true){
	cout<<"Enter a positive numeric value: ";cin>>n;
	try{
		if(n>0){
			break;
		}
		throw(1);
	}
	catch(...){
		cout<<"\nException found!!!\n";
	}
}
return 0;
}

