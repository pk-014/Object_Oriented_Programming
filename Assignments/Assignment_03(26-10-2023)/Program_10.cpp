
// Author : Asad

//Dynamic Binding: Define a base class Base with a virtual function display(). 
//Derive a class Derived from Base and override display(). Create objects of both 
//classes and call the display() method to observe dynamic binding.

// Code starts here
#include<iostream>
using namespace std;
class Base{
	public:
	void display(){
		print();
	}
	private:
	virtual void print(){
		cout<<"\nDisplaying from Base class";
	}
};
class Derived:public Base{
	public:
	void print(){
		cout<<"\nDisplaying from Derived class";
	}
};
int main(){
Base b; b.display();
Derived d; d.display();
return 0;
}

