#include<iostream>
using namespace std;
class Base
{
public:
	void fun1()
	{
		cout<<"fun1 of Base "<<endl;
	}
};
class Derived: public Base
{
public:
	void fun2()
	{	
		cout<<"fun2 of Derived"<<endl;
	}
};
int main()
{
	Derived d;
	d.fun2();
	d.fun1();
	
	Base b;
//	b.fun2();										//This will give error as not belongs to base class
	b.fun1();
	//using base class pointer
	Base *p;
	p->fun1();
	p->fun2();										//Base class can not access within derieved class or can say not point in derievd class
	return 0;
}
