// palindrome
#include <iostream>
using namespace std;
int main()
{
	int n,r,rev=0,digit;
	cout<<"Enter n"<<endl;
	cin>>n;
	n=digit;
	while(n>0)
	{
		r=n %10;
		n=n/10;
		rev=(rev*10)+r;
	}
	cout<<rev<<endl;
	if (digit == rev)
	cout << " The number is a palindrome";
	else
	cout << " The number is not a palindrome";
	return 0;
}
