//find perfect number
#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<endl;
			sum=sum+i;
		}
	}
		cout<<"sum is "<<sum<<endl;
		if(sum==n*2)
		{
			cout<<n<<"is perfect no."<<endl;
		}
		else{
			cout<<"not perfect no.";
		}
	
	return 0;
}
