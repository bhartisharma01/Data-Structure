#include<iostream>
using namespace std;
int main(){
	int first=0, second=1, third=0,n;
	cout<<"Enter the number of series";
	cin>>n;
	for(int i =1; i<=n; i++){
		if(i ==1)
		{
			cout<<first<<" ";
			continue;
		}
		if(i == 2){
			cout<<second<<" ";
			continue;
		}
		third = first+ second;
		first = second;
		second = third;
		cout<<third<<" ";
		
	}
	return 0;
}
