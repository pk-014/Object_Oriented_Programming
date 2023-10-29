
// Author : Asad

// Code starts here
#include<iostream>
using namespace std;
class Base{
	public:
		void base_simple_func(){
			cout<<"This is base class simple function\n";
		}
		void overriden_func(){
			cout<<"This is base class overriden function\n";
		}
};
class Derived:public Base{
	public:
		void derived_simple_func(){
			cout<<"This is derived class simple function\n";
		}
		void overriden_func(){
			cout<<"This is derived class overriden function\n";
		}
};
int main(){
cout<<"====== Base class functions with object ======\n";
Base base_obj;
base_obj.base_simple_func();
base_obj.overriden_func();
cout<<endl;

cout<<"====== Derived class functions with object ======\n";
Derived derived_obj;
derived_obj.derived_simple_func();
derived_obj.base_simple_func();
derived_obj.overriden_func();
cout<<endl;

//Accessing Base class overriden function with derived class object
cout<<"====== Accessing Base class overriden function with derived class object ======\n";
derived_obj.Base::overriden_func();
cout<<endl;

//Accessing Derived class overriden function with base class object
cout<<"====== Accessing Derived class overriden function with base class object ======\n";
Derived derived_obj2;
//derived_obj2.overriden_func();
Base* baseptr = &derived_obj2;    //Now baseptr_obj has become derived class object
baseptr->overriden_func();
return 0;
}

