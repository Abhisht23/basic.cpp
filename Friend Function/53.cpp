#include<iostream>
using namespace std;
class Base
{
	private:
		int a;
	protected:
		int b;
	public:
		int c;
		friend Derieved;
};
class Derieved
{
	public:
		Base b;
	void fun()
	{
		b.a=10;
		b.b=10;
		b.c=10;
	}
};
int main()
{
	cout<<b.a;
}
