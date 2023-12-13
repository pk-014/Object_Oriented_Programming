
// Author: Muhammad Asad

// Define a base class University with 3 private variables,  A function Print() , A virtual function Input(). 
// Derive a class Department from Base and override Input ()  and Print(). Create objects and pointer of both 
// classes and call the print() method to observe dynamic binding.
#include<iostream>
#include<string>
using namespace std;
class University{
	private:
		string name, level, address;
	public:
		void print(){
			cout<<"In University class";
		}
		virtual void input()=0;
};
class Department: public University{
	public:
		void input(){
			cout<<"Overirding Input()";
		}
		void print(){
			cout<<"In Department class";
		}
};
int main(){
cout<<"Creating objects\n";
//University u1; because abstract class
Department d1;
d1.print();
cout<<"\nCreating pointers\n";
University* u2;
Department* d2;
u2->print();cout<<endl;
d2->print();
return 0;
}

