
// Author: Muhammad Asad

// Write a program in C++ that implement the concept of abstraction using three classes - a base class Human and two 
// derived classes male and Female. The base class should declare at least two pure virtual functions. First virtual 
// function takes properties of Human and second function give the eating food of Human. The derived classes should provide 
// their own implementations for these functions with 2 more concrete functions. In the main function.
#include<iostream>
#include<string>
using namespace std;
class Human{
	protected:
		virtual void setter()=0;
		virtual void eat()=0;
};
class Male: public Human{
	public:
		string name,dress;
		void setter(){
			cout<<"\nEnter male name: ";getline(cin,name);
			cout<<"\nEnter male dress: ";getline(cin,dress);
		}
		void eat(){
			cout<<"\nMale eat all halal things.";
		}
		void work(){
			cout<<"\nMale do differnet jobs";
		}
};
class Female: public Human{
	public:
		string name,dress;
		void setter(){
			cout<<"\nEnter female name: ";getline(cin,name);
			cout<<"\nEnter female dress: ";getline(cin,dress);
		}
		void eat(){
			cout<<"\nFemale eat all halal things.";
		}
		void work(){
			cout<<"\nFemale do home chores.";
		}
};
int main(){
	// code starts here
	Male m1;
	m1.setter();
	m1.eat();
	m1.work();
	
	Female f1;
	f1.setter();
	f1.eat();
	f1.work();
return 0;
}

