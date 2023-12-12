
// Author: Muhammad Asad

// Implement a C++ class called Student to represent student records. Include data members for the student's name, ID and grades. Add methods
// to calculate the average grades and display them.
#include<iostream>
#include<string>
using namespace std;
class Student{
	public:
		string st_name, st_id;
		int mk_en, mk_ur,mk_math,mk_sci;
		void setter(){
			cout<<"Enter student's name: ";getline(cin,st_name);
			cout<<"\nEnter student's id: ";getline(cin,st_id);
			// grades
			cout<<"\nEnter marks in English: ";cin>>mk_en;
			cout<<"\nEnter marks in Urdu: ";cin>>mk_ur;
			cout<<"\nEnter marks in Math: ";cin>>mk_math;
			cout<<"\nEnter marks in Science: ";cin>>mk_sci;
		}
		void average(){
			float average;
			average= (mk_en+mk_ur+mk_math+mk_sci)/4;
			cout<<"\nAverage of student's grade is: "<<average;
		}
};
int main(){
	// code starts here
	Student s1;
	s1.setter();
	s1.average();
return 0;
}

