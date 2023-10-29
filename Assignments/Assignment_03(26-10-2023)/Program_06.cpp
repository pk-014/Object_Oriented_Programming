
// Author : Asad

//Access Control: Define a base class Base and a derived class Derived. 
//Test the accessibility of different members (public, private, protected) from the derived class.

// Code starts here
#include<iostream>
using namespace std;
class Human{
	public:
		string name;
	protected:
		string cast;
	private:
		string phone;
};
class Teacher:public Human{
	public:
		string designation;
	protected:
		string degree;
	private:
		int salary;
};
int main(){
	Human h;
	h.name = "Akram";	  //only accessible because its public
	Teacher akram;
	akram.designation="Professor"; 
	akram.name="Akram";    //accessible because its public in base class
return 0;
}

