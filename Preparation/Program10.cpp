
// Author: Muhammad Asad

//// Define a class to represent a bank account. Include the following members:
//	Data members:
//		1) Name of the depositor
//		2) Account number
//		3) Type of account
//		4) Balance amount in the account.
//	Member functions:
//		1) To assign initial values
//		2) To deposit an amount
//		3) To withdraw an amount after checking the balance
//		4) To display name and balance.
// Write a main program to test the program.

#include<iostream>
#include<string>
using namespace std;
class BankAccount{
	public:
		string depositor, acc_num, acc_type;
		float acc_balance;
		void setter(){
			cout<<"\nEnter Depositor Name: ";getline(cin,depositor);
			cout<<"\nEnter Account Number: ";getline(cin,acc_num);
			cout<<"\nEnter Account Type: ";getline(cin,acc_type);	
			cout<<"\nEnter Account Balance: ";cin>>acc_balance;
		}
		void deposit(){
				cout<<"\n\n=============== Deposit ===============";
				cout<<"\nEnter Amount to deposit: ";float amnt;cin>>amnt;
				acc_balance+=amnt;
		}
		void withdraw(){
				cout<<"\n\n=============== Withdraw ===============";
				cout<<"\nEnter Amount to withdraw: ";float amnt;cin>>amnt;
				if(amnt>acc_balance)
					cout<<"Sorry insufficient balance.";
				else
					acc_balance-=amnt;
		}
		void details(){
				cout<<"\n\n=============== Details ===============";
				cout<<"\nAccount Holder: "<<depositor;
				cout<<"\nAccount Balance: "<<acc_balance;
		}
};
int main(){
	// code starts here
	BankAccount b1;
	b1.setter();
	b1.deposit();
	b1.withdraw();
	b1.details();
return 0;
}

