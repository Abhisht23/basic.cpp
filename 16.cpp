//Find HCF 
#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Enter the value of m and n"<<endl;
	cin>>m>>n;
	while(m!=n)
	{
	if(m>n)
	{
		m=m-n;
	}
	else
	{
		n=n-m;
	}
	}
	cout<<"GCD or HCF is "<<m;
	return 0;
}
