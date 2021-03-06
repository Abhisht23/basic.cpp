//Sum of n natural number using for loop
#include<iostream>
using namespace std;
int main()
{
	int i,n ,sum=0;
	cout<<"enter the value for n"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;	
	}
	cout<<"sum of n natural number is "<<sum<<endl;
	return 0;
}
