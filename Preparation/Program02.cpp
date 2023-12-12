
// Author: Muhammad Asad

// Define a C++ class called Person with attributes for a person's name, age and address. Include methods
// to set and display these attributes.
#include<iostream>
#include<string>
using namespace std;
class Person{
	public:
		string name, address,age;
		void setter(){
			cout<<"Enter person's' name: ";getline(cin,name);
			cout<<"\nEnter person's age: ";getline(cin,age);
			cout<<"\nEnter person's address: ";getline(cin,address);
		}
		void getter(){
			cout<<"\nPerson's' name: "<<name;
			cout<<"\nPerson's age: "<<age;
			cout<<"\nPerson's address: "<<address;
		}
};
int main(){
	// code starts here
	Person p1;
	p1.setter();
	p1.getter();
return 0;
}

