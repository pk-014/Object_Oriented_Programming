
// Author : Asad
// Object Oriented Programming
// Write a C++ program to find the largest among three numbers entered by the user.



// Code starts here
#include<iostream>
using namespace std;

// Prototype Declaration
int large(int arr[]);
int main(){
cout<<"\n\n\t\tObject Oriented Programming\n\t\tAssignment# 01: Write a C++ program to find the largest among three numbers entered by the user.\n";
int arr[3];
for(int i=0;i<3;i++){
			cout<<"\n\tEnter your "<< i <<" number: ";cin>>arr[i];
		}
cout<<"\n\tLargest Number entered is : "<<large(arr);
return 0;
}

// Defining Function
int large(int arr[3]){
		for(int i=0;i<3;i++){
			for(int j=i+1;j<3;j++){
				if(arr[i]>arr[j]){
					int temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
		return(arr[2]);
	}

