
// Author: Muhammad Asad

// 11.	Write a program that calculates the average of N integers. The program should prompt the user to enter 
// the value for N and then afterward must enter all N numbers. If the user enters a negative value for N, then 
// an exception should be thrown (and caught) with the message “ N must be positive.” If there is any exception as 
// the user is entering the N number, an error message should be displayed, and the user prompted to enter the number again.
#include<iostream>
using namespace std;
int main(){
	cout<<"Enter the value of n: ";double n;cin>>n;double sum=0;
	for(int i=n;i>0;i--){
		cout<<"\nEnter a number: ";double num;cin>>num;
		try{
			if(num<0)
				throw(num);
			else
				sum=sum+num;
		}
		catch(...){
			cout<<"\n==>ERROR! Number must be positive.";
			i=i+1;
		}
	}
	cout<<(sum/n);
return 0;
}

