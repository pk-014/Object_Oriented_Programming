
// Author: Muhammad Asad

// Create an abstract base class BankAccount with a pure virtual function calculateInterest(). Derive two classes SavingsAccount 
// and CurrentAccount from BankAccount and implement calculateInterest() accordingly.
#include<iostream>
using namespace std;
class Bank{
	protected:
		virtual void calinterest()=0;
};
class Saving: public Bank{
	public:
		void calinterest(){
			cout<<"Saving account";
		}
};
class Current: public Bank{
	public:
		void calinterest(){
			cout<<"Current account";
		}
};
int main(){
Saving s;
Current c;
s.calinterest();
c.calinterest();

return 0;
}

