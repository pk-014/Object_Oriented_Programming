
// Author: Muhammad Asad

// Write a C++ program by using classes to find the greatest and lowest value from the array. If the greatest value is greater 
// than 100, then print “its my good luck”, otherwise print ” it’s my bad luck”.
#include<iostream>
using namespace std;
class X{
	public:
		int arr[5];
		X(int *array){
			for(int i=0;i<5;i++){
				arr[i]=array[i];
			}	
		}
		void sort(){
			int t;
			for(int i=0;i<5;i++){
				for(int j=i;j<5;j++){
					if(arr[i]>arr[j]){
						t=arr[i];
						arr[i]=arr[j];
						arr[j]=t;
					}
				}
			}
		}
		void check(){
			sort();
			if(arr[4]>100){
				cout<<"\nIt's my good luck.";
			}
			else{
				cout<<"\nIt's my bad luck.";
			}
		}
};
int main(){
	// code starts here
	int arr[5]={22,441,1,3,6};
	X x1(arr);
	x1.check();
return 0;
}

