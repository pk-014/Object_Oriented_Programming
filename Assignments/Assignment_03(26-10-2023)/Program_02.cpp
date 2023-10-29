
// Author : Asad

//Multiple Inheritance: Create a base class Person with attributes 
//name and age. Create a derived class Student which inherits from 
//Person and has additional attributes studentId and grade. Implement appropriate methods.


// Code starts here
#include<iostream>
using namespace std;
class Person{
	public:
	string name;int age;
};
class Student: public Person{
	public:
	string st_id,grade;
	void student_details(){
		cout<<"\nStudent's name: "<<name<<"\nStudent's age: "<<age<<"\nStudent's id: "<<st_id<<"\nStudent's grade: "<<grade;
	}
};
int main(){
	Student st;
	st.name="Umer";
	st.age=23;
	st.st_id="BSF2201767";
	st.grade="Grade-2";
	st.student_details();

return 0;
}

