#include<iostream>
#include <math.h>
using namespace std;
int main(){
	int num,totalDigits, n=0, rem, result=0, powerValue;
	cout<<"Enter the number";
	cin>>num;
	n = num;
	while(n !=0){
		n = n / 10;
		++totalDigits;
	}
	n = num;
	//cout<<"number of digits are" <<totalDigits;
	while(n != 0){
		rem = n % 10;
		powerValue=pow(rem, totalDigits);
		result+= powerValue;
		n = n / 10;
	}
	if(result == num)
	cout<<num<<" is armstrong";
	else
	cout<<num<<" is not a armstrong";
	return 0;
}
