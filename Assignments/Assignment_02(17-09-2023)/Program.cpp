
// Author : Asad
// Define a class to represent a bank account. Include the following members:
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

// Code starts here
#include<iostream>
using namespace std;
void separator(int n);
class Bank_account{
	private:
		string acc_holder_name,acc_num,acc_type;
		int acc_pin;
		long double balance_amount;
	public:
		void create_acc(){
			cout<<"\t\tEnter Account Holder Name: ";cin>>acc_holder_name;
			cout<<"\n\t\tEnter Account Number: ";cin>>acc_num;
			cout<<"\n\t\tEnter Account Type: ";cin>>acc_type;
			cout<<"\n\t\tSet Account Pin (format:XXXX): ";cin>>acc_pin;
			cout<<"\n\t\tEnter Account's Balance Amount: ";cin>>balance_amount;
		}
		void deposit(){
			long double n;
			int pin;
			cout<<"\n\t\tEnter Account Pin: ";cin>>pin;
			if(pin==acc_pin){
				cout<<"\n\t\tEnter Amount to Deposit: ";cin>>n;
				balance_amount+=n;
				cout<<"\n\t\tThank you for using our bank. ";
			}
			else{
				cout<<"\n\t\tEntered Wrong pin, Please contact to the department. ";
			}
		}
		void withdraw(){
			long double n;
			int pin;
			cout<<"\n\t\tEnter Account Pin: ";cin>>pin;
			if(pin==acc_pin){
				cout<<"\n\t\tEnter Amount to Withdraw: ";cin>>n;
				if(n>balance_amount){
					cout<<"\n\t\tSorry, Insufficient Balance.";
				}
				else{
					balance_amount-=n;
					cout<<"\n\t\tThanks for using our bank. ";
					cout<<"\n\t\tBalance Available: "<<balance_amount;
				}
			}
			else{
				cout<<"\n\t\tEntered Wrong pin, Please contact to the department. ";
			}
		}
		void check(){
			int pin;
			cout<<"\n\t\tEnter Account Pin: ";cin>>pin;
			if(pin==acc_pin){
				cout<<"\n\t\tAccount Holder Name: "<<acc_holder_name;
				cout<<"\n\t\tAccount Number: "<<acc_num;
				cout<<"\n\t\tAccount Type: "<<acc_type;
				cout<<"\n\t\tAccount Balance: "<<balance_amount;
			}
			else{
				cout<<"\n\t\tEntered Wrong pin, Please contact to the department. ";
			}
		}
};
int main(){
	system("color F0");
	cout<<"\n\n\t\t";separator(20);cout<<" Object Oriented Programming ";separator(20);
	cout<<"\n\n\t\t";cout<<" Assignment 02 ";
	cout<<"\n\t\t";cout<<" Presented by: Asad\n\n";
	// creating object
	Bank_account acc;
	// creating account
	acc.create_acc();
	cout<<"\n\n\t\t";separator(50);
	// depositing amount
	acc.deposit();
	cout<<"\n\n\t\t";separator(50);
//	// withdrawing amount
	acc.withdraw();
	cout<<"\n\n\t\t";separator(50);
//	// checkiing details
	acc.check();
	cout<<"\n\n\t\t";separator(50);
	
	
return 0;
}


// Functions
void separator(int n){
	for(int i = n; i>=0;i--)
		cout<<"=";
}
