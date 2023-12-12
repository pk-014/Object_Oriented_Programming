
// Author: Muhammad Asad

// Write a C++ class BankAccount that represents a simple bank account. Include methods for depositing & withdrawing
// funds and display the account balance.
#include<iostream>
#include<string>
using namespace std;
class BankAccount{
	public:
		string bank_name, acc_holder, acc_num;
		int acc_balance=0;
		void setter(){
			cout<<"Enter bank name: ";getline(cin,bank_name);
			cout<<"\nEnter Account holder's name: ";getline(cin,acc_holder);
			cout<<"\nEnter Account number: ";getline(cin,acc_num);
		}
		void deposit(){
			cout<<"\n========== Thanks for using "<<bank_name<<" ==========";
			cout<<"\n\tEnter amount to deposit: ";int amnt;cin>>amnt;acc_balance+=amnt;
		}
		void withdraw(){
			cout<<"\n========== Thanks for using "<<bank_name<<" ==========";
			cout<<"\n\tEnter amount to withdraw: ";int amnt;cin>>amnt;
			if(amnt>=acc_balance){
				cout<<"\n Sorry insufficient balance.";
			}
			else{
				acc_balance-=amnt;
			}
		}
		void details(){
			cout<<"\n========== Thanks for using "<<bank_name<<" ==========";
			cout<<"\n\tAccount holder: "<<acc_holder;
			cout<<"\n\tAccount number: "<<acc_num;
			cout<<"\n\tBalance Available: "<<acc_balance;
		}
};
int main(){
	// code starts here
	BankAccount a1;
	a1.setter();
	a1.deposit();
	a1.withdraw();
	a1.details();
return 0;
}

