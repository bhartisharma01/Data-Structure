#include<iostream>
using namespace std;
int main(){
//	string str;
//	cout<<"Enter the string";
//	cin>>str;
//	for(int i = str.length()-1; i>=0;i--)
//	cout<<str[i];

int num, digit, rem=0;
cout<<"Enter the number";
cin>> num;
while (num !=0){
	digit = num% 10;
	rem =rem*10+ digit;
	num = num/10;
}
cout<<"reversed number is "<<rem;

	
	return 0;
}
