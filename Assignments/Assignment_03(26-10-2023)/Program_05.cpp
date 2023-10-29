
// Author : Asad

//Create an abstract base class BankAccount with a pure virtual function 
//calculateInterest(). Derive two classes SavingsAccount and CurrentAccount
// from BankAccount and implement calculateInterest() accordingly.

// Code starts here
#include<iostream>
using namespace std;
class BankAccount{
	public:
		virtual void calculateInterest()=0;
};
class SavingAccount: public BankAccount{
	public:
		void calculateInterest(){
			cout<<"\nCalculating Saving account interest.";
		}
};
class CurrentAccount: public BankAccount{
	public:
		void calculateInterest(){
			cout<<"\nCalculating Current account interest.";
		}
};
int main(){
SavingAccount s;
s.calculateInterest();
CurrentAccount c;
c.calculateInterest();
return 0;
}

