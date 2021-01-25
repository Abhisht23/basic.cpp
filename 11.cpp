#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%1==n&&n%i==n)
		{
			cout<<n<<"is prime number"<<endl;
		}
		else{
			cout<<"not prime no.";
		}
	}
	return 0;
}
