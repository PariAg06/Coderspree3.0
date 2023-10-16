#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n, num,sum_even=0,sum_odd=0;
	cin>>n;
	while(n>0){
	num=n%10;
	if(num%2==0)
	{
		sum_even=num+sum_even;
	}
	else{
		sum_odd=num+sum_odd;
	}
	n=n/10;
	}

    cout<<sum_even<<" "<<sum_odd;

	return 0;
	
}
