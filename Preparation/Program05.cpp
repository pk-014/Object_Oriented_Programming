
// Author: Muhammad Asad

// Write a C++ prgram that integer from user using constructor. Calculate th sum of all multiples of 3 and 5 below a given integer.
#include<iostream>
using namespace std;
class X{
	public:
		int n;
		X(int num){
			n=num;
		}	
		void cal(){
			int sum=0;
			for(int i=n-1; i>1;i--){
				if(i%3==0 || i%5==0){
					sum+=i;
				}
			}
			cout<<"\nSum is: "<<sum;
		}
};
int main(){
	// code starts here
	X a1(10);
	a1.cal();
return 0;
}

