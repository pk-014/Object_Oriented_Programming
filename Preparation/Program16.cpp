
// Author: Muhammad Asad

// Write a program using polymorphism in which user enters the number if the number is positive and the number is 
// also even, then print the cube of the number and if the number is odd and negative then print the square of the number.
#include<iostream>
using namespace std;
class Number{
	protected:
	virtual void cal(int n)=0;
};
class PosEven: public Number{
	public:
	void cal(int n){
		cout<<(n*n*n);
	}
};
class NegOdd: public Number{
	public:
	void cal(int n){
		cout<<(n*n);
	}
};
int main(){
cout<<"Enter number: ";int n;cin>>n;
if(n>0 && n%2==0){
	PosEven a1;
	a1.cal(n);
}
else if(n<0 && n%2!=0){
	NegOdd a1;
	a1.cal(n);
}
else{
	cout<<"Enter correct number.";
}
return 0;
}

