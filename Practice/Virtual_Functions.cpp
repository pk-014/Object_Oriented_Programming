
// Author : Asad

// Code starts here
#include<iostream>
using namespace std;
class Base{
	public:
		virtual void display(){
			cout<<"Displaying Base class\n";
		}
	    virtual void details(){
			cout<<"Base class\n";
		}
		
};

class Derived: public Base{
	public:
		void display(){
			cout<<"Displaying Derived class\n";
		}
		void details(){
			cout<<"Derived class\n";
		}		
};

int main(){
//Main Class Pointer Object
Base *base_ptr;
//Derived Class Object
Derived derived_obj;
//Calling Derived Class Functions
derived_obj.display();
derived_obj.details();
//Calling Base Class Functions
//base_ptr->details();
//base_ptr->display();

//Calling Derived Class Functions From Base Class Pointer
//base_ptr=&derived_obj;
//base_ptr->display();
//base_ptr->details();


//Calling Base Class Functions From Derived Class
base_ptr->display();



return 0;
}

