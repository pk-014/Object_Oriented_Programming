
// Author: Muhammad Asad

// Develop a C++ program that demonstrates re-throwing an exception. Catch an exception in one function and 
// rethrow it to be caught in another function.
#include<iostream>
using namespace std;
void func1(int n);
void func2(int n);
int main(){
	func2(10);
return 0;
}
void func1(int n){
	try{
		if(n>=0)
			throw(2);
	}
	catch(int a){
		cout<<"Exception in function 1.\n";
		throw;
	}
}
void func2(int n){
	try{
		func1(n);
	}
	catch(...){
		cout<<"Exception in function 2.";
	}
}
