#include<iostream>
using namespace std;
int factorial(int num){
	if(num > 1){
		return num*factorial(num-1);
	}
}
int main(){
	int fact=1, num;
	cout<<"Enter the number";
	cin>>num;
//	while(num!=1){
//		fact= fact*num;
//		num--;
//	}
	cout<<"The factorial of a number is "<<factorial(num);
	return 0;
}

