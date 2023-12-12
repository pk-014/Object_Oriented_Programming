
// Author: Muhammad Asad

// Write a program that calculate the sum of all multiples of 3 or 5 below a given positive interger n.
#include<iostream>
using namespace std;
void sum(int n);
int main(){
	// code starts here
	cout<<"Enter an interger: ";int n;
	cin>>n;
	sum(n);
return 0;
}
void sum(int n){
	int sum=0;
	for(int i=n-1;i>1;i--){
		if(i%3==0 || i%5==0)
			sum+=i;
	}
	cout<<"\nThe sum of all multiples of 3 and 5 is: "<<sum;
}

