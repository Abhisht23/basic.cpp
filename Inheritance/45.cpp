//Access specifier
#include<iostream>
using namespace std;
class Base
{
private:											//can accessed by function inside class but can't be accessed by derievd class and object 
	int a;
protected:											//can't accessed by object
	 int b;
public:												//can accessed by all 
	 int c;
void funBase()
{
a=10;
b=5;
c=15;
}
};
class Derived:public Base
{
public:
void funDerived()
{
a=10;
b=5;
c=15;
}
};
int main()
{
Base b;
b.a=10;
b.b=5;
b.c=20;
}
