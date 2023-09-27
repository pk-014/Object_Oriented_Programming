
// Author : Asad

// Code starts here
#include<iostream>
using namespace std;
class Employee{
	public:
		string empid;int salary;
	Employee(string empid,int salary){
		empid=empid;salary=salary;
	}
};
class Manager: public Employee{
	public:
		string post;
	Manager(string empid,int salary,string post){
		empid=empid;salary=salary;post=post;
	}
};
class Engineer: public Employee{
	public:
		string site;
	Engineer(string empid,int salary,string site){
		empid=empid;salary=salary;site=site;
	}
};





int main(){

Employee emp("jhgjh5",5500);

Manager mng("sdf3",2333,"lol");

Engineer eng("sf33232",5435,"asd");

return 0;
}

